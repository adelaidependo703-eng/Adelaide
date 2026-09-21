 #include <stdio.h>
 
 int main() {
 	float height;  
 	double bankbalance;   
 	long long phoneNumber;   
 	
 	// prompt user for input
 	printf("Enter your height (in meters): ");
 	scanf("%f", &height);
 	
 	printf("Enter your bank balance(in Ksh): ");
 	scanf("%lf", & bankbalance);
 	
 	printf("Enter your phone number: ");
 	scanf("%lld", &phoneNumber);
 	
 	//Display information
 	printf("\n--- User details ---\n");
 	printf("Height: %.2f meters\n", height);
 	printf("Bank Balance: %.2lf Ksh\n", bankbalance);
 	printf("Phone number: %lld\n", phoneNumber);
 	
 	return 0;
 }