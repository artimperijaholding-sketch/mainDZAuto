#include "Truck.h"

Truck::Truck(): Auto()
{
    weight=0.0;
}

Truck::Truck(string model, string color, double bakVolume, double spozivannja, double weight)
	: Auto(model, color, bakVolume, spozivannja)
{
    this->weight = weight;
}

Truck::~Truck()
{
    cout<<"Truck destructor"<<endl;
}

void Truck::setWeight(double weight)
{
	this->weight = weight;
}

double Truck::getWeight() const
{
    return weight;
}

void Truck::showInfo() const
{
	Auto::showInfo();
	cout<<"Weight: "<<weight<<endl;
}

double Truck::transportCoast(double fuelPrice) const
{
	return (spozivannja/100)*fuelPrice/weight;
}
