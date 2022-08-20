#include<stdio.h>
int main(){
    float a,A,b;
    printf("Input1 : ");
    scanf("%f",&a);
    printf("Input2 : ");
    scanf("%f",&A);
    printf("Input3 : ");
    scanf("%f",&b);
    if(a>A){
        if(a>b){
            printf("The greatest number is %f",a);
        }
    }
    if(A>a){
        if(A>b){
            printf("The greatest number is %f",A); 
        }
    }
    if(b>a){
        if(b>A){
            printf("The greatest number is %f",b);
        }
    }
    return 0;
}
