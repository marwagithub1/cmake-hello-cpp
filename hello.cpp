#include <iostream>
#include "hello.h"


Greetings::Greetings(const std::string& target)
: m_target(target)
{
}

std::string Greetings::say() const
{
	return std::string("Hello ") + m_target + "!";
}

std::ostream& operator<<(std::ostream& os, const Greetings& greet)
{
	os << greet.say();
	return os;
}
