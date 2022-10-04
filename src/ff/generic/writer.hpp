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
#include "../compression/compression.hpp"

class ffGenericWriter
{
public:
    ffGenericWriter() {}
    ~ffGenericWriter() {}

    void write(const std::string& filename, const std::string& str, ffCompressionAlgorithm comp = NoCompression)
    {  
        write(filename, str.data(), str.size(), comp);
    }

    void write(const std::string& filename, const char* data, const uint64_t& size, ffCompressionAlgorithm comp = NoCompression)
    {
        std::ofstream f(filename, std::ios::binary);
        if (f.is_open())
        {
            ffGenericHeader header = {};
            header.magic = g_magic;
            header.version = g_version;
            header.originalSize = size;
            header.compression = comp;
            std::string tmp(data, size);
            compressor::process(tmp, comp);
            header.size = tmp.size();
            size_t s = sizeof(header) + header.size;
            f.write((const char*)&header, sizeof(ffGenericHeader));
            f.write(tmp.data(), header.size);
            f.close();
        }
    }
};

#endif