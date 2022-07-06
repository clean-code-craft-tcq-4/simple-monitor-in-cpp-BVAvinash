#include "bms_checker.hpp"

int main()
{
	bms::BatteryHealth batteryStatus;
	assert(batteryStatus.batteryIsOk({ 25, 70, 0.7f }) == true);
	assert(batteryStatus.batteryIsOk({ 50, 85, 0 }) == false);
    return 0;
}
