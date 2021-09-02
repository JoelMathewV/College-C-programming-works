//1. Write a program to swap two numbers using function
#include <stdio.h>
void swap(int, int);
int main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   swap(x, y); 
   
   return 0;
}
 
void swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
   printf("After Swapping:\n");
    printf("x =%d\ny =%d  ",a,b);
}