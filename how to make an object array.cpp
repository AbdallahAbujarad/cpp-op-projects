

#include <iostream>
using namespace std;

class car {
private:
	int speed;

public:
	int get_speed() { return speed; }
	void go() { speed=20; }
	void stop() { speed = 0; }
	void speed_up() { speed += 15; }
	void slow_down() { speed -= 15; }
};

int main()
{
	const int x = 10;
	car cr[x];
	cout << "before moving : "<<endl ;
	for (size_t i = 0; i < x; i++)
	{
		cr[i].stop();
		cout << "car number " << i + 1 << " : " << cr[i].get_speed() << endl;
	}
	cout << endl << endl << endl << "after moving : " << endl;
	for (size_t i = 0; i < 2; i++)
	{
		cr[i].go();
		cr[i].speed_up();
		cout << "car number " << i + 1 << " : " << cr[i].get_speed() << endl;
	}
	for (size_t i = 2; i < 6; i++)
	{
		cr[i].go();
		cr[i].slow_down();
		cout << "car number " << i + 1 << " : " << cr[i].get_speed() << endl;
	}
	for (size_t i = 6; i < x; i++)
	{
		cr[i].go();
		cr[i].speed_up();
		cr[i].speed_up();
		cr[i].speed_up();
		cr[i].speed_up();
		cout << "car number " << i + 1 << " : " << cr[i].get_speed() << endl;
	}
}





