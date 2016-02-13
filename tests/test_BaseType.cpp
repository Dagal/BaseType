#include <cassert>
#include <iostream>

#include <Dagal/BaseType/Double.hpp>

int main(int argc, char** argv)
{
	Dagal::BaseType::Double* monDouble;
	assert(monDouble = new Double());
	assert(*monDouble = 5);
	delete monDouble;
	assert(monDouble == NULL);
	std::cout << "Test Ok" << std::endl;
	return 0;
}
