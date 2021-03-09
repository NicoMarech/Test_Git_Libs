#pragma once

#ifndef CHARGER_H
#define CHARGER_H

#include "Configs.h"
#ifdef DELTAQ
#include "DeltaQ.h"
#endif // DELTAQ

class Charger
{
public:
	Charger()
	{
		CurrentRequest = 0;
		VoltageRequest = 0;
	}
	~Charger()
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