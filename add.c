#include<stdio.h>

int main() {
   int a, b, sum,sub;

   printf("\nEnter two no: ");
   scanf("%d %d", &a, &b);

   sum = a + b;
   sub = a-b;


   printf("Sum : %d", sum);
    printf("Sub : %d", sub);

   return(0);
}
