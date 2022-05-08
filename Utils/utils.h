#pragma once
#include <iostream>
typedef void (*action)();
void egCall(action f)
{
	std::cout << std::endl;
	f();
	std::cout << std::endl;
}
