#include <iostream>
#include "Calclation.h"

void Calclation::SetA(float value)
{
	a = value;
}

void Calclation::SetB(float value)
{
	b = value;
}

void Calclation::Disp()
{
	std::cout << a << "+" << b << "=" << (a + b) << "\n";
	std::cout << a << "-" << b << "=" << (a - b) << "\n";
}