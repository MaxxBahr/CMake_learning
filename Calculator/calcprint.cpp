#include <iostream>
#include "include/calc/lib.hpp"
#include "include/calc/printlib.hpp"

int PrintResult::printAdd(double a, double b) {
	std::cout << "Result is: " << Arithmetic::Add(a, b) << std::endl;
	return 0;
}
int PrintResult::printSubtract(double a, double b) {
	std::cout << "Result is: " << Arithmetic::Subtract(a, b) << std::endl;
	return 0;
}
int PrintResult::printMultiply(double a, double b) {
	std::cout << "Result is: " << Arithmetic::Multiply(a, b) << std::endl;
	return 0;
}
int PrintResult::printDivide(double a, double b) {
	std::cout << "Result is: " << Arithmetic::Divide(a, b) << std::endl;
	return 0;
}