#include <iostream>
using namespace std;

class square {
private:
	double l;
public:
	void set(double);
	double area();
	bool check1(square s);
	bool check2(square a, square b);
	double get_l();
};
/* دوال ممبر 
ملحوظة/الأفضل كتابة العمليات داخل الدوال في
الببلك لتوفير الوقت وللمساعدة في المشاريع الكبيرة
ولكن قمنا بالكتابة بهذه الطريقة للتعلم*/

void square::set(double x) { l = x; }
double square::area() { return l * l; }
bool square::check1(square s) {if (l == s.l) { return true; } else { return false; }};//طريقة المدرس
bool square::check2(square a, square b) { if (a.l == b.l) { return 1; } else { return 0; }}//طريقتي
double square::get_l() { return l; };

//دالة مش ممبر
//الطريقة التالتة نفس طريقتي ولكن الدالة مش ممبر
//وبالتالي ما بنحتاج لأنو نعرف عليها اوبجكت لما بدنا نستدعيها زي الطريقة التانية
//وأيضا اضطرينا انو نضيف دالة عشان تستدعي المتغيرات للاوبجكتس لانها برايفت ومش هنقدر نوصللها الا عن طريق دالة موجودة بالكلاس
bool check3(square a, square b) { if (a.get_l() == b.get_l()) { return 1; } else { return 0; } }

int main()
{
	square s1, s2;
	double a;
	cout << "s1 l= ";cin >> a;s1.set(a);cout << "s1 area= " << s1.area() << endl;//المربع الأول
	cout << "s2 l= ";cin >> a;s2.set(a);cout << "s2 area= " << s2.area() << endl;//المربع الثاني
	cout << "check1 is ";if (s1.check1(s2)) { cout << "equal"; }
	else { cout << "not"; };cout << endl;
	cout << "check2 is ";if (s1.check2(s1, s2)) { cout << "equal"; }
	else { cout << "not"; };cout << endl;
	//(s1.check2) لتتعرف اللغة أن الدالة ضمن الكلاس حيث ان دوال (الممبر) الكلاس لا تنفذ الا على الاوبجكتس الخاصة بالكلاس
	cout << "check3 is ";if (check3(s1, s2)) { cout << "equal"; }
	else { cout << "not"; };cout << endl;
}
