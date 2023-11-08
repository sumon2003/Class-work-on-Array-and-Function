#include<stdio.h>
int findMax(int array[], int size)
{
    int max = array[0];
    for(int i=0; i<size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
int findMin(int array[], int size)
{
    int min = array[0];
    for(int i=0; i<size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int array[size];
    printf("Enter the values of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    
    int maximum = findMax(array, size);
    int minimum = findMin(array, size);

    printf("The maximum value of the array is: %d\n",maximum);
    printf("The Minimum value of the array is: %d\n",minimum);
}