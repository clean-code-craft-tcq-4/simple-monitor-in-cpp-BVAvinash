#include "bms_checker.hpp"

bool bms::BatteryHealth::checkRange(float actualValue, float minValue, float maxValue) 
{
	return (actualValue < minValue || actualValue > maxValue);
}

void bms::BatteryHealth::printErrorMessage(int messageKey) 
{
	std::cout << messageFactor[languageOption][messageKey] << messageTrailing[languageOption] << "\n";
}

bool bms::BatteryHealth::batteryTemperatureIsOk(float temperature) 
{
	bool result = true;
	if (checkRange(temperature, temperature_min, temperature_max))
	{
		printErrorMessage(0);
		result = false;
	}
	return result;
}

bool bms::BatteryHealth::batterySocIsOk(float soc) 
{
	bool result = true;
	if (checkRange(soc, soc_min, soc_max))
	{
		printErrorMessage(1);
		result = false;
	}
	return result;
}

bool bms::BatteryHealth::batteryChargeRateIsOk(float chargeRate) 
{
	bool result = true;
	if (checkRange(chargeRate, chargeRate_min, chargeRate_max))
	{
		printErrorMessage(2);
		result = false;
	}
	return result;
}

bool bms::BatteryHealth::batteryIsOk(float temperature, float soc, float chargeRate)
{
	return (batteryTemperatureIsOk(temperature) && batterySocIsOk(soc) && batteryChargeRateIsOk(chargeRate));
}
