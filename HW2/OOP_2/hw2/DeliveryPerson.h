#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include "Person.h"

class FlowersBouquet;

using namespace std;
class DeliveryPerson : Person{
public:
    DeliveryPerson(std::string name);
    void deliver(Person* p, FlowersBouquet* flowers);
     string getName() override;
private:
    std::string name;
};
#endif // DELIVERYPERSON_H
