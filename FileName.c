#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {
	int m,sum,n;
	m = 100;
	do {
		char buf[4];
		snprintf(buf, sizeof(buf), "%d", m);
		char tem = buf[0];
	    buf[0] = buf[2];
		buf[2] = tem;
		int n = atoi(buf);
		sum = n + m;
		if(sum==1333)
		printf("a=%c,b=%c,c=%c\n", buf[2], buf[1], buf[0]);
		m++;
	} 
	while (m <= 999);

	return 0;
}
