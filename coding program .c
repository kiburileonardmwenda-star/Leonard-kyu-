#include <stdio.h>
int main() {
float height=40; //%f
double bankBalance=30000; // %lf
char phoneNumber[12]; 0741011675;//%s
//
printf("40 centimeters): \t");
scanf("%f", &height);

//
printf("30000 Kenya shillings):\t ");
scanf("%lf", &bankBalance);

// Prompt for phone number
printf("0741011675: \t");
scanf("%s", &phoneNumber);

// Display the collected information

printf("Height: %.2f\n", height);
printf("Bank Balance: 30000KES %.2f\n", bankBalance); 
printf("Phone Number:0741011675 %s\n", phoneNumber);

return 0;
}