#include <stdio.h>
#define max 5;
int queue[max];
int front=-1;
int rear=-1;
void enqueue(){
    int x;
    if((rear+1)%max==front){
        printf("queue overflow");
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else{
        printf("enter value of x:");
        scanf("%d",&x);
        rear=(rear+1)%max;
        queue[rear]=x;
        printf("%d\n",x);
    }
    
}
void dequeue(){

    if(front==-1){
        printf("queue is empty");
    }
    printf("%d\n",queue[front]);
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=(front + 1)%max;
    }
}
void frontElement(){
    if(front==-1){
        printf("queue is empty\n");
    }
    else{
        int i=front;
    }
}
void display(){
    if(front==-1){
        printf("queue is empty\n");
    }
    else{
        for(int i=front;i<=5;i++){
            printf("%d",queue[i]);
        }
    }
}
int main(){
    int choice;
    do{
        printf("1. for enqueue \n");
        printf("2. for dequeue \n");
        printf("3. for front \n");
        printf("4. for display \n");
        printf("5. for exit \n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                frontElement();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("program ended\n");
                break;
            default:
                printf("invalid choice\n");
        }
    }while(choice!=6);
    return 0;
}
