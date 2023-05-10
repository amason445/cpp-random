#include "Header.h"

//sum of primes function
int sumOfPrimesBetween(int x) {
	int sum;
	if (x <= 1) {
		sum = 0;
	}
	else if (x == 2) {
		sum = 2;
	}
	else {
		sum = 2;
		bool isPrime;
		for (int i = 3; i <= x; i++) {
			isPrime = true;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime) sum += i;
		}


	}
	return sum;

}