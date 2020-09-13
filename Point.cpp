#include "Point.h"
#include <sstream>
#include <iomanip>
using namespace std;
  
string Point::toString() {
	ostringstream out;
	out << "x = " << setfill('0') << setw(2)<< x << ", " 
		<< setw(2) << "y = " << y << endl;
	return out.str();
}
