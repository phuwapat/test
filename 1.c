#include<stdio.h>
int main(){
    float x,y,z;
    printf("Input1 : ");
    scanf("%f",&x);
    printf("Input2 : ");
    scanf("%f",&y);
    printf("Input3 : ");
    scanf("%f",&z);
    if(x>y>z){
        printf("The greatest number is %f",x);     
    }
    else if(y>x>z){
        printf("The greatest number is %f",y);
    }
    else{
        printf("The greatest number is %f",z);
    }
    return 0;
}