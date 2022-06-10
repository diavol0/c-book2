

#include <iostream>

using namespace std;

int main()
{
	char choice ;

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
	cin >> choice                        ;

	cout << "\n";



	switch(choice)
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
		cout << " 	последовательность предложений\n" ;
		cout << " 	break;\n"                         ;
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
		cout << " } while (условие);\n"	                  ;
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
	}
	cout << endl;
return 0;
}
