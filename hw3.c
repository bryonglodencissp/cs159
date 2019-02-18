#include <stdio.h>
#include <math.h>

void printSphere(int sphereNumber, double radius, double *totalSurfaceArea, double *totalVolume);
void printResults(double volume, double surfaceArea);

int main() {
	double radius = 0.0;
	double totalSurfaceArea = 0.0;
	double totalVolume = 0.0;
	printf("Please enter the value of the largest radius -> ");
	scanf("%lf",&radius);
	printf("\n");
	printSphere(1, radius, &totalSurfaceArea, &totalVolume);
	printSphere(2, radius/2.0, &totalSurfaceArea, &totalVolume);
	printSphere(3, radius/4.0, &totalSurfaceArea, &totalVolume);
	printResults(totalVolume, totalSurfaceArea);
	return 0;
}

void printSphere(int sphereNumber, double radius, double *totalSurfaceArea, double *totalVolume) {
	double myCircumference = 2.0 * M_PI * radius;
	double mySurfaceArea = 4.0 * M_PI * radius * radius;
	double myVolume = (4.0/3) * M_PI * radius * radius * radius;
	printf("Radius #%i is:%16.2f\n", sphereNumber, radius);
	printf("Circumference #%i is:%9.2f\n", sphereNumber, myCircumference);
	printf("Surface Area #%i is:%10.2f\n", sphereNumber, mySurfaceArea);
	printf("Volume #%i is:%16.2f\n", sphereNumber, myVolume);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	
	*totalSurfaceArea = *totalSurfaceArea + mySurfaceArea;
	*totalVolume += myVolume;
}

void printResults(double volume, double surfaceArea) {
	printf("Total Volume:%16.2f\n", volume);
	printf("Total Surface Area:%10.2f\n", surfaceArea);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}
