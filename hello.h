#pragma once

class Greetings
{
public:
	Greetings(const std::string& target);
	std::string say() const;
private:
	std::string m_target;
};

std::ostream& operator<<(std::ostream& os, const Greetings& greet);
