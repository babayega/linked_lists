#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    
    
};


void printlist(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
        
    }
    
}

void push(struct node** head_ref, int data)
{
    
    struct node* new_node = NULL;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
    
}


int count(struct node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    
    return (1+count(head->next));
}


void search(struct node* n)
{
    int x;
    printf("enter the element to be searched");
    scanf("%d",&x);
    while(n!=NULL)
    {
        if(n->data==x)
            printf("data is present");
        n=n->next;
    }
    
}

int main()
{
    
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    
    
    
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    
    push(&head,0);
    push(&head,4);
    
    printlist(head);
    int c=count(head);
    printf("recursive count is %d",c);
    search(head);

    
    getchar();
    return 0;
    
}




