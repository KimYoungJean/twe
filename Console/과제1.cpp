using namespace std;
#include <iostream>
#include <Windows.h>
void TextColor(int font, int backGround);

void main()
{
	
	TextColor(0, 0);
	cout << "                 " << endl;
	TextColor(1, 1);
	cout <<"                 "  << endl;
	TextColor(2, 2);
	cout <<"                 "  << endl;
	TextColor(3,3);
	cout << "                 " << endl;
	TextColor(4, 4);
	cout <<"                 "  << endl;
	TextColor(5,5);
	cout <<"                 "  << endl;
	TextColor(6, 6);
	cout << "                 " << endl;
	TextColor(7, 7);
	cout << "                 " << endl;
	TextColor(8, 8);
	cout <<"                 "  << endl;
	TextColor(9, 9);
	cout << "                 " << endl;
	TextColor(10, 10);
	cout <<"                 "  << endl;
	TextColor(11, 11);
	cout << "                 " << endl;
	TextColor(12, 12);
	cout << "                 " << endl;
	TextColor(13, 13);
	cout << "                 " << endl;
	TextColor(14, 14);
	cout << "                 " << endl;
	TextColor(15, 15);
	cout << "                 " << endl;

	TextColor(15, 15);
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	TextColor(15, 15);
	cout << "                 "  ;
	TextColor(15, 0);
	cout << "                                                                           " ;
	TextColor(15, 15);
	cout << "                            " << endl;
	TextColor(15, 15);
	cout << "                 ";
	TextColor(15, 0);
	cout << " ";
	TextColor(15, 15);
	cout << "                                                                                                      " << endl; 
	TextColor(15, 15);
	cout << "                 ";
	TextColor(15, 0);
	cout << " ";
	TextColor(15, 15);
	cout << "                                                                                                      " << endl; 
	TextColor(15, 15);
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	                                                         

	TextColor(2, 0);
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}