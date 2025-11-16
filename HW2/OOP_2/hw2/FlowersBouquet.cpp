#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> vec) : bouquet(vec), isArranged(false)
{
}

void FlowersBouquet::arrange()
{

	this->isArranged = true;
}



std::vector<std::string> FlowersBouquet::getFlowers()
{
	return this->bouquet;
}
