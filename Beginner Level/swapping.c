#include<stdio.h>
int main() {
	int a, b, c;
	
	printf("value of a: ");
	scanf("%d", &a);
	
	printf("value of b: ");
	scanf("%d", &b);
	
	c=a;
	a=b;
	b=c;
	
    printf("the value after swapping is a=%d and b=%d", a,b);
    
    return 0;
}
