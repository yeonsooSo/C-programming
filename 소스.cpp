/*
Phone c
Phone copy c
Person c
Person d
Phone d
Phone d

*/


#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
	Phone(string n) { cout << "Phone constructor!" << endl; }

	Phone(Phone&) { cout << "auto!" << endl; }//자동으로 만들어졌던 생성자.
	//복사생성자

	~Phone() { cout << "Phone destuctor!" << endl; }
private:
	string _name;

};

class Person {
public:
	Person(string n, Phone p) : _name{ n }, _phone{ p }
	{cout << "Person constructor!" << endl; }
	~Person() { cout << "PErson destuctor!" << endl; }
private:
	string _name;
	const Phone _phone; //Phone(Phone&)
};

int main() {
	Phone ip{ "iphone 11" }; //string 타입 받는 Phone 타입
	Person psn{ "iu",ip };

	return 0;
}