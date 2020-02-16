// 6210401244 : Chutikarn Mongkolthanachok
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}N;
void sort(N **head,int num){
    N *tmp,*new;
    new=(N*)malloc(sizeof(N));
    new->data=num;
    if(*head==NULL || (*head)->data>=new->data){
        new->next=*head;
        *head=new;
    }
    else{
        tmp=*head;
        while(tmp->next!=NULL && tmp->next->data <new->data){
            tmp=tmp->next;
        }
        new->next=tmp->next;
        tmp->next=new;
    }
}
void print(N *head){
    for(;head;head=head->next){
        printf("%d\n",head->data);
    }
}
int main(){
    int num;
    N *head=NULL;
    while (1)
    {
        scanf("%d",&num);
        if(num>=0){
            sort(&head,num);
        }
        else{
            break;
        }
    }
    print(head);  
}
