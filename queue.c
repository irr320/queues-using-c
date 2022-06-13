#include<stdio.h>
int queue[10];
int front=0,rear=-1;
void main(){
	int n,x;
	printf("enter size of array\n");
	scanf("%d",&n);
	do{
		printf("\n1.enqueue  2.dequeue  3.display\n");
		scanf("%d",&x);
		if(x==1){
			enqueue(n);
		}
		else if(x==2){
			dequeue(n);
		}
		else if(x==3){
			display();
		}
		else{
			break;
		}
	}while(x>=1 && x<=3);
}
void enqueue(int n){
	if(front==0 && rear==n-1){
		printf("queue is full\n");
	}
	else{ 
		rear++;
		printf("enter the element\n");
		scanf("%d",&queue[rear]);
	}
}
void dequeue(int n){
	int i;
	if(front==0 && rear==-1){
		printf("queue is empty\n");
	}
	else{
		printf("element removed is %d",queue[front]);
		for(i=0;i<=rear;i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
}
void display(){
	int i;
	printf("elements in the queue\n");
	for(i=0;i<=rear;i++){
		printf("%d ",queue[i]);
	}
}
