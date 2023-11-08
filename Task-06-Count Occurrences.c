#include<stdio.h>
int countOccurence(int arr[], int size, int num)
{
   int count = 0;
   for(int i=0; i<size; i++){
     if(arr[i] == num){
        count++;
     }
   }
   return count;
}
int main(){
    int size, num;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the values of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter a number to count how many times it appears in an array: ");
    scanf("%d",&num);
    int count_result = countOccurence(arr, size, num);
    printf("The number %d is total %d times appears in the array.",num,count_result);
}