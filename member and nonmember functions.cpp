#include <iostream>
using namespace std;

class rectangle {
private:
	int hight,width;
public:
	void set(int x,int y){
		width = x;
		hight = y;
	}
	int get_h() {
		return hight;
	};
	int get_w() {
		return width;
	};
	int calculate_area() {
		return hight * width;
	};
};

int calculate_area2(rectangle z) {
	/*كأننا نقول هنا ان الكلاس هو عبارة عن تعريف متغير اي اننا قمنا باختراع
	متغير جديد عبارة عن مستطيل ويمكن تعويض المستطيلات في هذه الدالة*/
	return z.get_w() * z.get_h();
}


int main()
{
	rectangle A;
	A.set(8, 9);
	cout << A.calculate_area()<<endl;//هنا يتم استدعاء المساحة عن طريق دالة موجودة داخل الكلاس نفسه
	cout << calculate_area2(A);//هنا يتم ايجاد المساحة عن طريق دالة خارجة عن الكلاس
}
