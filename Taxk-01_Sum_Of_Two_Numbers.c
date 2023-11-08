#include<stdio.h>
int sum_Of_Two_Numbers(int a, int b)
{
    int sum = a + b;
    return sum;
 }
int main(){
    int a,b;
    printf("Enter two integer number: ");
    scanf("%d %d",&a,&b);
    int result = sum_Of_Two_Numbers(a, b);
    printf("The sum of two integer number = %d\n", result);
 return 0;   
}