#include<stdio.h>
int main() {
	int a, b, c,sum,p;
	for (a = 0; a <= 36; a++) {
		for (b = 0; b <= 36; b++) {
			for (c = 0; c <= 36; c++) {
				sum = 36;
				if (a+b+c == 36 && 4 * a + 3 * b + c / 2==36&&c%2==0)
					printf("%d,%d,%d\n", a, b, c);
			}
		}
	}
	return 0;
}