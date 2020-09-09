#pragma once
#include <string>

#ifndef TIME_H //정의되어있지 않으면
#define TIME_H //지금 정의

class Time {
public:
	explicit Time(int = 0, int = 0, int = 0);

	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	unsigned int getHour() const;
	unsigned int getMinute() const;
	unsigned int getSecond() const;

	std::string toUniversalString() const;
	std::string toStandardString() const;

private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};
#endif //여기까지 실행 (정의되어있지 않다면. 만약 정의되어 있다면 여기까지 스킵)
