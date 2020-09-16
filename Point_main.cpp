#include "Point.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {

	int n{ 5 }; // 좌표 개수
	int x, y;

	Point p[5]; // Point형 배열 선언

	for (int i{ 0 }; i < n; i++) {
		cout << "Input x and y for Point: ";
		try {
			cin >> x >> y;
			if ((x > 99 || x <= 0) || (y > 99 || y <= 0)) { // 입력된 좌표의 범위에 대한 예외처리
				throw invalid_argument("input again.\n");
			}
			else{ p[i].setPoint(x, y); }
		}
		catch (invalid_argument& e) {
			cerr << "out of range: " << e.what() << endl;
			i--; // 예외 있을 경우 좌표 다시 받기
		}
	}
	//display
	cout << endl;
	for (int i{ 0 }; i < n; i++) {
		Point& pRef = p[i];
		cout << pRef.toString(); // 각 개체의 레퍼런스로 함수호출
	}
	return 0;
}
