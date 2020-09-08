#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

void displayTime(const string& message, const Time& time) {
	cout << message << "\nUniversal time: " << time.toUniversalString()
		<< "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
	Time t;

	displayTime("Initial Time", t);

	t.setTime(22, 1, 10);
	displayTime("After setTime", t);

	try {
		t.setTime(99, 99, 100); //Time.cpp 파일에서 던진 오류 발생
	}
	catch (invalid_argument& e) {
		cout << "Exception: " << e.what() << "\n\n";
	}


	return 0;


}