#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

//C ��Ÿ��
void main()
{
	int number=0;
	char food[10];

	printf("���� �����ϴ� ���ڴ�?:");
	scanf_s("%d", &number);

	printf("���� �����ϴ� ���ڴ� %d�Դϴ�", number);



	printf("���� �����ϴ� ������?:");
	scanf_s("%s, food");
	printf("����6 �����ϴ� ������ %s�Դϴ�", food);


}
