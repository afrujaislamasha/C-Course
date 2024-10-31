#include<stdio.h>
int main() {
	float radius, area;
	printf("\nEnter the radius of Circle : ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("\nArea of Circle : %.2f", area);
	return (0);
}
