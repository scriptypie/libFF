/** 
 * Copyright (R) scriptypie - All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Krivenko (scriptypie) Slava <miracl303@mail.ru>, 4 October 2022
 */
#pragma once
#ifndef ff__generic__header_hpp
#define ff__generic__header_hpp

#include "../common/config.hpp"

#include <fstream>

struct ffGenericHeader
{
    // magic gives us a ability to identify if this file really a ff file
    version_t magic; 
    // version of header. reader version must be equal or higher
    version_t version; 
    // size of file, excluding header, arter compression
    uint64_t size; 
    // size of file, excluding header, before compression
    uint64_t originalSize; 
    uint64_t compression;
};

std::ostream& operator<<(std::ostream& os, const ffGenericHeader& header)
{
    return os 
    << "Header structure:\n"
    << "Magic: (" << header.magic.highPart << "" << header.magic.lowPart << ")\n"
    << "Version: (" << header.version.highPart << "." << header.version.lowPart << ")\n"
    << "Original data size: " << header.originalSize << std::endl
    << "Data size: " << header.size << std::endl
    << "Compression: " << header.compression;
}


#endif