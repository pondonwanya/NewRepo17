#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x = 1, a;
	for (x = 1; x < 10001; x++) {
		a = 0;
		for (int i = 1; i < x; i++) {
			if (x % i == 0) {
				a += i;
			}
		}

		if (x == a) {
			printf("P (%d) = %d \n", x, a);
		}
	}
	return 0;
}