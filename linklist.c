#include <stdio.h> 
#include <stdlib.h>  
struct node
{
            int data;
            struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *); 
struct node *display(struct node *);


int main() {
              int option;

do {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1:  Create a list");
        printf("\n 2:  Display the list");

        printf("\n\n Enter your option : "); 
        scanf("%d", &option);
        switch(option)
      {
        case 1: start = create_ll(start);
                printf("\n LINKED LIST CREATED");
                break;
        case 2: start = display(start);
                break;
      }
    }while(option != 0);

    return 0;
}

struct node *create_ll(struct node *start)
{
        struct node *new_node , *ptr; 
        int num;
        printf("\n Enter -1 to end"); 
        printf("\n Enter the data : "); 
        scanf("%d", &num); 

    while(num!=-1)
    {
        new_node = (struct node*)malloc(sizeof(struct node)); 
        new_node -> data=num;
        if(start==NULL)
        {
            new_node->next = NULL; 
            start = new_node;
        } 
        else {
            //for(ptr = start ; ptr->next != NULL ; ptr=ptr->next);
           ptr=start;
            while(ptr->next != NULL) 
                    ptr = ptr->next; 
            ptr->next = new_node; 
            new_node->next = NULL;
        }     
                 printf("\n Enter the data :");
                 scanf("%d", &num);
         
    }
         return start;    
}
struct node *display(struct node *start)
{
        struct node *ptr; 
        ptr = start;
        //printf("\n%p\n",ptr); 
        while(ptr != NULL) 
        {
            printf("\t %d ", ptr->data);    
            ptr = ptr->next;
        }
            return start;
}