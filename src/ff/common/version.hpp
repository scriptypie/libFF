/** 
 * Copyright (R) scriptypie - All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Krivenko (scriptypie) Slava <miracl303@mail.ru>, 4 October 2022
 */
#pragma once
#ifndef ff__common__version_hpp
#define ff__common__version_hpp

#include <cstdint>

struct version_t
{
    uint32_t highPart;
    uint32_t lowPart;
};

bool operator==(const version_t& a, const version_t& b)
{
    return a.highPart == b.highPart && a.lowPart == b.lowPart;
}

bool operator!=(const version_t& a, const version_t& b)
{
    return a.highPart != b.highPart || a.lowPart != b.lowPart;
}

bool operator<(const version_t& a, const version_t& b)
{
    return (a.highPart + a.lowPart) < (b.highPart + b.lowPart);
}

bool operator>(const version_t& a, const version_t& b)
{
    return (a.highPart + a.lowPart) > (b.highPart + b.lowPart);
}

#endif