#ifndef BMS_CHECKER
#define BMS_CHECKER

#include <iostream>
#include <assert.h>
#include <vector>
#include "bms_param.hpp"

namespace bms
{
	class BatteryHealth
	{
	public:
		bool batteryIsOk(std::vector<float> batteryParam);
	};
}

#endif // !BMS_CHECKER
