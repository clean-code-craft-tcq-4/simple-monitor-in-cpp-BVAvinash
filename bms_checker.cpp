#include "bms_checker.hpp"
#include <algorithm>

bool bms::BatteryHealth::batteryIsOk(std::vector<float> batteryParam)
{
	for (int index = 0; index < batteryParam.size(); index++)
	{
		if (index == 0 && (batteryParam[index] < temperature_min || batteryParam[index] > temperature_max))
		{
			std::cout << "Temperature out of range!\n";
			return false;
		}

		if (index == 1 && (batteryParam[index] < soc_min || batteryParam[index] > soc_max))
		{
			std::cout << "State of Charge out of range!\n";
			return false;
		}

		if (index == 2 && (batteryParam[index] > chargeRate_max))
		{
			std::cout << "Charge Rate out of range!\n";
			return false;
		}
	}

	return true;
}
