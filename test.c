#include<stdio.h>
#include<conio.h>
int main(){
    int a = 7,*pe;
    pe = &a;
    printf("%p",pe);
    printf("\t%d",*pe);
}