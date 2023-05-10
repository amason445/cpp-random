#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include "Header.h"


int main() {
	
	for (float x = 1; x <= 1000; x++) {
		double* y = { rootDifference(x) };
		printf("For number: %f, the range is %lf. The smallest root is %lf and the power is %lf. The largest root is %lf and the power is %lf. \n", x, y[0], y[1],y[2],y[3],y[4]);
	}
	return 0;
}