#pragma once
#ifndef CURTIS_H
#define CURTIS_H
#include <iostream>

inline void CURTIS_Init()
{
    std::cout << "CURTIS used and init\n";
}

inline void CURTIS_Process()
{
    std::cout << "CURTIS Process\n";
}

inline void CURTIS_Start()
{
    std::cout << "CURTIS Start\n";
}

inline void CURTIS_Stop()
{
    std::cout << "CURTIS Stop\n";
}
#endif