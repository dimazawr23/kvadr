#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int b;
	int c;
	float x1;
	float x2;
	float d;
	printf("Input your A, B, C for equation\n");
	scanf("%d %d %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d >= 0) {
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
	}
	return 0;
}
