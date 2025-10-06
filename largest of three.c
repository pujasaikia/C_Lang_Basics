#include<stdio.h>
int main() {
	int num1, num2, num3;
	
	num1=10;
	num2=20;
	num3=30;
	
	if (num1>=num2 && num1>=num3) {
        printf("The largest number is: %d", num1);
    } 
	else if (num2>=num1 && num2>=num3) {
        printf("The largest number is: %d\n", num2);
    } 
	else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
