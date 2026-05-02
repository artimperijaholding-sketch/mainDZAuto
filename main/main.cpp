
#include <string>
#include <iostream>
#include"Auto.h"
#include"Truck.h"
using namespace std;
int main()
{
    Auto a("Deo Sens", "Green", 48, 8);
	Truck t("Deo Sensise", "Green", 48, 10,10);
	a.showInfo();
	cout<<endl;
	t.showInfo();
	cout << endl;
	cout<<a.maxDistance();
	cout << endl;
	cout<<t.maxDistance();
	cout << endl;
	cout<<t.transportCoast(75.50)<<"UAH.";
	cout << endl;
	return 0;
}

