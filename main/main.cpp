
#include <string>
#include <iostream>
#include"Auto.h"
#include"Truck.h"

#include"Book.h"
#include"Voice_recoding.h"
#include"Talking_book.h"
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
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	Book b("Artem", "C++", "2.05.2026", 2500);
	b.showInfo();
	cout<<"____________________________________________" << endl;
	Voice_recoding c("Artemij", 500, "3.05.2026");
	c.showInfo();
	cout << "____________________________________________" << endl;
	
	Talking_book d("Artem", "C++", "2.05.2026", 2500, "Artemij", 500, "3.05.2026", 50);
	d.showInfo();
	cout<<endl;
	return 0;
}

