#pragma once

#ifndef CURRENTSENSORS_H
#define CURRENTSENSORS_H

#include "Configs.h"
#ifdef CAB500
#include "CAB500.h"
#endif // CAB500

class CurrentSensors
{
public :
	CurrentSensors()
	{
		CurrentRequest = 0;
		VoltageRequest = 0;
	}
	~CurrentSensors() 
	{
		//delete ErrorsCodes;
	}
	void Init();
	void Process();
	void Stop();
	void Start();
private :
	int CurrentRequest;
	int VoltageRequest;
	int ErrorsCodes[10] = { 0,0,0,0,0,0,0,0,0,0 };
};

#endif