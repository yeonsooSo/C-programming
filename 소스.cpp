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

	Phone(Phone&) { cout << "auto!" << endl; }//�ڵ����� ��������� ������.
	//���������

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
	Phone ip{ "iphone 11" }; //string Ÿ�� �޴� Phone Ÿ��
	Person psn{ "iu",ip };

	return 0;
}