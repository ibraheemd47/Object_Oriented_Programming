#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include <iostream>

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name), wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {
}
void Florist::acceptOrder(Person* p, std::vector<std::string> vec)
{
    std::cout << getName() << " forwards request to " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* flowers = wholesaler->acceptOrder(vec);
    //Wholesaler Watson returns flowers to Florist Fred.
    std::cout << wholesaler->getName() << " returns flowers to " << getName() << "." << std::endl;



    //Florist Fred request flowers arrangement from Flower Arranger Flora.
    std::cout << getName() << " request flowers arrangement from " << flowerArranger->getName() << "." << std::endl;
    flowerArranger->arrangeFlowers(flowers);
    //Flower Arranger Flora returns arranged flowers to Florist Fred.
    std::cout << flowerArranger->getName() << " returns arranged flowers to " << getName() << "." << std::endl;

    //Florist Fred forwards flowers to Delivery Person Dylan.
    std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(p, flowers);//

}
std::string Florist::getName()
{
    return "Florist " + Person::getName();
}

