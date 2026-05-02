#include "Auto.h"

Auto::Auto()
{
    model = "No name";
	color = "No color";
	bakVolume = 0.0;
	spozivannja = 0.0;
}

Auto::Auto(string model, string color, double bakVolume, double spozivannja)
{
    this->model=model;
	this->color=color;
	this->bakVolume=bakVolume;
	this->spozivannja=spozivannja;
}

void Auto::setModel(string model)
{
    this->model = model;
}

void Auto::setColor(string color)
{
    this->color = color;
}

void Auto::setBakVolume(double bakVolume)
{
    this->bakVolume = bakVolume;
}

void Auto::setSpozivannja(double spozivannja)
{
	this->spozivannja = spozivannja;
}

string Auto::getModel()const
{
    return model;
}

string Auto::getColor()const
{
    return color;
}

double Auto::getBakVolume()const
{
    return bakVolume;
}

double Auto::getSpozivannja()const
{
    return spozivannja;
}

void Auto::showInfo()const
{
    cout<<"==========================="<<endl;
	cout<<"Model: "<<model<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Bak volume: "<<bakVolume<<endl;
	cout<<"Spozivannja: "<<spozivannja<<endl;
	
}

double Auto::maxDistance()const
{
    return (bakVolume/spozivannja)*100;
}
