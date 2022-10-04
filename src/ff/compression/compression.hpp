#pragma once
#ifndef ff__compression__compression_hpp
#define ff__compression__compression_hpp

#include "../generic/header.hpp"

#include "lz4/compress.hpp"
#include "lz4/decompress.hpp"

enum ffCompressionAlgorithm : uint64_t 
{
    NoCompression       = 0x0000000000000000,

    LZ4Compression      = 0x00000000000000f0,
};

std::ostream& operator<<(std::ostream& os, const ffCompressionAlgorithm& comp)
{
    switch (comp)
    {
        case NoCompression: return os << "NoCompression";
        case LZ4Compression: return os << "LZ4Compression";
    }
}

struct compressor
{
    static void process(std::string& s, const ffCompressionAlgorithm comp)
    {
        switch (comp)
        {
            case NoCompression: return;
            case LZ4Compression: { s = ffCompressStringWithLZ4(s); break; }
        }        
    }
};

struct decompressor
{
    static void process(std::string& s, const ffGenericHeader header)
    {
        switch (header.compression)
        {
            case NoCompression: return;
            case LZ4Compression: { s = ffDecompressStringWithLZ4(s, header.originalSize); };
        }        
    }
};

#endif
