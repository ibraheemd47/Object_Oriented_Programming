#ifndef FLORIST_H
#define FLORIST_H

#include "Person.h"
#include <vector>

class Wholesaler;
class FlowerArranger;
class DeliveryPerson;
class FlowersBouquet;

using namespace std;

class Florist : public Person {

  public:
    Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
    void acceptOrder(Person* p, std::vector<std::string> vec);
     string getName() override;
  private:
    std::string name;
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

};
#endif // FLORIST_H
