#include "Charger.h"

void Charger::Init()
{
#ifdef DELTAQ
	DELTAQ_Init();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}
void Charger::Start()
{
#ifdef DELTAQ
	DELTAQ_Init();
#endif // CAB500
#ifdef CAB1500
	CAB1500_Start();
#endif // CAB1500
}
void Charger::Stop()
{
#ifdef DELTAQ
	DELTAQ_Init();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}
void Charger::Process()
{
#ifdef DELTAQ
	DELTAQ_Init();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}