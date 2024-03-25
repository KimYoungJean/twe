// Example_01
// 한줄 주석: 코드에는 영향을 주지 않는다. -> 내가 또는 타인을 위한 메모 !@#$%^&*(_+ 

/*

단위주석

한줄 주석: 코드에는 영향을 주지 않는다. -> 내가 또는 타인을 위한 메모
한줄 주석: 코드에는 영향을 주지 않는다. -> 내가 또는 타인을 위한 메모
한줄 주석: 코드에는 영향을 주지 않는다. -> 내가 또는 타인을 위한 메모
한줄 주석: 코드에는 영향을 주지 않는다. -> 내가 또는 타인을 위한 메모

- 1 Ii Ll  0 Oo
*/ 
#pragma region 메인함수



/* () {} []
void: 공허하다. main()
함수라고 불리는 친구

메인 함수
ㄴ E.P (Entry point)
   ㄴ C/C++ 언어로 작성되어 있는 프로그램이 처음 실행되는 부분 ,C#도 동일
- C/C++ 언어는 프로그램이 처음 실행되기 위해서 반드시 main()함수를 포함하고 있어야한다.
  ㄴ 진입점이 되는 포인트이기 때문에 해당 함수가 존재하지 않을경우 프로그램 자체가 실행되지 않는다.
하나의 프로그램에는 반드시 '하나'의 EP(진입점)이 포함되어야 한다.
*/

/*
- C/C++ 언어가 프로그램으로 변한되기 위해서 거치는 과정
-전처리기
-컴파일
-링크
*/
#pragma endregion

// 전처리 지시문
// #: 명령지시자
#pragma region 프로그래밍 언어
/*
- 프로그래밍 이란 ?
-Programming. Program+ing 프로그램을 하고 있다> 프로그램을 만드는것 > 개발
-프로그래밍 언어란?
 컴퓨터와 대화 또는 명령을 할 수 있는 일련의 명령문을 작성할수 있는 언어를 의미.
 ㄴ 프로그래밍 언어를 활용하면 프로그램을 만드는것이 가능하다.
 - 프로그래밍 언어에는 다양한 언어가 존재하지만 크게 2가지로 분류할 수 있다.
 ㄴ 1. 특정 기능 구현에 최적하 된 언어 (javascript. c#script)
 ㄴ 2. 범용적 언어(C/C++)

 -프로그래밍 언어를 컴퓨터에서 이해하는 방법.
 -C/C++ 언어로 작성되어 있는 코드는 컴퓨터가 이해할 수 없는 명령문 이기 때문에,
  C/C++ 언어는 중간에서 언어를 해석해 주는 무언가가 필요하다
  ㄴ 컴파일러: 해당코드를 컴퓨터가 이해할 수 있는 언어로 변환하는 역할을 수행한다.


  종속관게 사람-> 컴퓨터(이진법)
  사람>< 컴파일러 >< 컴퓨터

  즉, 컴파일러가 프로그래밍 언어와 컴퓨터 사이에서 통역사 역할을 한다.
  그렇기 때문에, 프로그래밍 언어를 작성하는 사람은 컴퓨터의 언어를 모른다 하더라도 명령을 내리는 것이 가능하다.
  
  -컴파일러(Unmanaged 언어) != 인터프리터(Managed 언어)
  ㄴ !=: 같지 않다.
  ㄴ ==: 같다.

  Managed 언어/ Unmanaged 언어
	C#       /    C/C++
 High Level language    /   Low level Language
 사람 친화적             /        컴퓨터 친화적
메모리 관리 할수 없음     /  메모리 관리 할 수 있음.

> 프로그래밍 기술 및 기법
- 프로그래밍 기술은 점차 발전해 왔고, 앞으로도 발전해 나갈 것이다.
ㄴ 현재는 크게 4가지로 분류해서 파악을 해두면 좋다.
*/
#pragma endregion

