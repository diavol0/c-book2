#include <iostream>
using namespace std;

class Vehicle 
{
public:
	int passengers ;
	int fuelcap    ;
	int mpg        ;	

	int range()    ;
};

int Vehicle::range()
{
	return mpg * fuelcap ;
}

int main ()
{
	Vehicle minivan  ;
	Vehicle sportcar ;
	int     range1   ;
	int     range2   ;
	
	minivan.passengers  = 7    ;
	minivan.fuelcap     = 16   ;
	minivan.mpg         = 21   ;

	sportcar.passengers = 2    ;
        sportcar.fuelcap    = 14   ;
        sportcar.mpg        = 12   ;

	range1 = minivan.range()   ;
        range2 = sportcar.range()  ;

        cout << " Фургон может проехать расстояние: "            << range1 << endl;
	cout << " Спортивная машина может проехать расстояние: " << range2 << endl;

return 0;
}
