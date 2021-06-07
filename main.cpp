#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const float PRODUCTION_RATE = 100.00F;
const float PRE_PRODUCTION_RATE = 60.00F;
const float PRODUCERS_RATE = 40.00F;

int main( )
{
    double ProductionHours,
           PreProductionHours,
           ProducersHours,
           ProductionCost,
           PreProductionCost,
           ProducersCost,
           TotalCost;

    cout << "Enter Production Hours: ";
    cin >> ProductionHours;
    cout << "\nEnter Pre-Production Hours: ";
    cin >> PreProductionHours;

    cout << "\nEnter Producers Hours: ";
    cin  >> ProducersHours;

    ProductionCost = ProductionHours * PRODUCTION_RATE;
    PreProductionCost = PreProductionHours * PRE_PRODUCTION_RATE;
    ProducersCost = ProducersHours * PRODUCERS_RATE;

    TotalCost = ProductionCost 
                + PreProductionCost 
                + ProducersCost;

    cout << "\n\t\tCar Dealership Bill\n";
    cout << "\n\nProduction Cost: ";
    cout << ProductionCost;

    cout << "\n\nPre-Production Cost: ";
    cout << PreProductionCost;

    cout << "\n\nProducers Cost: ";
    cout << ProducersCost;

    cout << "\n\nWeekly Total Cost: ";
    cout << TotalCost << endl;

    return 0;
}
