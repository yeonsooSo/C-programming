#include "Point.h"
#include <sstream>
#include <iomanip>
using namespace std;

string Point::toString() {
	ostringstream out;
	out << "x = " << setfill('0') << setw(2)<< x << ", " 
		<< "y = " << setw(2) << y << endl; // 스트림에 저장
	return out.str();
}
void Point::setPoint(int xx, int yy) {
	x = xx;
	y = yy;
}
