#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *top = NULL, *cur, *temp;

void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    if(top == NULL){
        cur->link = NULL;
    }
    else{
        cur->link = top;
    }
    top = cur;
}

void pop(){
    temp = top;
    if(top == NULL){
        printf("Stack Underflow \n");
    }
    else{              
        printf("Deleted element: %d\n", (top->data));
        top = top->link;
        free(temp);
    }
}

int peek(){
    return(top->data);
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}


int main(){
    int ch, ele;
    while(1){
        printf("Enter your choice: \n");
        printf("1: push\n2: pop\n3: peek\n4: display\n5: exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter the element to be pushed into the stack: \n");
                scanf("%d", &ele);
                push(ele);
                break;
            case 2:
                pop();
                break;
            case 3:
                if(top == NULL){
                    printf("Stack underflow\n");
                }
                else{
                    printf("Top element : %d\n", peek());
                }
                break;
            case 4:
                if(top == NULL){
                    printf("Stack Underflow\n");
                }
                else{
                    display();
                }
                break;
            case 5:exit(0);
        }
    }
}


/*

OUTPUT:

Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
1
Enter the element to be pushed into the stack:
3
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
1
Enter the element to be pushed into the stack:
6
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
1
Enter the element to be pushed into the stack:
8
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
1
Enter the element to be pushed into the stack:
2
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
4
2
8
6
3
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
2
Deleted element: 2
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
3
Top element : 8
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit

Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
2
Stack Underflow
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
3
Stack underflow
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit
4
Stack Underflow
Enter your choice:
1: push
2: pop
3: peek
4: display
5: exit








































































































































