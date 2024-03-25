# include <iostream>
# include <Windows.h>
# include <time.h>// C���� �ð����� ���
using namespace std;

// using ������: ������ ���ӽ����̽��� ��� ��Ī�� �� ������ �ִ� �������� ������ �Ҽ� �������� ��Ī�� �ٷ� ����ϰڴٴ� ������.
using std::cout;
using std::endl;


namespace A
{
	namespace B
	{
		namespace C
		{
			int Number;
		}
	}
}

//namespace ABC = A::B::C ;

#pragma region �ڷ��� + ���� ����
//�޸� �� (�޸� ���� �߻�)

/* 
 �ڷ���
 - ������ ������ �ǹ��ϸ� ���� �ڷ���(Data Type)�̶�� �����ϸ� �ȴ�.
 ��������?
 - ���� �� �ִ� ���ڳ� �����͸� �ǹ�
 - ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸� ������ �ٴ� �̸�
 - ������ �̿��Ͽ��� Ư���� ������ �ش簪�� �̿��� �������� ������ ó���ϴ� ���� �����ϴ�.

 �� C/C++ ���� �����ϴ� �ڷ��� ����
 - ���� 
 �� �Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���
 - �Ǽ�
 �� �Ҽ����� �ִ� ���� ǥ���ϱ� ���� �ڷ���

 - ����
 �� ���ڸ� ǥ���ϱ� ���� �ڷ���

 -��
 �� ��/������ �Ǻ��ϴ� �ڷ���

 * C/C++ ��� ������ �ڷ����� ����
 
     -(unsigned) short (2byteũ�⸦ ���� �ڷ���)
     -int       (4byte)
     -long      (4~8byte) : 32��Ʈ,64��Ʈ �ü���� ���� �ٸ�
     -long long (8byte ����)
	 
 * C/C++ ��� �Ǽ��� �ڷ����� ����
 
	 -float  (4byte)
	 -double (8byte) 

 * C/C++ ��� ������ �ڷ����� ����
 
     -char (1byte)

 * C/C++ ��� ���� �ڷ����� ����
 
	 -bool (1byte): ��(1)/����(0)�� ��Ÿ���� �ڷ���
	 -C���� ������ �ش��ϴ� �� �Ǵ� �����̶�� �ڷ����� ������ �������� �ʾҴ�.
	 �� �׷��� ������ �Ϲ������� ���� 0�� ����/ non ZERO �� ��� True�� �������״�.
	 �� �׷��ٰ� C++���� �ڷ����� �߰��Ǿ���. (������ c���� boolean�ڷ����� �ִ�>)
	 �� true/false

	 - C/C++ �ڷ����� �⺻������ ����(signed)�� ǥ���ϴ� ���� ����������
	 ��쿡 ���� ������ ǥ������ �ʴ� ��� ����� ���� ũ�� ǥ���ϴ� ����� �ִ�. �� unsigned�� ����ϸ� �ȴ�.

	 ���ڷ����� ũ��
	 �ڷ��� Ÿ��                ũ��             ����
	
	 1. ������ �ڷ��� 
	 short					2 ����Ʈ 		-32767 ~ 32767
	 unsigned short			2 ����Ʈ		         0 ~ 66534
	 int					4 ����Ʈ        ��-21�� ~ ��21��
	 unsigned int			4 ����Ʈ			     0 ~ ��43��
	 long					4 ����Ʈ		   ��-21�� ~ ��21��
	 unsigned long			4 ����Ʈ		         0 ~ ��43��
	 

	 2. �Ǽ��� �ڷ���

	 �ڷ��� Ÿ��                ũ��             ����
	 float					4 ����Ʈ				�Ҽ��� 6~8�ڸ�����
	 double					8 ����Ʈ				�Ҽ��� 15~17�ڸ�����

	 3. ������ �ڷ���
	 char					1����Ʈ				������ ��´�.(����)
	 4. ���� �ڷ���
	 bool					1����Ʈ				0(����),1(��)


*/
#pragma endregion

//INT64_MAX
// 2^64(2���� 64��Ʈ)

