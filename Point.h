#pragma once
#include <string>
//�⺻������

class Point {
public:
	Point() {}
	~Point() {}
	std::string toString();

private:
	int x;
	int y;
};