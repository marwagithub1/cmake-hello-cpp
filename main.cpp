#include <iostream>
#include "hello.h"

int main(void)
{
	Greetings greet("World");
	std::cout << greet.say() << " - using Greetings::say() method" << std::endl;
	std::cout << greet << " - using std::ostream << Greetings" << std::endl;
	return 0;
}
