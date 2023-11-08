#include<stdio.h>
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}
int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the values of array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    //Original Array
    printf("Original Array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    //Reverse Array
    reverseArray(arr, size);

    // Print reversed array
    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
  return 0;
}