/*
����������
�� ���� ������ �� �ִ� �޸� ������ �̸��� �����ϴ°��� ���Ѵ�.
�⺻ ����: ��������( ����) ������
�� ex : int Number;

EX:
int Num = 20;
�� ������ �������� ���Ͽ� Num�̶�� �̸����� �޸� ������ �Ҵ�
�� int Num = 20;�� �ܼ��� Num�� 20�� �����ϴ°� �ƴ϶�. Num�� �ǹ��ϴ� �޸� ������ 20�� �־�� ��� �ǹ̰� �ȴ�.

*/
void main()
{
	//Number = 100;

	//A::B::C::Number;
	//ABC::Number;

	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	// 1

	cout << "boolean:" << TestResult << endl;

	cout << endl;


	// ���� �ʱ�ȭ ���
	// �� �پ��� ����� �����ϰ� �Ϲ������δ� �Ʒ��� ����.
	//��������
	int Num0;
	//������� �� ����
	Num0 = 10;

	//Num0�� ����� �ٽ� �����ؼ� 10�� �ִ°�
	
	//����� ���ÿ� �ʱ�ȭ�� �ϰ� �ִ�.
	int Num1 = 3;
	int Num2 = 6;
	int Total;
	// Num1 �̶�� �޸𸮰����� ����鼭 3�� �ְ� ���°�.
	//���� ���⵵ �ð����⵵ - algorithm

	// �ڷ����� ���� ��� �������� ������ ���� ������ �� �ֵ�.

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	cout << "���� 1�� ������:" << sizeof(1) << endl;
	cout << "���� 2�� ������" << sizeof(2) << endl;
	cout << "true�� ������" << sizeof(true) << endl;
	cout<< "flase�� ������" <<sizeof(false)<<endl;

	cout << endl;
	
	int nValue = 0;
	cout << "���� �Է�:" << endl;
	// ����� �� ���Ǹ� ����
	cin >> nValue;

	cout << "���� �Է��� ����:" << nValue << endl;
	cout << endl;

	printf("���� �Է�:");
	// ����� �� ���Ǹ� ����
	scanf_s("%d", &nValue);

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	printf("C��� short: %d, %d/n", ValueA, sizeof(ValueA));
	printf("C��� short: %d, %d/n", ValueB, sizeof(ValueB));
	printf("C��� short: %d, %d/n", ValueC, sizeof(ValueC));
	printf("C��� short: %d, %d/n", ValueD, sizeof(ValueD));

	cout << "C++ short:" << ValueA << "," << "������" << sizeof(ValueA) << endl;
	cout << "C++ short:" << ValueB << "," << "������" << sizeof(ValueB) << endl;
	cout << "C++ short:" << ValueC << "," << "������" << sizeof(ValueC) << endl;
	cout << "C++ short:" << ValueD << "," << "������" << sizeof(ValueD) << endl;

	cout << endl;


	/* 
	���� ǥ����� ����

	1. �밡����
	- ������ ������������ ���(C)���� �ڵ��Ҷ� �� ������ � �������� �˱� ���ؼ� ��
	���� ���°� ���ϴ� ���ڸ� �ٿ���.
	ex) int num         <=>  nNum
	    float ValueA    <=>  fValueA;
		double ValueB   <=>  dbValueB;
		char letter     <=>  chLetter;
		bool playerDead  <=> bPlayerDead, isPlayerDead

		- ����Ƽ�� �ڵ������� ���� ������ �ʴٰ� �ٷ��� �ٽ� ���Ǵ� �߼�
		�� ���α׷��� Ǫ����
		��������> ��ü���� >������Ʈ(�밡����)
		�� ��� ���� (�𸮾�/ ����Ƽ)

		ǥ����� ���� ����� ���Ѵٰ� �ϴ��� ǥ����� ��Ģ������ �����ؾ��Ѵ�.
		�� ���� > ���� �ϴ� ��> ���� �Ƚᵵ �ٸ������ ����Ҽ� �ֱ� ������,

	2. ī��(��Ÿ)***
	 - ��ü�������� ����� �ڵ����� �ٲ�鼭 �������� ���ؼ� �� �ܾ��� �ձ��ڸ� �빮�ڷ� ǥ���Ѵ�.
	 ex)
	 int playerselectnumber;   <=> int playerSelectNumber
	 3. �Ľ�Į ���̽�

	 EX) int PlaySelectNumber;

	 4. ������ũ
	 - �ܾ ����ٷ� ��� ǥ���ϴ� ��� (ī��İ� ȥ��)
	EX) int player_Select_Number

	 ���� �̸��� Ư¡
	 -�⺻������ ������ �̸��� ���ĺ�/����/����ٷ� ������ �ȴ�.
	 c��� ���� ��쿡�� ��ҹ��ڸ� �����ϸ� Num�� num�� �ٸ����� �̸��̴�.

	 1. ������ �̸��� ���ڷ� ������ �� ����.
	 2. Ű���� ���� �����̸����� ����� �� ����.
	 3. �̸� ���̿� ������ ���Ե� �� ����.

	 //4,5,6

	 int Num100;
	 int Num101;
	 int _Num100;
	 int 6Num;
	 int Num Lock;
	 int bool;

	 	 
	*/

	/*
	 ��� ������

	 +: ���ϱ�
	 -: ����
	 *: ���ϱ�
	 /: ������
	 �� ���� ���� / �������� ����
	 %: ������
	 �� ���� ���� / �������� ����

	 


	 */

	int numR;
//? rand(): �����Լ� =? ������ ���ڸ� ��ȯ�Ѵ�.
	numR = rand() % 5; // 0, 1, 2, 3, 4  time.h << �ҿ��� ����
	//���� �õ� �ʱ�ȭ
	srand(time(NULL));
	cout << numR << endl;

	int weaponA = 0;
	
	//20~25
	srand(time(NULL));

	weaponA = 19+rand()%6 ;


	cout << "������ ������ ��:" << endl;
}
