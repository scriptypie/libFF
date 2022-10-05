#pragma once
#ifndef ff__encoding__encoding_hpp
#define ff__encoding__encoding_hpp

#include <ostream>

#include "rev8/encode.hpp"
#include "rev8/decode.hpp"

enum ffEncodingAlgorithm : uint32_t
{
    ffEncodingAlgorithmRev8 = 0x00000000,
};

std::ostream& operator<<(std::ostream& os, const ffEncodingAlgorithm& enc)
{
    switch (enc)
    {
        case ffEncodingAlgorithmRev8: return os << "ffEncodingAlgorithmRev8";
    }
}

struct encoder
{
    static void process(std::string& s, const uint32_t& enc)
    {
        switch (enc)
        {
            case ffEncodingAlgorithmRev8: { ffEncodeStringWithRev8(s); break; }
        }
    }
};

struct decoder
{
    static void process(std::string& s, const uint32_t& enc)
    {
        switch (enc)
        {
            case ffEncodingAlgorithmRev8: { ffDecodeStringWithRev8(s); break; }
        }
    }
};

#endif
