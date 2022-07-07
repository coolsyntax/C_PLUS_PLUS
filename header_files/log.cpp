#pragma once

#include "log.h"

void init_Log(const char* message)
{
    std::cout << message <<  "\n";
}

void _Log(const char* message)
{
    std::cout << message << "\n";
}