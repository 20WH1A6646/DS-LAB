#include<stdio.h>
#include<stdlib.h>
#define size 5

int front = -1, rear = -1, a[size];

void enque(int ele){
	a[++rear] = ele;
	if(front == -1)
		front = 0;
}

void deque(){
	if(front == rear){
		printf("Deleted element = %d\n", a[front]);
		front = rear = -1;
	}
	else{
		printf("Deleted element = %d\n", a[front]);
		front++;
	}
}

void display(){
	for(int i = front; i != rear; i++){
		printf("%d \t", a[i]);
	}
	printf("%d", a[rear]);
}

int main(){
	int ch, ele;
	while(1){
		printf("Enter your choice: \n");
		printf("1: enque\n2: deque\n3: display\n4: exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				if(rear == size - 1){
					printf("Queue Overflow");
				}
				else{
					printf("Enter the element inserted into the queue: \n");
					scanf("%d", &ele);
					enque(ele);
				}
				break;
			case 2:
				if(front == -1){
					printf("Queue Underflow");
				}
				else{
					deque();
				}
				break;
			case 3:
				if(front == -1){
					printf("Queue is Empty");
				}
				else{
					display();
				}
				break;
			case 4:
				exit(0);
		}
	}
}



OUTPUT:

Enter your choice:
1: enque
2: deque
3: display
4: exit
1
Enter the element inserted into the queue:
4
Enter your choice:
1: enque
2: deque
3: display
4: exit
3
4Enter your choice:
1: enque
2: deque
3: display
4: exit
1
Enter the element inserted into the queue:
2
Enter your choice:
1: enque
2: deque
3: display
4: exit
1
Enter the element inserted into the queue:
5
Enter your choice:
1: enque
2: deque
3: display
4: exit
1
Enter the element inserted into the queue:
7
Enter your choice:
1: enque
2: deque
3: display
4: exit
3
4       2       5       7Enter your choice:
1: enque
2: deque
3: display
4: exit
2
Deleted element = 4
Enter your choice:
1: enque
2: deque
3: display
4: exit
3
2       5       7Enter your choice:
1: enque
2: deque
3: display
4: exit





















