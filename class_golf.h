#ifndef GOLF_H_
#define GOLF_H_

#include <iostream>

constexpr size_t LEN = 40;

class Golf
{
private:
	char m_fullname[LEN];
	int m_handicap;
public:
	Golf();
	Golf(const char * fullname, int handicap);
	void Handicap(const int handicap);
	void Show() const;
};

#endif
