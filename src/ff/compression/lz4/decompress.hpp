#pragma once
#ifndef ff__compression__lz4_hpp
#define ff__compression__lz4_hpp

#include "../../common/config.hpp"
#include "lz4.h"

std::string ffDecompressStringWithLZ4(const std::string& input, const size_t& originalSize)
{
    char* data = (char*)malloc(originalSize);
    int size = LZ4_uncompress((char*)input.data(), data, originalSize);
    return std::string(data, originalSize);
}

#endif
