#include<stdio.h>
float calculateAverage(float a, float b)
{
    float sum = a + b;
    float average = sum/2.0;
    return average;
}
int main(){ 
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    float result_avg = calculateAverage(a, b);
    printf("Average of two numbers = %.2f\n",result_avg);
    
  return 0;
}