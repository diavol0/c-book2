
#include <iostream>
using namespace std ;

class MyClass
{
public:
	int x ;

	MyClass(int i) ;
	~MyClass()     ;
};

MyClass::MyClass(int i)
{
	x = i ;
}

MyClass::~MyClass()
{
	cout << "Ob Destroed! X = " << x << endl ;
}

int main()
{
	MyClass t1(5) ;
	MyClass t2(8) ;

	cout << t1.x << endl << t2.x << endl ;
return 0;
}
