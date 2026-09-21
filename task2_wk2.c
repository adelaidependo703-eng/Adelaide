 #include <stdio.h>
 
 int main() {
 	int age;
 	float income;
 	
 	//prompt user for age
 	printf("Enter your age: ");
 	scanf("%d", &age);
 	
 	//prompt user for annualincome
 	printf("Enter your annual income (in Sh): ");
 	scanf("%f", &income);
 	
 	//loan qualification checking
 	if(age >=18  && income >=20000) {
 		printf("Congratulations you qualify for a loan.\n");
	 } else { 
	    printf("Unfortunately, we are unable to offer you a loan at this time.\n");
	 }
	 
	 return 0;
	 
}