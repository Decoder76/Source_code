#include<stdio.h>
int main(){
    int x;
    float y,z;

    printf("\t\nx / y :");
    scanf("%d/%f",&x,&y);

    z = x / y;
    printf("Result:%6.5f",z);
    

}