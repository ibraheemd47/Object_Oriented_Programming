


#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "Grower.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"

int main()
{
    DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan");
    FlowerArranger* flowerArranger = new FlowerArranger("Flora");
    Gardener* gardener = new Gardener("Garett");
    Grower* grower = new Grower("Gray", gardener);
    Person* p1 = new Person("Chris");
    Person* p2 = new Person("Robin");
    Wholesaler* wholesaler = new Wholesaler("Watson", grower);
    Florist* florist = new Florist("Fred", wholesaler, flowerArranger, deliveryPerson);
    // FlowersBouquet   
    std::vector<std::string> flowers = { "Roses", "Violets", "Gladiolus" };
    p1->orderFlowers(florist, p2, flowers);

    //delete all
    delete deliveryPerson;
    delete flowerArranger;
    delete  gardener;
    delete grower;
    delete  p1;
    delete  p2;
    delete  wholesaler;
    delete  florist;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
