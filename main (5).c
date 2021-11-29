/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
int items[SIZE];
int front=-1;
int rear=-1;
int isfull(){
    if((front==rear+1)||(front==0 && rear==SIZE-1)){
    return 1;
    }
    return 0;
}
int isempty(){
    if(front==-1){
        return 1;
    }
    return 0;
}
void enqueue(int element){
    if(isfull())
    printf("\nQueue is full\n");
    else{
        if(front==-1)
        front=0;
        rear=(rear+ 1)%SIZE;
        items[rear]=element;
        printf("Inserted %d",element);
    }
}
int dequeue(){
    int element;
    if(isempty()){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        element=items[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%SIZE;
        }
        printf("Deleted element is %d\n",element);
        return(element);
    }
    }
    void display(){
        int i;
        if(isempty()){
            printf("Empty Queue\n");
        }
        else{
            printf("Front is %d\n",front);
            printf("Items are");
            for(i=front;i<=rear;i=(i+1)%SIZE){
                printf("%d ",items[i]);
            }
        }
    }
void main()
{
    int choice,x;
    printf("1.Insert\n2.Delete\n3.Display\n0.Exit\n");
    while(1)
    {
printf("\nEnter choice");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {printf("Enter the element ot be inserted:");
            scanf("%d",&x);
            enqueue(x);
            break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
            display();
            break;
            }
            case 0:
            {
                exit(1);
            }
        }
    }  
    }
    
