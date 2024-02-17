#include<stdio.h>
float avg(int OBT[20][5],int TE,int sub);
float avg1(int OBT[20][5],int TE,int sub);
int main()
{
    int op,num, i, j, Marks[20][5];
    float Avg ,T_Avg = 0, avgstd[20];
   
    printf("\nEnter marks of each student by subject-vise:\n\n");
    
    printf("How many students in a class:");
    scanf("%d",&num);

    //Entry of marks in report card
    for(i = 0 ; i < num ; i++)
    {
        printf("# Enter score of %d student subjects one by one :\n\n" , i + 1);
        for(j = 0 ; j < 5 ; j++)
        {
            printf("Mark of %d subject:",j+1);
            scanf(" %d",&Marks[i][j]);
            printf("\n");
        }      
    }

    


        printf("\n");
do{
    
    printf("\n* 1.Average score of each subject.");
    printf("\n* 2.Average mark of each student.");
    printf("\n* 3.Number of student got average marks less than 50.");
    printf("\n* 4.Display the score of each student indivisually.");
    printf("\n* 0.Exit from program.");

    printf("\n\nSelect option from above statments:");
    scanf("%d",&op);

   switch(op){
                case 1://Solution (a)
                        printf("\n");
                        //Average of each subjects separatly
                        for ( i = 0 ; i < 5 ; i++)
                        {
                            T_Avg = avg(Marks,num,i);
                            printf("\nAverage of %d subject score in class : %f",i+1,T_Avg);
                        }
                        break;
                case 2://Solution (b)
                        for (i = 0 ; i < num ; i++)
                            avgstd[i] = avg1(Marks,5,i);
                          
                        printf("\n");
                        //Average of each students separatly
                        for (i = 0 ; i < num ; i++)
                            printf("\nAverage mark of %d student : %f",i+1,avgstd[i]);  
                        
                        break;
                case 3://Solution (c)
                        printf("\n");
                        //Student average marks below 50

                        i = 0;
                        int sum = 0;
                        while(i < num)
                        {
                            if (avgstd[i] < 50) 
                                sum++;

                                i++;
                        }        
                        printf("\n%d student have got average mark below 50 !.",sum);
                        break;
                case 4: //Solution (d)
                        printf("\n");
                        // Show scores of every student
                        for(i = 0 ; i < num ; i++)
                        {
                            printf("\n# Score of %d student subjects :",i + 1);
                            for(j = 0 ; j < 5 ; j++)
                                printf("\t%d" , Marks[i][j]);  
                        
                        }
                        break;                        
            }

  }while(op != 0);
        return 0;
}

/****/
//Finding average of subject
float avg1(int OBT[20][5] ,int TE ,int sub){
    int j;
    float sum = 0, av;
    
    for (j = 0 ; j < TE ; j++ )
            sum += OBT[sub][j];
    
    av = sum / TE ;
        return  av ; 
}

//Finding average of student
float avg(int OBT[20][5] ,int TE ,int sub){
    int i ;
    float sum = 0, average;
    
    for (i = 0 ; i < TE ; i++ )
            sum += OBT[i][sub];
    
          average = sum / TE ;
        return  average ; 

}
