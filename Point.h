#include <string>

#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point() {}
	~Point() {}
	std::string toString();
	void setPoint(int, int);

private:
	int x;
	int y;
};
#endif
