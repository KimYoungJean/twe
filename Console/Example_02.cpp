# include <iostream>
# include <Windows.h>
# include <time.h>// C언어에서 시간관련 헤더
using namespace std;

// using 지시자: 지정한 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로 가져와 소속 지정없이 명칭을 바로 사용하겠다는 지시자.
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

#pragma region 자료형 + 변수 선언
//메모리 릭 (메모리 누수 발생)

/* 
 자료형
 - 변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.
 ·변수란?
 - 변할 수 있는 숫자나 데이터를 의미
 - 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름
 - 변수를 이용하여야 특정값 저장후 해당값을 이용한 여러가지 연산을 처리하는 것이 가능하다.

 ⊃ C/C++ 언어에서 지원하는 자료형 종류
 - 정수 
 ㄴ 소수점이 없는 수를 표현하기 위한 자료형
 - 실수
 ㄴ 소수점이 있는 수를 표현하기 위한 자료형

 - 문자
 ㄴ 문자를 표현하기 위한 자료형

 -논리
 ㄴ 참/거짓을 판별하는 자료형

 * C/C++ 언어 정수형 자료형의 종류
 
     -(unsigned) short (2byte크기를 지닌 자료형)
     -int       (4byte)
     -long      (4~8byte) : 32비트,64비트 운영체제에 따라 다름
     -long long (8byte 고정)
	 
 * C/C++ 언어 실수형 자료형의 종류
 
	 -float  (4byte)
	 -double (8byte) 

 * C/C++ 언어 문자형 자료형의 종류
 
     -char (1byte)

 * C/C++ 언어 논리형 자료형의 종류
 
	 -bool (1byte): 참(1)/거짓(0)을 나타내는 자료형
	 -C언어는 논리형에 해당하는 참 또는 거짓이라는 자료형이 별도로 존재하지 않았다.
	 ㄴ 그렇기 떄문에 일반적으로 정수 0은 거짓/ non ZERO 를 모두 True로 인지시켰다.
	 ㄴ 그러다가 C++논리형 자료형이 추가되었다. (지금은 c언어에도 boolean자료형이 있다>)
	 ㄴ true/false

	 - C/C++ 자료형은 기본적으로 음수(signed)를 표현하는 것이 가능하지만
	 경우에 따라서 음수를 표현하지 않는 대신 양수를 좀더 크게 표현하는 방법이 있다. 즉 unsigned를 사용하면 된다.

	 ▶자료형의 크기
	 자료형 타입                크기             범위
	
	 1. 정수형 자료형 
	 short					2 바이트 		-32767 ~ 32767
	 unsigned short			2 바이트		         0 ~ 66534
	 int					4 바이트        약-21억 ~ 약21억
	 unsigned int			4 바이트			     0 ~ 약43억
	 long					4 바이트		   약-21억 ~ 약21억
	 unsigned long			4 바이트		         0 ~ 약43억
	 

	 2. 실수형 자료형

	 자료형 타입                크기             범위
	 float					4 바이트				소수점 6~8자리까지
	 double					8 바이트				소수점 15~17자리까지

	 3. 문자형 자료형
	 char					1바이트				정수를 담는다.(문자)
	 4. 논리형 자료형
	 bool					1바이트				0(거짓),1(참)


*/
#pragma endregion

//INT64_MAX
// 2^64(2진법 64비트)

