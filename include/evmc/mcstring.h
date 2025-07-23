
#pragma once

#include "utils.h"
#include <cstddef>


struct mcstring{
    char * data;
    size_t size;
};

extern "C" {
mcstring EVMC_EXPORT create_string_n(const char * s,size_t size);
mcstring EVMC_EXPORT create_string(const char * s);
void EVMC_EXPORT destory_string(mcstring s);
}