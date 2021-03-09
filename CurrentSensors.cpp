#include "CurrentSensors.h"

void CurrentSensors::Init()
{
#ifdef CAB500
	CAB500_Init();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}
void CurrentSensors::Start()
{
#ifdef CAB500
	CAB500_Start();
#endif // CAB500
#ifdef CAB1500
	CAB1500_Start();
#endif // CAB1500
}
void CurrentSensors::Stop()
{
#ifdef CAB500
	CAB500_Stop();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}
void CurrentSensors::Process()
{
#ifdef CAB500
	CAB500_Process();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}