/*
▶변수선언
ㄴ 값을 저장할 수 있는 메모리 공간에 이름을 정의하는것을 뜻한다.
기본 형식: 변수형태( 종류) 변수명
ㄴ ex : int Number;

EX:
int Num = 20;
ㄴ 변수의 선언으로 인하여 Num이라는 이름으로 메모리 공간이 할당
ㄴ int Num = 20;은 단순히 Num에 20을 저장하는게 아니라. Num이 의미하는 메모리 공간에 20을 넣어라 라는 의미가 된다.

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


	// 변수 초기화 방범
	// ㄴ 다양한 방법이 존재하고 일반적으로는 아래와 같다.
	//변수선언
	int Num0;
	//언언이후 값 변경
	Num0 = 10;

	//Num0을 만들고 다시 접근해서 10을 넣는것
	
	//선언과 동시에 초기화를 하고 있다.
	int Num1 = 3;
	int Num2 = 6;
	int Total;
	// Num1 이라는 메모리공간을 만들면서 3을 넣고 오는것.
	//공간 복잡도 시간복잡도 - algorithm

	// 자료형이 같은 경우 여러개의 변수를 같이 선언할 수 있따.

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	cout << "정수 1의 사이즈:" << sizeof(1) << endl;
	cout << "정수 2의 사이즈" << sizeof(2) << endl;
	cout << "true의 사이즈" << sizeof(true) << endl;
	cout<< "flase의 사이즈" <<sizeof(false)<<endl;

	cout << endl;
	
	int nValue = 0;
	cout << "숫자 입력:" << endl;
	// 사용할 떄 주의를 요함
	cin >> nValue;

	cout << "내가 입력한 숫자:" << nValue << endl;
	cout << endl;

	printf("정수 입력:");
	// 사용할 떄 주의를 요함
	scanf_s("%d", &nValue);

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	printf("C언어 short: %d, %d/n", ValueA, sizeof(ValueA));
	printf("C언어 short: %d, %d/n", ValueB, sizeof(ValueB));
	printf("C언어 short: %d, %d/n", ValueC, sizeof(ValueC));
	printf("C언어 short: %d, %d/n", ValueD, sizeof(ValueD));

	cout << "C++ short:" << ValueA << "," << "사이즈" << sizeof(ValueA) << endl;
	cout << "C++ short:" << ValueB << "," << "사이즈" << sizeof(ValueB) << endl;
	cout << "C++ short:" << ValueC << "," << "사이즈" << sizeof(ValueC) << endl;
	cout << "C++ short:" << ValueD << "," << "사이즈" << sizeof(ValueD) << endl;

	cout << endl;


	/* 
	변수 표기법에 대해

	1. 헝가리안
	- 예전에 절차지향적인 방식(C)으로 코딩할때 이 변수가 어떤 변수인지 알기 위해서 그
	변수 형태가 뜻하는 약자를 붙였다.
	ex) int num         <=>  nNum
	    float ValueA    <=>  fValueA;
		double ValueB   <=>  dbValueB;
		char letter     <=>  chLetter;
		bool playerDead  <=> bPlayerDead, isPlayerDead

		- 네이티브 코딩에서는 많이 사용되지 않다가 근래에 다시 사용되는 추세
		ㄴ 프로그래밍 푸세가
		절차지향> 객체지향 >컴포넌트(헝가리안)
		ㄴ 상용 엔진 (언리얼/ 유니티)

		표기법은 내가 사용을 안한다고 하더라도 표기법의 규칙정도는 숙지해야한다.
		ㄴ 협업 > 같이 하는 일> 내가 안써도 다른사람은 사용할수 있기 때문에,

	2. 카멜(낙타)***
	 - 객체지향적인 방식의 코딩으로 바뀌면서 가독성을 위해서 한 단어의 앞글자만 대문자로 표기한다.
	 ex)
	 int playerselectnumber;   <=> int playerSelectNumber
	 3. 파스칼 케이스

	 EX) int PlaySelectNumber;

	 4. 스네이크
	 - 단어를 언더바로 끊어서 표기하는 방법 (카멜식과 혼용)
	EX) int player_Select_Number

	 변수 이름의 특징
	 -기본적으로 변수의 이름은 알파벳/숫자/언더바로 구성이 된다.
	 c언어 같은 경우에는 대소문자를 구분하며 Num과 num이 다른변수 이름이다.

	 1. 변수의 이름은 숫자로 시작할 수 없다.
	 2. 키워드 역시 변수이름으로 사용할 수 없다.
	 3. 이름 사이에 공백이 삽입될 수 없다.

	 //4,5,6

	 int Num100;
	 int Num101;
	 int _Num100;
	 int 6Num;
	 int Num Lock;
	 int bool;

	 	 
	*/

	/*
	 산술 연산자

	 +: 더하기
	 -: 뺴기
	 *: 곱하기
	 /: 나누기
	 ㄴ 몫을 남김 / 나머지를 버림
	 %: 나머지
	 ㄴ 몫을 버림 / 나머지를 남김

	 


	 */

	int numR;
//? rand(): 랜덤함수 =? 랜덤한 숫자를 반환한다.
	numR = rand() % 5; // 0, 1, 2, 3, 4  time.h << 불완전 난수
	//랜덤 시드 초기화
	srand(time(NULL));
	cout << numR << endl;

	int weaponA = 0;
	
	//20~25
	srand(time(NULL));

	weaponA = 19+rand()%6 ;


	cout << "무기의 데미지 값:" << endl;
}
