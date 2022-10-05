#include "ff/encoding/rev8/decode.hpp"

void ffDecodeStringWithRev8(std::string& s)
{
    for (size_t i = 0; i < s.size(); i++) s[i] = ~s[i];
}
