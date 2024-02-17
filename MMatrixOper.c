#include<stdio.h>
/**
 * int sum_of_matrix (int s1[5][5][5],int s2[5][5][5], int r ,int c ,int p);
 * int transpose_of_matrix (int MM[5][5][5],int r ,int c ,int p);
 * int product_of_matrix(int P[5][5][5],int Q[5][5][5], int r ,int c ,int p);
 **/
//void display_matrix (int (*MM)[3][3],int r ,int c ,int p);
int main()
{
    int  i,j,k,r1,r2,c1,c2,p1,p2,op;
    
    int A[r1][c1][p1],B[r2][c2][p2];
    int sum[r1][c1][p1],tran[r1][c1][p1];
    
    printf ("\nSelect below given option to perform operation on :");
 do{
        printf ("\n[1].Find SUM of two matrix.\n");
        printf ("\n[2].Find TRANSPOSE of matrix.\n");
        //printf ("\n[3].Find PRODUCT of two matrix.\n");
        printf ("\n[0].Exit\n");
        printf("\nChoose the given number.(for e.g 1 for sum):");
        scanf("%d",&op);
   
      switch (op)
         {
          case 1:   printf("\nFirst you have give dimension of 3-D matries :");
       
                    printf("\n\nDIMENSION OF FIRST Matrix:\n");

                    printf ("\n#Enter number row(1-3) in 3-D matrix:");
                    scanf("%d",&r1);

                    printf ("\n#Enter number column(1-3) in 3-D matrix:");
                    scanf("%d",&c1);

                    printf ("\n#Enter number page(1-3) in 3-D matrix:");
                    scanf("%d",&p1);

                        /*Entry of element in 3d matrix row-major order*/
                        if (r1 < 5 && c1 < 5)   
                        { 
                            printf("\nEnter the element value of first matrix:\n\n");
                            for (i = 0 ; i < r1 ; i++ )
                                {   
                                for (j = 0 ; j < c1 ; j++)
                                    {        
                                    for (k = 0 ; k < p1 ; k++)
                                        { 
                                            printf("\nValue of A(%d,%d,%d):",i,k,j);
                                            scanf("%d",&A[i][j][k]);
                                        }
                                    }
                                }
                        }
                        else
                            {  
                            }

                    printf("\n\nDIMENSION of SECOND MATRIX:\n");
                    
                    printf ("\n#Enter number row(1-3) in 3-D matrix:");
                    scanf("%d",&r2);
                    
                    printf ("\n#Enter number column(1-3) in 3-D matrix:");
                    scanf("%d",&c2);
                    
                    printf ("\n#Enter number page(1-3) in 3-D matrix:");
                    scanf("%d",&p2);

                    if(r1 == r2 && c1 == c2)  
                        {     
                            printf("\nEnter the element value of second matrix:\n\n");
                            for (i = 0 ; i < r2 ; i++ )
                            {   
                                for (j = 0 ; j < c2 ; j++)
                                {        
                                    for (k = 0 ; k < p2 ; k++)
                                        { 
                                            printf("\nEnter value of B(i,j,k):");
                                            scanf("%d",&B[i][j][k]);
                                        }
                                }
                            }
                 
                            //Sum of two multi-matrix
                            for (k = 0 ; k < r1 ; k++ )
                                {   
                                    for (i = 0 ; i < c1 ; i++)
                                    {        
                                        for (j = 0 ; j < p1 ; j++) 
                                            sum[i][j][k] = A[i][j][k] + B[i][j][k]; 
                                    }
                                }

                                printf("\n\n");
                            
                            // display the 3d matrix
                            for (k = 0 ; k < p1 ; k++ )
                            {   
                                printf("Page %d matrix:\n",k+1);
                                for (i = 0 ; i < r1 ; i++)
                                {         
                                    for (j = 0 ; j < c1 ; j++) 
                                        printf("\t %d",*(*(*(sum + i)+j)+k));
                                
                                printf("\n");
                                }
                            } 
                            break;  
                        }
        case 2: for (k = 0 ; k < p1 ; k++)
                {
                    for (i = 0 ; i < r1 ; i++)
                    {
                        for (j = 0 ; j < c1 ; j++)
                            tran[i][j][k]=A[j][i][k]; 
                    }
                }  
                printf("\n\n");
                // display the 3d matrix
                for (k = 0 ; k < p1 ; k++ )
                {   
                    printf("Page %d matrix:\n",k+1);
                    for (i = 0 ; i < r1 ; i++)
                    {         
                        for (j = 0 ; j < c1 ; j++) 
                            printf("\t %d",tran[i][j][k]);
                        
                     printf("\n");
                    }
                }
                break;
       default: printf("  *******************************************");               
                printf("\nPlease create dimension in given limits(1-)\n");
                printf("  *******************************************");
                break;
                
         }
    }while(op != 0);

    return 0;      


}