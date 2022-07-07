#include "log.h"
#include "log.cpp"

int main()
{
    init_Log("Initializing log");

    _Log("Hello world");
}

/*
    The function of header file is that it copies the code present inside the header file to the current file,
    we use #pragma once to avoid duplication of header file it make sure that the header file code gets compiled
    just once during one translation unit compilation,
    The primary use of a header file is when we find ourself writing same code or copy pasting same code again
    and again we make a header file of that code and it somewhat automates our job 
    Code looks cleaner
*/