#ifndef BMS_CHECKER
#define BMS_CHECKER

#include <iostream>
#include <assert.h>
#include "bms_param.hpp"

namespace bms
{
	class BatteryHealth
	{
	private:
		static bool batteryTemperatureIsOk(float temperature);
		static bool batterySocIsOk(float soc);
		static bool batteryChargeRateIsOk(float chargeRate);

		bool batteryTemperature;
		bool batterySoc;
		bool batteryChargeRate;

	public:
		bool batteryIsOk(float temperature, float soc, float chargeRate);
	};
}

#endif // !BMS_CHECKER