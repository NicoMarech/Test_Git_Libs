#pragma once
#ifndef CAB1500_H
#define CAB1500_H
#include <iostream>

inline void CAB1500_Init()
{
    std::cout << "CAB1500 used and init\n";
}

inline void CAB1500_Process()
{
    std::cout << "CAB1500 Process\n";
}

inline void CAB1500_Start()
{
    std::cout << "CAB1500 Start\n";
}

inline void CAB1500_Stop()
{
    std::cout << "CAB1500 Stop\n";
}
#endif