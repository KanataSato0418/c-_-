#include<iostream>
#include "Figure.h"

void Figure::SetTeihen() {
	teihen = 10.0f;
}

void Figure::SetTakasa() {
	takasa = 5.5f;
}

void Figure::Disp() {
	std::cout << "–ÊÏ‚Í" + menseki;
}