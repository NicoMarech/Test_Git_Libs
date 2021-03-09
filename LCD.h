#pragma once

#ifndef LCD_H
#define LCD_H

#include "Configs.h"
#ifdef CURTIS
#include "Curtis.h"
#endif // CURTIS

class LCD
{
public:
	LCD()
	{
		CurrentRequest = 0;
		VoltageRequest = 0;
	}
	~LCD()
	{
		//delete ErrorsCodes;
	}
	void Init();
	void Process();
	void Stop();
	void Start();
private:
	int CurrentRequest;
	int VoltageRequest;
	int ErrorsCodes[10] = { 0,0,0,0,0,0,0,0,0,0 };
};

#endif