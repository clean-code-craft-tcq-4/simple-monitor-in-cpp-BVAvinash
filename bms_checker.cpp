#include "bms_checker.hpp"

bool bms::BatteryHealth::batteryTemperatureIsOk(float temperature)
{
	if (temperature < temperature_min || temperature > temperature_max)
	{
		std::cout << "Temperature out of range!\n";
		return false;
	}
	else
	{
		return true;
	}
}

bool bms::BatteryHealth::batterySocIsOk(float soc)
{
	if (soc < soc_min || soc > soc_max)
	{
		std::cout << "State of Charge out of range!\n";
		return false;
	}
	else
	{
		return true;
	}
}

bool bms::BatteryHealth::batteryChargeRateIsOk(float chargeRate)
{
	if (chargeRate > chargeRate_max)
	{
		std::cout << "Charge Rate out of range!\n";
		return false;
	}
	else
	{
		return true;
	}
}

bool bms::BatteryHealth::batteryIsOk(float temperature, float soc, float chargeRate) 
{
	batteryTemperature = batteryTemperatureIsOk(temperature);
	batterySoc = batterySocIsOk(soc);
	batteryChargeRate = batteryChargeRateIsOk(chargeRate);

	if (batteryTemperature == true && batterySoc == true && batteryChargeRate == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}