#include "class_golf.h"

#include <cstring>
#include <iostream>

Golf::Golf()
{
	std::cout << "It initialize does not make any sence" << std::endl;
}

Golf::Golf(const char * fullname, const int handicap)
{
	strncpy(m_fullname, fullname, sizeof(m_fullname));
	m_handicap = handicap;
}

void Golf::Show() const
{
	std::cout << "Person: " << m_fullname << std::endl;
	std::cout << "Handicap: " << m_handicap << std::endl;
}
