#include<stdio.h>
#include<string.h>

int main()
{       char arr[7][10],r;
        char temp[10];
        int i , j ;

       // clrscr();
       printf("\n Enter all the name of lazy student:\n");

       for (i = 0 ; i < 7 ; i++)
            scanf("%s" , arr[i]);
      
    printf("\nEnter the searching name of the student :");
    scanf("%s",temp);

       for(i = 0 ; i < 7 ; i++) {
          for(j =0 ; j < 10 ; j++)
       {
           if(strcmp(arr[i][j],temp) == 1)
               printf("\nName of student is %s",arr[i][j]);
       }
       }
       /* for (i = 0 ; i < 7 ; i++)
            printf("\t\n%s" , arr[i]);
        */ 

    return 0 ;

}