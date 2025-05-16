#ifndef PRINTLIB_H
#define PRINTLIB_H
class __declspec(dllexport) PrintResult {
public:
	static int printAdd(double a, double b);
	static int printSubtract(double a, double b);
	static int printMultiply(double a, double b);
	static int printDivide(double a, double b);
};
#endif