#include<stdio.h>
#include<stdlib.h>
 struct node
 {
    
    int data;
    struct node*next;
 };

 struct node* start=NULL;

 //initializtion 

int creation()
{
    int data;
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("overflow");
        exit(1);
    }
else{
    printf("enter you element to insert");
    scanf("%d",&data);
    ptr->data=data;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=start;

    }
    else
    {
       
        temp=start;
        while(temp->next!=start)

        {
            temp=temp->next;

        }
        temp->next=ptr;
        ptr->next=start;
    }

}}

int in_at_start()
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
     if(ptr==NULL)
     {
        printf("overflow");
        exit(1);
     }
     else
     {
        if(start==null)
        {
            start=ptr;
        }

        else
        {
            
        }
     }
    
}

int main()
{
    int option;
   
while (option)
{
 printf("enter your option");
    scnaf("%d",&option);
    switch (option)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
}
}
  
