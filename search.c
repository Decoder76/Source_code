#include<stdio.h> 
#include<stdlib.h> 
void insertatlast(int); 
void insertatbeg(int n); 
void deleteatbeg(); 
void deleteatlast(); 
void traverse(); 
void search ();
void nodecount();

struct node
{
        int data;
        struct node *link; 

}*head=NULL,*newnode,*temp,*ntd; 

int main()
{
        int ch,num; 
        while(1)
        {
                printf("\n1.Add Element At Begining"); 
                printf("\n2.Add Element At Last"); 
                printf("\n3.Traverse");
                printf("\n4.Delete Element Last Element"); 
                printf("\n5.Delete Element From Begining"); 
                printf("\n6.Exit");

                printf("\nEnter Your Choice :"); 
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1:
                                printf("\nEnter Number For Insert At Begining :"); 
                                scanf("%d",&num);
                                insertatbeg(num);
                                break;
                        case 2:
                                printf("\nEnter Number For Insert At Last :"); 
                                scanf("%d",&num);
                                insertatlast(num);
                                break;
                        case 3:
                                printf("\nElements are\n");
                                traverse();
                                break; 
                        case 4:
                                deleteatlast();
                                break; 
                        case 5:
                                deleteatbeg();
                                break;
                        case 6:
                                printf("\nBye-Bye"); 
                                exit(0);
                }
        }
        return 0;
}

void insertatlast(int n) 
{  
        newnode=(struct node *)malloc(sizeof(struct node)); 
        newnode->data=n;
        newnode->link=NULL;
        if(head==NULL)
            head=newnode; 
        else
        {
            temp=head;
            while(temp->link!=NULL) 
            {
                temp=temp->link; 
                temp->link=newnode;
            }
        }
}

void insertatbeg(int n) 
{
        newnode=(struct node *)malloc(sizeof(struct node)); 
        newnode->data=n;
        newnode->link=NULL;
        if(head==NULL)
        head=newnode; 
        else
        {
                newnode->link=head; 
                head=newnode;
        }
}

void deleteatbeg() 
{
        if(head==NULL) 
        {
        printf("\nList is Empty\n");
        return; 
        }
        temp=head;
        head=head->link;
        printf("\nDeleted Element = %d", temp->data); 
        free(temp);
}

void deleteatlast() 
{
        if(head==NULL) 
        {
                printf("\nList is Empty\n");
                return; 
        }
        if(head->link==NULL) 
        {
                temp=head;
                head=NULL;
                printf("\nDeleted Element = %d",temp->data); 
                free(temp);
        } 
        else 
        {
                temp=head; 
                while(temp->link->link!=NULL)
                {
                temp=temp->link;
                }
                ntd=temp->link;
                temp->link=NULL;
                printf("\nDeleted Element = %d",ntd->data); 
                free(ntd);
        }
}

void traverse() 
{       temp=head; 
        while(temp!=NULL) 
        {
                printf("%d\t",temp->data); 
                temp=temp->link;
        }
}
/*********************************
Que- 1: create a function named as "search()"
which contains a number as argument 
*if given number exist in list
     return 1 
*Otherwise 
     return 0.
***********************************/

void search()
{
       
}

/*********************************
 Que-2: Create a function named as nodecount() 
 which returns 
 how many elements are there in the linked list.
 ********************************/
void nodecount()
{

}