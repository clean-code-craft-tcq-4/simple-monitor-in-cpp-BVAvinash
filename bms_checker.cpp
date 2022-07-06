#include "bms_checker.hpp"

bool bms::BatteryHealth::checkRange(float actualValue, float minValue, float maxValue) 
{
	return (actualValue < minValue || actualValue > maxValue);
}

bool bms::BatteryHealth::batteryTemperatureIsOk(float temperature) 
{
	bool result = true;
	if (checkRange(temperature, temperature_min, temperature_max))
	{
		std::cout << "Temperature out of range!\n";
		result = false;
	}
	return result;
}

bool bms::BatteryHealth::batterySocIsOk(float soc) 
{
	bool result = true;
	if (checkRange(soc, soc_min, soc_max))
	{
		std::cout << "State of Charge out of range!\n";
		result = false;
	}
	return result;
}

bool bms::BatteryHealth::batteryChargeRateIsOk(float chargeRate) 
{
	bool result = true;
	if (checkRange(chargeRate, chargeRate_min, chargeRate_max))
	{
		std::cout << "Charge Rate out of range!\n";
		result = false;
	}
	return result;
}

bool bms::BatteryHealth::batteryIsOk(float temperature, float soc, float chargeRate)
{
	return (batteryTemperatureIsOk(temperature) && batterySocIsOk(soc) && batteryChargeRateIsOk(chargeRate));
}
