// 
// 
// 

#include "BTRn52.h"

void BTRn52Class::init()
{
	pinMode(POWER_ENABLE_PIN, OUTPUT);
	pinMode(CMD_MODE_PIN, OUTPUT);

	digitalWrite(CMD_MODE_PIN, LOW);
}

void BTRn52Class::powerEnable()
{
	digitalWrite(POWER_ENABLE_PIN, HIGH);
}

void BTRn52Class::powerDisable()
{
	digitalWrite(POWER_ENABLE_PIN, LOW);
}

void BTRn52Class::enterCMDMode()
{
	digitalWrite(CMD_MODE_PIN, HIGH);
}

void BTRn52Class::exitCMDMode()
{
	digitalWrite(CMD_MODE_PIN, LOW);
}



BTRn52Class BTRn52;

