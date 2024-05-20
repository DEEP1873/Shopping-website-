#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traverse(struct node * ptr){
    while(ptr!=NULL){
       printf("the element are %d:\n",ptr->data);
       ptr=ptr->next;
    }
}
int maximum()
{
    int maximum = head->data;
    struct node * z=head;
    while (z!=NULL)
    {
        if(maximum<z->data)
        {
            maximum=z->data;
        }
        z=z->next;
    }
    return maximum;
}
int minimum()
{
    int minimum = head->data;
    struct node * z=head;
    while (z!=NULL)
    {
        if(minimum>z->data)
        {
            minimum=z->data;
        }
        z=z->next;
    }
    return minimum;
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    head=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=77;
    head->next=second;
    second->data=67;
    second->next=third;
    third->data=67;
    third->next=NULL;

    traverse(head);
    maximum();
    minimum();
    traverse(head);

    return 0;



}

