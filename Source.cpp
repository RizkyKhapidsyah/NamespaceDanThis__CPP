#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/* Data Member */
class ClassTypes
{
public:
	string dataStr;
	double dataDouble;
	double m_dataDouble;

	ClassTypes(const char* dataStr, double dataDouble)
	{
		/* Dengan Menggunakan namespace dari class */
		ClassTypes::dataStr = dataStr;

		/* Dengan Menggunakan "this" */
		cout << this << endl; //'this' sebenarnya hanya pointer saja.
		cout << this->dataStr << endl;
		this->dataDouble = dataDouble;

		/* Dengan Menggunakan Konvensi Penamaan */
		m_dataDouble = dataDouble;
	}
};

/* Member Function */

namespace RizkyKhapidsyah
{
	class Player
	{
	public:
		string name;
		double power;
		int health;

		Player(const char* name, double power)
		{
			Player::setName(name);
			this->setPower(power);
		}

		void setName(const char* name)
		{
			this->name = name;
		}

		void setPower(double power)
		{
			this->power = power;
		}

		void setHealth(int);
	};
}



void RizkyKhapidsyah::Player::setHealth(int health)
{
	this->health = health;
	//atau
	Player::health = health;
}

int main()
{
	ClassTypes* Object1 = new ClassTypes("Object 1", 0.05);
	cout << Object1 << endl;
	cout << Object1->dataDouble << endl;
	cout << Object1->m_dataDouble << endl;

	RizkyKhapidsyah::Player *player1 = new RizkyKhapidsyah::Player("RizkyKhapidsyah", 100);
	cout << player1->name << endl;

	player1->setHealth(10);
	cout << player1->health << endl;

	_getch();
	return 0;
}