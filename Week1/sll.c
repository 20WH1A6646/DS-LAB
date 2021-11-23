#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*link;
};
struct node*head = NULL;
int cur* temp;
struct node*create(){
    int n;
    printf("Enter no of elements");
    scanf("%d",&n);
for(i=0;i<n;i++){
    cur = struct node* malloc(sizeof(struct node));
    scanf("%d",&cur data);
    cur-> link = NULL;
    if (head== NULL){
    head = cur;
    }
    else{
    temp = head;

    while(temp -> link != NULL){
    temp = temp-> link;
    temp-> link = cur;
    }
  }
}
return head;
}
struct node* insert_begin(int ele){
    cur = struct node* malloc(sizeof(struct node));
    cur->data = ele;
    cur-> link = head;
    head = cur;
return head;
}

struct node* insert_end(int ele){
        cur = struct node* malloc(sizeof(struct node));
        cur -> data = ele;
        cur->link = NULL;
        temp = head;
        while(temp-> link != NULL){
            temp = temp-> link;
    }
        temp-> link = cur;
    return head;
}

struct node* insert_pos(int ele){
        cur = struct node* malloc(sizeof(struct node));
        cur -> data = ele;
        while(c<pos-1){
        temp = head;
        temp= temp-> link;
        c++;
    }
        cur-> link= temp->link;
        temp-> link = cur;
    return head;
}

struct node* delete_begin(struct node*head){
    temp = head;
    head = temp-> link;
    printf("delete element %d",temp->data);
        free (temp);

return head;
}

struct node* delete_end(struct node*head){
    temp = head;
    while(temp-> link!= NULL){

    temp = temp-> link;
    printf("delete element %d",temp->data);
        free (temp);

return head;
}

struct node* delete_pos(struct node* head , int pos)
{
    temp  = head;
    int c =1;
    while(c<pos){
        temp1 = temp;
        temp = temp-> link;
        c++;
    }
    temp1 -> link = temp-> link;
    if("deleted  ele %d " , temp-> data);
         free(temp);
return head;
}

void display(struct node* head)
{
    temp = head;
    while( temp! = NULL)
    {
        printf("%d", temp-> data);
        temp = temp-> link;
    }
}

void reverse_display(struct node* tail)
{
    if( head!= NULL)
        reverse_display(head-> link)
        printf( "%d", head-> data);
}
int Search(struct node* head, int key)
{
    int c=1;
    temp = head;
    while(temp!= NULL)
    {
        if(key = temp -> data)
        {
            return c;
        }
        temp = temp-> link;
        c++;
    }
    return -1;

    }

struct node * sorting(struct node* head)
{
    temp = head;
    int x;
    while(temp!= NULL)
    {
        t1 = head;
        while(t! = NULL)
        {
            if(t1-> data,t1->link->data)
            {
                x = t1-> data;
                t1-> data = t1-> link-> data;
                t1-> link-> data =x;
            }
            t1 = t1-> link;
        }
        temp = temp-> link;
    }
    return head;
}

int main(){
    int ch,ele,pos;
while(1){
    printf("1-create\n ,2-insert_begin\n,3-insert_end\n,4-insert_pos\n ,5-delete_begin\n,6-delete_end\n,7-delete_pos\n ,8-display\n,9-reverse_display\n,10-Search\n ,11-sorting\n,12-exit\n");
    printf("enter choice:");
    scanf("%d", &ch);
switch(ch);
{
    case1 : head = create();
            break;
    case2 : scanf("%d", &ele);
            head = insert_begin(ele);
            break;
    case3 : scanf("%d",&ele);
            head = insert_end(ele);
            break;
    case4 : printf("enter pos");
            scanf("%d",&pos);
            printf("enter ele");
            scanf("%d",ele);
            head = insert_pos(pos,ele);
    case5 : head = delete_begin();
            break;
    case6 : scanf("%d", &ele);
            head = delete_end();
            break;
    case7 : scanf("%d",&ele);
            head = delete_pos(ele);
            break;
    case8 : display(head);
            break;
    case9 : reverse_display(head);
            break;
    case10 :scanf("%d", &ele);
            break;
    case11 : head = sorting(head);
            break;
    case12 : exit(0);

}
}
return 0;
}
return 0;
}
