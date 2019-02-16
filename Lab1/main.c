#include <stdio.h>

int main(void) {
	float v1, v2, S, t;
	printf("v1 = ");
	scanf("%f", &v1);
	printf("v2 = ");
	scanf("%f", &v2);
	printf("t = ");
	scanf("%f", &t);

	S = t * (v1 + v2);
	printf("S = %f", S);
	return 0;
}
