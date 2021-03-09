#pragma once
#ifndef CAB500_H
#define CAB500_H


#include <iostream>

inline void CAB500_Init()
{
    std::cout << "CAB500 used and init\n";
}

inline void CAB500_Process()
{
    std::cout << "CAB500 Process\n";
}

inline void CAB500_Start()
{
    std::cout << "CAB500 Start\n";
}

inline void CAB500_Stop()
{
    std::cout << "CAB500 Stop\n";
}
#endif // CAB500_H