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
        bool batteryTemperatureIsOk(float temperature);
        bool batterySocIsOk(float soc);
        bool batteryChargeRateIsOk(float chargeRate);
        bool checkRange(float actualValue, float minValue, float maxValue);
        void printErrorMessage(int messageKey);

	public:
		bool batteryIsOk(float temperature, float soc, float chargeRate);
	};
}

#endif // !BMS_CHECKER
