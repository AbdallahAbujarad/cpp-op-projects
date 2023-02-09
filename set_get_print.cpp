#include <iostream>
using namespace std;


class mobile {
private:
	int price;
	int model;
	string generation;
	string colour;

public:
	void set_price(int x) {
		price = x;
	}

	int get_price() {
		return price;
	}
};


int main()
{
	mobile j7;
	j7.set_price(200);
	cout <<"the price is " << j7.get_price();
}