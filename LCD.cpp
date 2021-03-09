#include "LCD.h"

void LCD::Init()
{
#ifdef CURTIS
	CURTIS_Init();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}
void LCD::Start()
{
#ifdef CURTIS
	CURTIS_Start();
#endif // CAB500
#ifdef CAB1500
	CAB1500_Start();
#endif // CAB1500
}
void LCD::Stop()
{
#ifdef CURTIS
	CURTIS_Stop();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}
void LCD::Process()
{
#ifdef CURTIS
	CURTIS_Process();
#endif // CAB500

#ifdef CAB1500
	CAB1500_Init();
#endif // CAB1500
}