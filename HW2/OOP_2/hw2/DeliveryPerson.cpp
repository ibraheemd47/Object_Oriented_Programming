#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(std::string name) : Person(name) {}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* flowers)
{
	std::cout << getName() << " delivers flowers " << p->getName() << "." << std::endl;
	p->acceptFlowers(flowers);

}

std::string DeliveryPerson::getName()
{
	return "Delivery Person " + Person::getName();
}
