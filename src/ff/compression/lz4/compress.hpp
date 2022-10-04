#pragma once
#ifndef ff__compression__lz4__compress_hpp
#define ff__compression__lz4__compress_hpp

#include "../../common/config.hpp"
#include "lz4.h"

inline std::string ffCompressStringWithLZ4(const std::string& input)
{
    char* out = (char*)malloc(input.size());
    int size = LZ4_compress((char*)input.data(), out, input.size());
    return std::string(out, size);
}

#endif