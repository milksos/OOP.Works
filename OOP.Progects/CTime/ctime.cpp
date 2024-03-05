#include "ctime.h"
CTime::CTime() {
	hours = 0;
	min = 0;
	sec = 0;
}
	CTime::CTime(int hours_, int min_, int sec_) {
		hours = hours_;
		min = min_;
		sec = sec_;
}
	CTime::CTime(const CTime& time) {
		hours = time.hours;
		min = time.min;
		sec = time.sec;
	}

