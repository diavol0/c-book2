
#include <iostream>

using namespace std;

class MyClass
{
public:
	int x ;

	MyClass()  ; // конструктор
	~MyClass() ; // деструктор
};

MyClass::MyClass()
{
	x = 111111 ;
}

MyClass::~MyClass()
{
        cout << "Destroed!" << endl ;
}

int main()
{
	MyClass ob1 ; 
	MyClass ob2 ;

	cout << ob1.x << endl << ob2.x << endl ;
return 0 ;
}
