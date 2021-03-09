#pragma once
#ifndef DELTAQ_H
#define DELTAQ_H
#include <iostream>

inline void DELTAQ_Init()
{
    std::cout << "DELTAQ used and init\n";
}

inline void DELTAQ_Process()
{
    std::cout << "DELTAQ Process\n";
}

inline void DELTAQ_Start()
{
    std::cout << "DELTAQ Start\n";
}

inline void DELTAQ_Stop()
{
    std::cout << "DELTAQ Stop\n";
}
#endif