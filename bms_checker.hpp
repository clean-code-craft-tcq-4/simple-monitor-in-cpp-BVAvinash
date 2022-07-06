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
		bool batteryStatus;

	public:
		bool batteryIsOk(float temperature, float soc, float chargeRate);
	};
}

#endif // !BMS_CHECKER
