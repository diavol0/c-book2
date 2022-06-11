

#include <iostream>

using namespace std;

class Help
{
public:
	void helpon(char what) ;
	void showmenu()        ;
	bool isvalid(char ch)  ;
};

void Help::helpon(char what)
{
	switch(what)
	{
		case '1':
                	cout << " Предложение if:\n\n"        ;
                	cout << " if(условие) предложение;\n" ;
                	cout << " else предложение;\n"        ;
                	break ;
        	case '2':
                	cout << " Предложение switch:\n\n"                ;
                	cout << " switch(выражение) {\n"                  ;
                	cout << " case константа:\n"                      ;
                	cout << "       последовательность предложений\n" ;
                	cout << "       break;\n"                         ;
                	cout << "     //...\n"                            ;
                	cout << " }\n"                                    ;
                	break ;
        	case '3':
                	cout << " Цикл for:\n\n"                          ;
                	cout << " for(инициализация; условие; приращение)";
                	cout << " предложение;\n"                         ;
                	break ;
        	case '4':
                	cout << " Цикл while:\n\n"                        ;
                	cout << " while(условие) предложение;\n"          ;
                	break ;
        	case '5':
                	cout << " Цикл do-while:\n\n"                     ;
                	cout << " do {\n"                                 ;
                	cout << " предложение;\n"                         ;
                	cout << " } while (условие);\n"                   ;
                	break ;
        	case '6':
                	cout << " Предложение break:\n\n"                 ;
                	cout << " break;\n"                               ;
                	break;
		case '7':
                	cout << " Предложение continue:\n\n"              ;
                	cout << " continue;\n"                            ;
                	break;
        	case '8':
                	cout << " Предложение goto:\n\n"                  ;
                	cout << " goto метка;\n"                          ;
                	break;
       		default :
                	cout << "Этот пункт отсутствует. \n"              ;
	
			
	} //switch(what)
} // void Help::helpon(char what)

void Help::showmenu()
{

        cout << "Справка по :\n"             ;
        cout << "1. if\n"                    ;
        cout << "2. switch\n"                ;
        cout << "3. for\n"                   ;
        cout << "4. while\n"                 ;
        cout << "5. do-while\n"              ;
        cout << "6. break\n"                 ;
        cout << "7. continue\n"              ;
        cout << "8. goto\n"                  ;

        cout << "Выберите один из пунктов: " ;
        //cin >> choice                        ;

        cout << "\n";

} //void Help::showmenu()

bool Help::isvalid(char ch)
{
	if((ch < '1') || (ch > '8') && (ch != 'q'))
	{
		return false ;
	}//if
	else 
	{
		return true ;
	}//else
}

int main()
{
	char choice ;

	Help hlpob;

	for(;;)
	{
		do
		{
			cout << endl ;
			hlpob.showmenu();
			cin >> choice ;
		}while(!hlpob.isvalid(choice));

		if (choice == 'q') break ;

		cout << endl ;

		hlpob.helpon(choice);
	}

return 0;
}
