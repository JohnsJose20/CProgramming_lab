#include <stdio.h>
#define pi 3.14159
#define area_of_circle(r) (pi*r*r)
#define s_area_of_cylender(r,h) (2*pi*r*(r+h))
int main()
{
	float r,h,area,surface_area;
	
	printf("Enter the radius of circle &cylender: ");
	scanf("%f",&r);
	
	printf("Enter the height of the cylender: ");
	scanf("%f",&h);
	
	area = area_of_circle(r);
	surface_area = s_area_of_cylender(r,h);
	
	printf("Area of the Circle is : %.2f\n",area);
	printf("Surface area of the cylender is: %.2f\n",surface_area);
	
	return 0;
}
