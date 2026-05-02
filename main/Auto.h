#pragma once
#include <string>
#include <iostream>
using namespace std;
class Auto
{
protected:
	string model;
	string color;
	double bakVolume;
	double spozivannja;

	public:
    Auto();
	Auto(string model, string color, double bakVolume, double spozivannja);
	
	void setModel(string model);
	void setColor(string color);
	void setBakVolume(double bakVolume);
	void setSpozivannja(double spozivannja);
	string getModel()const;
	string getColor()const;
	double getBakVolume()const;
	double getSpozivannja()const;

	void showInfo()const;
	double maxDistance()const;

};

