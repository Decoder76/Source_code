#include <stdio.h>
int main() {
	 int arr1[20], arr2[20], iter[30], len1, len2, i , j = 0 , p = 0, q = 0;
 
   printf( "\nEnter lenght of first array(A) (Max 20) :");
   scanf("%d", &len1);
 
   printf( " Enter sorted values for first array \n"); 
   for (i = 0; i < len1; i++) 
        scanf("%d", &arr1[i]);

	printf( "\nEnter length of second array(B) (Max 20) :");
        scanf  ("%d", &len2);
 
    printf ("\nEnter sorted values for second array \n");
    for (i = 0; i < len2; i++) 
        scanf("%d", &arr2[i]);

    


    printf("\n\nA^B ={");
    // Intersection  of two given sets
    for(p = 0; p <= len1; p++)
    {   
      for(q = 0; q <= len2; q++)
      {      
             if(arr1[p] == arr2[q] )
             {  
                iter[j]=arr1[p];
                j++;              
             }  
      }
    }
  if(j != 0)
    for(i = 0;i < j; i++)
      {  
        if(iter[i] != iter[i+1])
            printf("%d ",iter[i]);
      }
  else
      printf(" 'Null element' ");
    
      printf("}\n");
   return 0;
}
