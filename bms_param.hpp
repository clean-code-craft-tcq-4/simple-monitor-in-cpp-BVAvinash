#ifndef BMS_PARAM
#define BMS_PARAM

#include <vector>
#include <string>

namespace bms 
{
	static float temperature_min = 0;
	static float temperature_max = 45;
	static float soc_min = 20;
	static float soc_max = 80;
	static float chargeRate_min = 0;
	static float chargeRate_max = 0.8;
	static int languageOption = 1;		//0 - English, 1- German
	static std::vector<std::vector<std::string>> messageFactor = { { "Temperature", "State of charge", "Charge Rate" }, {"Temperatur", "Ladezustand", "Ladestrom"} };
	static std::vector<std::string> messageTrailing = { "out of range!", "außerhalb des Bereichs!" };
}

#endif // !BMS_PARAM
