#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person(name)
{
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowers)
{
	std::cout << getName() << " arranges flowers." << std::endl;
	flowers->arrange();
}

string FlowerArranger::getName()
{
	return "Flower Arranger " + Person::getName();
}
