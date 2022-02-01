#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top =-1;
int ele;
int stack[SIZE];

void push(int ele){
    stack[++top]=ele;
}
int pop(){
    return stack[top--];
}
int peek(){
    return stack[top];
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
int ch;
int ele;
    while(1){
            printf("\n 1:push \n 2:pop \n 3:peek \n 4:display \n 5:exit");
            printf("Enter your choice");
            scanf("%d",&ch);
        switch(ch){
            case 1: if(top== SIZE -1){
                        printf("Stack overflow");
                    }
                    else
                    {
                        printf("Enter element to be inserted");
                        scanf("%d",&ele);
                        push(ele);
                    }
                    break;
            case 2: if(top==-1){
                        printf("Stack underflow");
                    }
                    else
                    {
                        printf("Deleted element is %d",pop());
                    }
                    break;
            case 3: if(top==-1){
                        printf("Stack underflow");
                    }
                    else
                    {
                        printf("Top element is %d",peek());
                    }
                    break;
            case 4: if(top==-1){
                        printf("Stack overflow");
                    }
                    else
                    {
                        display();
                    }
                    break;
            case 5: exit(0);

        }
    }

}


/*
OUTPUT:

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted3

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted6

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted8

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted2

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice4
2
8
6
3

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice2
Deleted element is 2
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice3
Top element is 8
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice




 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice2
Stack underflow
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice3
Stack underflow
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice4
Stack overflow
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice
 
 
 
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted3

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted6

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted8

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted2

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Enter element to be inserted1

 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice1
Stack overflow
 1:push
 2:pop
 3:peek
 4:display
 5:exitEnter your choice







































