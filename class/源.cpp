#include <iostream>
using namespace std;

class A {
public:
	void print(A* this) {
		cout << this->year << endl;
	}
	int year;
};

int main() {

	A a1;
	A a2;
	a1.year = 2017;
	a2.year = 2018;
	a1.print(&a1);
	a2.print(&a2);

	/*A a1;
	A a2;
	a1.print();
	a2.print();*/

	//cout << "A:" << sizeof(A) << endl;
	//cout << "B:" << sizeof(B) << endl;
	system("pause");
	return 0;
}

//class B {
//public:
//	void print();
//	int a;
//};
//
//void B::print() {
//	cout << "out" << endl;
//}