#include <iostream>
#include <windows.h>
#include <time.h>
/*
	int weaponA;

	srand(time(NULL));

		weaponA = rand() % 6  + 20;
		weaponA = 20 + rand() % 6 ;

		cout << "무기의 데미지 값:" << weaponA << endl;

		*/

using std::cout;
using std::endl;


namespace weapon 
{
	namespace sword
	{
		namespace newbieShortSword
		{
			int dmgnewbieShortSword = rand() % 100 + 50;
			int pricenewbieShortSword = 3200;
		}
		namespace bladeOfRuinedKing
		{
			
			int dmgbladeOfRuninedKing = rand() % 5 + 300;
			int pricebladeOfRuninedKing = 6400;
		}

	}
	namespace bow
	{
		namespace newbieShortBow 
		{
			int dmgnewbieShortBow = rand() % 100 + 15;
			int pricenewbieShortSword = 3000;
		}
		namespace crossBow
		{
			int dmgcrossBow = rand() % 5 + 150;
			int pricecrossBow = 8000;
		}

	}
	namespace cane
	{
		namespace grandFatherCane {
			int dmggrandFatherCane = 400;
			int pricegrandFatherCane = 5000;
		}
	}
}
namespace armour
{
	namespace armourHead
	{
		namespace bikeHelmet
		{
			int defbikeHelmet = rand() % 40 + 10;
			int pricebikeHelmet = 1500;
		}
		namespace armyHelmet
		{
			int defarmyHelmet = rand() % 10 + 60;
			int pricearmyHelmet = 3000;
		}

	}
	namespace armorChest
	{
		
	}
	namespace armorHand
	{

	}
}

void main()
{

	cout << "헤파이 토스의 대장간" << endl;
	cout << "몰락한 왕의검" << endl;
	cout << "가격:" << weapon::sword::bladeOfRuinedKing::pricebladeOfRuninedKing << endl;
	cout << "데미지:" << weapon::sword::bladeOfRuinedKing::dmgbladeOfRuninedKing << endl;

}
	