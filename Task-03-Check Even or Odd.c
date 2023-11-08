#include<stdio.h>
int isEven(int a)
{
    if(a % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int result = isEven(a);
    if(result == 1){
        printf("%d is EVEN.\n",a);
    }else{
        printf("%d is ODD.\n",a);
    }

    return 0;
}