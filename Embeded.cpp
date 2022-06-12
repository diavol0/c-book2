
#include <iostream>
using namespace std ;

class Cl 
{
	int i = 3 ;
public:
	int  get_i() { return i ; }   ;
	void put_i(int j) { i = j ; } ;
}; // class Cl

int main()
{
	Cl e ;

	e.put_i(10)             ;
	cout << e.get_i() << endl ;
return 0 ;
} // int main()
