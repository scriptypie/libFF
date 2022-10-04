/** 
 * Copyright (R) scriptypie - All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Krivenko (scriptypie) Slava <miracl303@mail.ru>, 4 October 2022
 */
#pragma once
#ifndef ff__generic__writer_hpp
#define ff__generic__writer_hpp

#include "header.hpp"

class ffGenericWriter
{
public:
    ffGenericWriter() {}
    ~ffGenericWriter() {}

    void write(const std::string& filename, const char* data, const uint64_t& size)
    {
        std::ofstream f(filename, std::ios::binary);
        if (f.is_open())
        {
            ffGenericHeader header = {};
            header.magic = g_magic;
            header.version = g_version;
            header.size = size;
            size_t s = sizeof(header) + header.size;
            f.write((const char*)&header, sizeof(ffGenericHeader));
            f.write(data, size);
            f.close();
        }
    }
};

#endif