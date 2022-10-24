#include "sum.h" // In this file definition of functions from sum.h file should be provided


float sum(float a, float b) {
	std::cout << "sum(float a, float b)" << std::endl;
	return a + b;
}

float sum(int a, int b) { // This is possible because those function hae diferent parameter lists
	std::cout << "sum(int a, int b)" << std::endl;
	return static_cast<float>(a) + static_cast<float>(b);
}