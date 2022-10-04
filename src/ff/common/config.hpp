/** 
 * Copyright (R) scriptypie - All Rights Reserved
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Krivenko (scriptypie) Slava <miracl303@mail.ru>, 4 October 2022
 */
#pragma once
#ifndef ff__common_config_hpp
#define ff__common_config_hpp

#include "version.hpp"
#include <string>

static const version_t g_magic = { 25, 04 };
static const version_t g_version = { 0, 2 };

static const size_t SEARCHLEN = 12;
static const size_t BLOCKSIZE = 65536;
static const size_t SHORTRUN_BITS = 3;
static const size_t SHORTRUN_MAX = (1 << SHORTRUN_BITS);
static const size_t MIN_RUN = 5;

#endif