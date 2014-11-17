// 
// 
// 

#include "BTRn52.h"

void BTRn52Class::init()
{
	pinMode(PIN_POWER_ENABLE, OUTPUT);
}

void BTRn52Class::powerEnable()
{
	digitalWrite(PIN_POWER_ENABLE, HIGH);
}

void BTRn52Class::powerDisable()
{
	digitalWrite(PIN_POWER_ENABLE, LOW);
}



BTRn52Class BTRn52;

