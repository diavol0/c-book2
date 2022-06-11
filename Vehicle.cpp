#include <iostream>
using namespace std ;

class Vehicle 
{
public:
	int passengers ;
	int fuelcap    ;
	int mpg        ;

	Vehicle(int p , int f , int m)  ;
	int range()                     ;
	~Vehicle()                      ;
};

Vehicle::Vehicle(int p , int f , int m)
{
	passengers = p ;
	fuelcap    = f ;
	mpg        = m ;
}

Vehicle::~Vehicle()
{
	cout << endl  << "Destroed!" << endl ;
}

int Vehicle::range()
{
	return fuelcap * mpg ;
}

int main()
{
	Vehicle minivan  (11 , 22 , 33) ;
	Vehicle sportcar (2  , 100, 80) ;

	int range1 , range2 ;

	range1 = minivan.range()  ;
	range2 = sportcar.range() ;

	cout << "Фургон может везти пассажиров : " << minivan.passengers << "   на расстояние: " << range1 << endl ;
       	cout << "Спортивная машина может везти пассажиров : " << sportcar.passengers << "   на расстояние: " << range2 << endl ;


return 0;
}
