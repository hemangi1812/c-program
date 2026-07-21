#include <stdio.h>
int main() {

    int n;
    int mul=0;
    printf("enter a number");
    scanf("%d", &n);
    for (int i=1; i<= 10; i++)
     {
        mul=n*i;
        printf("multiplication of %d*%d = %d\n", n, i, mul);   
     }
} 