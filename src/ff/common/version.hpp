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

typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

struct version_t
{
    uint16_t highPart;
    uint16_t lowPart;
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

bool operator<=(const version_t& a, const version_t& b)
{
    return (a.highPart + a.lowPart) <= (b.highPart + b.lowPart);
}

bool operator>(const version_t& a, const version_t& b)
{
    return (a.highPart + a.lowPart) > (b.highPart + b.lowPart);
}

#endif