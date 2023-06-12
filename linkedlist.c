#include<stdio.h>
#include<stdlib.h>

 struct node{
    int data;
    struct node*link;

 };

  struct node* start=NULL;

   int in_at_start()
   {

    struct node* fresh;
    fresh=(struct node*)malloc(sizeof(struct node));

    if (fresh==NULL){
        printf("overflow");
    }
    
    int item;
    scanf("%d",&item);
    fresh->data=item;
    fresh->link = NULL;
    if (start == NULL)
    {
        start = fresh;
     }
     else
     {
        fresh->link=start;
        start=fresh;
     }
   }
   int in_at_end()
   {
      struct node *fresh,*ptr;
      fresh=(struct node*)malloc(sizeof(struct node));
      if(fresh==NULL
)
      {
        printf("overflow");
      }
      int item;
      scanf("%d",&item);

      fresh->data=item;
      fresh->link=NULL
;

      if(start==NULL
)
      {
        start=fresh;
      }
      else
      {
        ptr=start;
        while(ptr->link!=NULL
)
        {
            ptr=ptr->link;

        }
        ptr=fresh;
      }
      
   }


   
   int search(){

     int find;
     struct node* ptr;
     ptr=start;
   if(ptr==NULL)
     {
         printf("underflow");
         exit(1);
     }
else{
     printf("enter you elemnt to find");
     scanf("%d",&find);
     
        while (ptr!=NULL)
        {
          if(ptr->data==find)
          {
            printf("your element%d at positin of %d",ptr->data,ptr->link);
            continue;
          }
            
        }
}int del_at_end()
   {
       struct node *prev,*ptr;
      if (start==NULL){
        printf("UNDERFLOW");
        exit(1);
        }
      else
      {
        ptr=start;
        while(ptr!= NULL)
        {
            prev=ptr;
            ptr=ptr->link;
            
        }
        prev=NULL;
        free(ptr);
      }  


      
      
   }
   int del_at_loc()
   {
    int loc,i;
    struct node*ptr,*prev;
    printf("enter you loc");
    scanf("%d",&loc);
    if (start==NULL)
    {
        printf("under flow");
    }
    else
    {
        ptr=start;
    for(i=0;i!=loc;i++)
    {
        prev=ptr;
        ptr=ptr->link;
    }
       prev->link=ptr->link;
       free(ptr);
    }

   }
   

   }
   int main()
   {
      int option=1;
      while(option)
      {  
         printf("enter your option\n");
         scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("enter your elemnt to insert at start");
            
            in_at_start();
            break;
            case 2:
            printf("enter your elemnt to insert at end");
            in_at_end();
            break;
            case 3:
            search();
             break;
case 0:
              exit(1);
              
              
         }
      }
   }
