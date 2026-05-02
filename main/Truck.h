#pragma once
#include "Auto.h"
class Truck :
    public Auto
{
    double weight;

public:
    Truck();
    Truck(string model, string color, double bakVolume, double spozivannja, double weight);
	~Truck();

    void setWeight(double weight);
    double getWeight()const;

    void showInfo()const;
    double transportCoast(double fuelPrice) const;

};

