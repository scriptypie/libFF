#pragma once
#ifndef ff__compression__compression_hpp
#define ff__compression__compression_hpp

#include "lz4/compress.hpp"
#include "lz4/decompress.hpp"

enum ffCompressionAlgorithm : uint32_t 
{
    ffCompressionAlgorithmNoCompression     = 0x00000000,
    ffCompressionAlgorithmLZ4               = 0x0000000f,
};

std::ostream& operator<<(std::ostream& os, const ffCompressionAlgorithm& comp)
{
    switch (comp)
    {
        case ffCompressionAlgorithmNoCompression: return    os << "ffCompressionAlgorithmNoCompression";
        case ffCompressionAlgorithmLZ4: return              os << "ffCompressionAlgorithmLZ4";
    }
}

struct compressor
{
    static void process(std::string& s, const ffCompressionAlgorithm comp)
    {
        switch (comp)
        {
            case ffCompressionAlgorithmNoCompression: return;
            case ffCompressionAlgorithmLZ4: { s = ffCompressStringWithLZ4(s); break; }
        }        
    }
};

struct decompressor
{
    static void process(std::string& s, const uint32_t& compression, const size_t& origSize)
    {
        switch (compression)
        {
            case ffCompressionAlgorithmNoCompression: return;
            case ffCompressionAlgorithmLZ4: { s = ffDecompressStringWithLZ4(s, origSize); };
        }        
    }
};

#endif
