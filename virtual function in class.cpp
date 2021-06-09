#include <iostream>
using namespace std;

class character
{
	private:
		int health;
		
	public:
		character(){
			health = 100;
		}
		int gethealth(){
			return health;
		}
		void gethurt(int hurtvalue){
			health -= hurtvalue;
		}	
};

//class monster : public character
//{
//	public:
//		virtual void gethurt(int hurtvalue)
//		{
//			health -= (2*hurtvalue);
//		}
//};

int main()
{
	character player1;
	cout << player1.gethealth() << endl;
	player1.gethurt(10);
	cout << player1.gethealth() << endl;
		
//	monster player2;
//	cout << player2.gethealth() << endl;
//	player2.gethurt(10);
//	cout << player2.gethealth() << endl;
}
