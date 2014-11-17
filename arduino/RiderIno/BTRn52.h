// BTRn52.h

#ifndef _BTRN52_h
#define _BTRN52_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

const unsigned int PIN_POWER_ENABLE=12;

class BTRn52Class
{
 protected:


 public:

	void init();
	void powerDisable();
	void powerEnable();
};

extern BTRn52Class BTRn52;

#endif

