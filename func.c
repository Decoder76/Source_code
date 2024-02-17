#include<stdio.h>
int main(){
    int a[10] , i , j , small = 0;
    printf("Enter the given number :\n");
    for(i = 0 ; i<5 ; i++)  scanf("%5d",&a[i]);

    for(i = 0 ; i < 5 ; i++) 
    {   
      for(j = 0 ; j < 4 - i; j++){
          if(a[j] > a[j+1])
           {
              small=a[j+1];
              a[j+1]=a[j];
              a[j] = small;
           }
      }
    }
    for(i = 0 ; i < 5 ; ++i)  printf("|\t%d",a[i]);

      return 0;
}