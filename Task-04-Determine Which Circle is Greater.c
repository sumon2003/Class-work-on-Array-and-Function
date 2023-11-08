#include<stdio.h>
#define pi 3.1416
float findArea(int radius)
{
    return pi * radius*radius;
}
    
int main(){
    int radius1, radius2;
    scanf("%d %d",&radius1,&radius2);
    float area1 = findArea(radius1);
    float area2 = findArea(radius2);

    if(area1 > area2){
        printf("The area of the first circle is greatr: %f",area1);
    }
    else if(area1 < area2){
        printf("The area of the second circle is greater: %f",area2);
    }
    else{
        printf("The area of both circle is equal: area1 = %f, area2 = %f",area1,area2);
    }
    
    return 0;
}