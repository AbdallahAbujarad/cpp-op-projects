//friend fun. is a fun. thats nonmember fun. but we can deal with it as a member fun.

#include <iostream>
using namespace std;
class mobile {
private:
	int price;
	string company;
	string quality;

public:
	int get() {
		return price;
	}
	friend void set_price(mobile);
};
void set_price(mobile x) {
	cin>>x.price;
	

}
int main()
{
	mobile mnstora;
	set_price(mnstora);
	cout<<mnstora.get();
	//مش عارف وين الغلط بس المهم المبدأ صح والدالة الفرند استعمالها
	//لما يكون في اكثر من كلاس وبدك تجيب اشي مشترك بينهم زي مثلا مجموع السعر
	//وساعتها بتعرف متغيرات الدالة باثنين اوبجكت او اكثر على حسب عدد الكلاسات اللي بدك تربطهم ببعض
	//sum_price(mobile , pc)
}




