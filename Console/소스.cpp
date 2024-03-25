#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

//C 스타일
void main()
{
	int number=0;
	char food[10];

	printf("내가 좋아하는 숫자는?:");
	scanf_s("%d", &number);

	printf("내가 좋아하는 숫자는 %d입니다", number);



	printf("내가 좋아하는 음식은?:");
	scanf_s("%s, food");
	printf("내가6 좋아하는 음식은 %s입니다", food);


}
