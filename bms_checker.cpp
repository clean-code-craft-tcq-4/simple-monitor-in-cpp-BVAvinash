#include "bms_checker.hpp"

bool bms::BatteryHealth::batteryIsOk(float temperature, float soc, float chargeRate) 
{
	auto batteryCheck = [](auto temperatureFromBattery, auto socFromBattery, auto chargeRateFromBattery) 
	{
		if (temperatureFromBattery < temperature_min || temperatureFromBattery > temperature_max)
		{
			std::cout << "Temperature out of range!\n";
			return false;
		}
		else if (socFromBattery < soc_min || socFromBattery > soc_max)
		{
			std::cout << "State of Charge out of range!\n";
			return false;
		}
		else if (chargeRateFromBattery > chargeRate_max)
		{
			std::cout << "Charge Rate out of range!\n";
			return false;
		}
		else
		{
			return true;
		}
	};

	batteryStatus = batteryCheck(temperature, soc, chargeRate);

	if (batteryStatus == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
