#pragma once
#include <string>
//기본생성자

class Point {
public:
	Point() {}
	~Point() {}
	std::string toString();

private:
	int x;
	int y;
};