#pragma once
class CTime {
	int hours, min, sec;
public:
	CTime();
	CTime(int hours_, int min_, int sec_);
	CTime(const CTime & time);
};