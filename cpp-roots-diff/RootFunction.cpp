#include <math.h>
#include <cstdio>
#include "Header.h"

double* rootDifference(float x) {
	
//variable declaration
	static float powerS{};
	static float powerL{};
	static float smallest{};
	static float largest{};
	static float range{};
	static float rangeABS{};
	static double arr[5];
	
//smallest root
	for (float i = x; i >= 2; i--) {
		static double rooti{};
		rooti = pow(x, (1 / i));
		if (pow(rooti, i) == x && rooti < x) {
			powerS = i;
		    smallest = rooti;
			break;
		}
	}

//largest root	
	for (float j = 2; j <= x; j++) {
		static double rootj{};
		rootj = pow(x, (1 / j));
		if (pow(rootj, j) == x && rootj < x) {
			powerL = j;
			largest = rootj;
			break;
		}
	}

//return statements
	range = (largest - smallest);
	rangeABS = fabsf(range);
	arr[0] = rangeABS;
	arr[1] = smallest;
	arr[2] = powerS;
	arr[3] = largest;
	arr[4] = powerL;
	return arr;
	

}
