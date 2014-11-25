// BTRn52.h

#ifndef _BTRN52_h
#define _BTRN52_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

const unsigned int POWER_ENABLE_PIN=12;
const unsigned int CMD_MODE_PIN=6;	//GPIO9 RN52's point of view

class BTRn52Class
{
 protected:
	 

 public:

	void init();
	void powerDisable();
	void powerEnable();
	void enterCMDMode();
	void exitCMDMode();
};

extern BTRn52Class BTRn52;

#endif