#pragma region 면접문제
/* 
** 면접 문제**
1. 순차적 프로그래밍(절차지향) ex)C
 -프로그래밍 언어 초기부터 사용된 기법
 ㄴ 코드의 흐름에 따라 프로그래밍 하는 기술
 ㄴ 프로그램의 실행부터 종료까지의 흐름을 그대로 프로그래밍 한다.
 ㄴ 이 방식은 프로그램의 흐름을 따라가기 때문에 가독성이 좋을때도 있지만, 일반적으로 구조적이지
 못하고 코드가 여기저기 흩어져 있기 때문에, 유지보수가 아주 어렵다.

2. 구조적 프로그래밍(함수지향)
 - 순차적 프로그래밍의 단점을 반환하기 위해 나온 방식으로 코드의 구조를 기둥단위로 묶는 방식
 - 함수 지향 프로그래밍이라고도 부르며 순차적 프로그래밍 보다는 유지보수가 용이 하다는 장점 존재
   ㄴ 문제가 생기거나 유지보수가 필요할때 그 부분만 집중적ㅇ로 보면 되기 때문
   ㄴ 이러한 기능들을 한데 묶어 모듈이라는 형태로 만들게 되고 이는 프로그래밍 라이브러리로 발전하게 된다,
                               ㄴ유니티,언리얼
   3. 객체지향 프로그래밍 EX)C#,C++  
위에 두 방식과는 전혀 다른 방식으로 코드의 기준을 "객체"단위로 묶어 프로그래밍 하는 기법
 ㄴ 모든 대상에는 속성과 매서드가 있고 이를 하나로 묶어 객체로 만드는 방식이며, 여기서 말하는 '
대상'에는 눈에 보이지 않는것도 포함이 된다.

객체지향 기법에는 상속/다형성/추상화/캡슐화 등등이 있다.

4. 컴포넌트 프로그래밍
-코딩의 기준을 객체가 아닌 컴포넌트 단위로 프로그래밍 하는 방식.
-각각의 컴포넌트는 독립적으로 우직이는 부품과 같으므로 다리를 떼서 동물에게 붙여주면,
걷거나 달리는 것이 가능하게 되며 후에 배우게 될 Unity Engine 이 컴포넌트 기반으로 베이스가 잡혀있다.

- 다양한 컴포넌트가 존재하고 이것을 추가하는 것만으로 원하는 기능을 쉽게 구현할 수 있다.

*/
#pragma endregion
// 헤더 파일 
#include <iostream> 
// #include 키워드는 해당 경로에 있는 파일의 내용을 단순하게 복사를 하는 역할을 수행한다.
// 표준 헤더파일은 <이렇게> 사용한다.
// input output stream c++에서 입/출력을 담당하는 표준라이브러리
// stream : 여러 장치에 입출력 작업이 실행되는 것을 추상화하여 나타낸 것.
// vs에서 입력이 일어나고, console에서 출력이 실행됨 stream(물결)
// vs에서 저장(입력)한것이 폴더에 저장(출력)이 됨 stream(물결)
// 나가는 방식을 구체적으로 지정하면 한 장치에만 출력이 일어날수 있기 때문에 추상적으로 정리함
// > 여러 장치에 출력이 가능하게.
// 기능 : cout// cin/ endl
//        console out/ console in / end line
#include <Windows.h>
// ㄴ 구버전 헤더 파일 -> c언어 헤더 파일
// #include "Maingame.h"
// "사용자 정의 헤더파일.h"

 using namespace std; // std라는 이름안에 정의되어 있는것을 사용하겠다.  c#에서 사용함.
 // ㄴ 이름공간 STD에 선언된 것은 STD라는 이름공간의 선언 없이 접근하겠다. :: 안써도 됨 
 // ㄴ 프로그래밍에서는 신경을 쓰지 않으면 이름충돌이 반드시 발생한다. -> 컴파일 에러
 //  이름공간 std에 선언된 모든 것에 접근할 떄는 이름공간 지정을 생략하겠다.

void TextColor(int font, int backGround);

void main()   //함수의 구현 부분
{
	/*
	- 코드작성의 기본
	ㄴ 빨간색 밑줄을 보게 된다면
	1. 오타 체크

	2. 앞뒤 체크

	3. ;를 체크할 것

	4. 논리적으로 성립이 되는지 깊은 고민이 필요하다.
	ㄴ 시간이 필요한 파트
	*/
	//나는 피곤하다.
//	std::cout << "나는 피곤하다" << std::endl;   
	// cout이랑 endl만 쓰면 되는데 아랫줄은 모든 std를 다 가져와야하기 때문에 메모리 낭비가 발생함.
	// ㄴ std: standard(표준) c++표준안에 있는 cout과 endl을 사용하겠다
	// :: : 접근연산자
	// 내일 얘기해주세요.
	// cout: 출력해라
	// endl: 줄을 바꾼다. (개행)
	// <<: 출력 연산자
	// C: printf()   / C++: cout
	// C: scanf() / C++: cin
//	cout << "정말 피곤한걸?" << endl;

//	cout << "문자출력" << "쌍따옴표한에 적으면된다." << endl;
//	cout << "숫자출력" << 12345 << "그냥 숫자 적어보자?"<< endl;
//	cout << " ◆" << endl;

	// 1. A : 문자
	// 2. ABC : 문자열
	// 심플한 자기소개 출력

	// ㄴ이름 /나이/ 연락처/ 주소/ 이메일/ 각오/ 가고싶은 회사나 연봉/ 만들고 싶은 게임/취미
	cout << "---------------------------------------------------" << endl;
	cout << " 이름            : 김영진" << endl;
	cout << " 나이            : 31세" << endl;
	cout << " 연락처          : 01028528871" << endl;
	cout << " 주소            : 서울특별시 송파구" << endl;
	cout << " 각오            : 이 6개월이 내 생에 치열했던 6개월이 되기를" << endl;
	cout << " 가고싶은 회사   : 넷마블" << endl;
	cout << " 연봉            : 4500만원" << endl;
	cout << " 만들고 싶은 게임: VR 기반의 보드게임" << endl;
	cout << " 취미            : 눕기" << endl;
	cout << "---------------------------------------------------" << endl;
	
	cout << "지옥에 온걸 환영해!" << endl;

	printf("지옥에 온걸 환영해!\n");
	/*
	 -C언어 서식 문자(printf/ scanf)
	 
	 -서식문자는 문자열을 출력 또는 입력을 받을 때 , 해당 서식 문자의 자리를 다른 수 로 대체하기 위한
	 자리 매김 역할을 하는 문자를 의미한다.

	 서식 문자를 이용하면 고정되어 있지 않은 문자열을 출력 또는 입력받는 것이 가능하다.

	 · 서식 문자의 종료
	 - %d : int형 정수를 대체하는 용도
	 - %ld : long형 정수를 대체하는 용도
	 - %lld: long long형 정수를 대체하는 용도
	 - %c: char형 문자를 대체하는 용도
	 - %s: 문자열 입력
	 - %f: float형 실수를 대체하는 용도
	 - %lf : double형 실수를 대체하는 용도
	 
	 
	 ·printf 특수문자

	 - \n : 개행
	 - \t : 수평
	 - \v : 수직
	 - \\ : \
	 - \? : ?
	 - \' : '
	 - \" : "

	 */
	
	cout << "오늘 날씨는 내가 \"너무\" 좋아하는 날씨야 나는 비를 \"정말\" 좋아하거든" << endl;

	TextColor(0, 15);
	cout << "⇔⇔⇔⇔⇔⇔⇔⇔" << endl;
	TextColor(2, 0);


	
}  

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Color);


}