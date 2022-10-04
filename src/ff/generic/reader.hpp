/** 
 * Copyright (R) scriptypie - All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Krivenko (scriptypie) Slava <miracl303@mail.ru>, 4 October 2022
 */
#pragma once
#ifndef ff__generic_reader_hpp
#define ff__generic_reader_hpp

#include "header.hpp"
#include "../compression/compression.hpp"

class ffGenericReader
{
    ffGenericHeader header;
    std::ifstream f;
public:
    ffGenericReader() {}
    ~ffGenericReader() { f.close(); }
    ffGenericHeader view(const std::string& filename)
    {
        f.open(filename, std::ios::binary);
        if (f.is_open())
            f.read((char*)&header, sizeof(ffGenericHeader));
        return header;
    }
    const uint64_t& data_size() const
    {
        return header.size;
    }
    bool compatible()
    {
        if (g_magic != header.magic) return false;
        if (g_version != header.version) return false;
        if (!f.is_open()) return false;
        return true;
    }
    const std::string read()
    {
        char* data = (char*)malloc(header.size);
        if (!data) return "";
        f.read(data, header.size);
        std::string tmp(std::move(data), header.size);
        decompressor::process(tmp, header);
        return tmp;
    }
};

#endif