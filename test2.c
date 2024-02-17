#include <stdio.h>

int main(){
    int i,j,k,p,q,r ;

    printf("\nFirst you have give");
    printf ("dimension of 3-D matrix :\n");


    printf ("\n#Enter number row(1-3) in 3-D matrix:");
        scanf("%d",&i);
    printf ("\n#Enter number column(1-3) in 3-D matrix:");
        scanf("%d",&j);
    printf ("\n#Enter number page(1-3) in 3-D matrix:");
        scanf("%d",&k);

    printf("\nEnter the element value of matrix:\n\n");

        int A[i][j][k];

            for (p = 0 ; p < i ; p++ )
            {   
                for (q = 0 ; q < j ; q++)
                {        
                    for (r = 0 ; r < k ; r++)
                        { 
                             printf("\nEnter Value of A(%d,%d,%d):",p,q,r);
                             scanf("%d",&A[p][q][r]);
                        }
                }
            }  
    printf("\n\n");
            // display the 3d matrix
            for (r = 0 ; r < i ; r++ )
            {   printf("Page %d matrix:\n",r+1);
                for (p = 0 ; p < j ; p++)
                {         
                    for (q = 0 ; q < k ; q++) 
                        printf("%d ",A[p][q][r]);
                
                  printf("\n");
                }
                printf("\n\n");
            }  
            return 0;
}