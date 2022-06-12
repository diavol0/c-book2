
#include <iostream>
using namespace std ;

class Cl 
{
	int i = 3 ;
public:
	int  get_i()      ;
	void put_i(int j) ;
}; // class Cl

inline int Cl::get_i()
{
	return i ;
} // inline int Cl::get_i()

inline void Cl::put_i(int j)
{
	i = j ;
} // inline void Cl::put_i(int j)

int main()
{
	Cl e ;

	e.put_i(10)             ;
	cout << e.get_i() << endl ;
return 0 ;
} // int main()
