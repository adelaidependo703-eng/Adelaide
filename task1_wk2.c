 #include <stdio.h>
 #define PI 3.14159  
 int main() {
 	float radius, height;
 	float volume, surface_area;
 	
 	//prompt the user for input
 	printf("Enter the radius of the cylinder:");
 	scanf("%f", &radius);
 	
 	printf("Enter the height of the cylinder:");
 	scanf("%f", &height);
 	
 	//Calculate volume and surface area
 	volume = PI* radius * radius * height;
 	surface_area = (2 * PI* radius * radius) + (2 * PI * radius * height);
 	
 	//Display results with 2 decimal places precision
 	printf("\n---cylinder results---\n");
    printf("The volume of the cylinder is: %.2f\n", volume);
 	printf("The surface area of the cylinder is: %.2f\n", surface_area);
 	
 	return 0;
 }