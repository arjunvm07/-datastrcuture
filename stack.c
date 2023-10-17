stack.c

#include <stdio.h>
#include <stdlib.h>
int n,choice,stack[50],top=-1;
void display(),push(),pop(),peek(),menu();
int main() {
    printf("Enter the no of elements:");
    scanf("%d",&n);
    menu();
    return 0;
}
void menu(){
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:peek();
            break;
        case 4:display();
            break;
        case 5:exit(1);
    }
}
void display()
{
    int i=0;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The stack elements are:");
        for(i=top;i>=0;i--){
            printf("\t%d",stack[i]);
        }
    }
    menu();
}
void push(int ele)
{
    if(top!=n-1)
    {
        printf("Enter the item to be inserted:");
        scanf("%d",&ele);
        top=top+1;
        stack[top]=ele;
        printf("Inserted successfully\n");
    }
    else
    {
        printf("Can't insert, stack is full!!\n");
    }
    menu();
}
void pop(){
    int ele;
    if(top==-1){
        printf("Couldn't retrieve data, stack is empty!!\n");
    }
    else
    {
        ele=stack[top];
        printf("Deleted:%d",ele);
        top=top-1;
    }
    menu();
}
void peek()
{
    if(top==-1){
        printf("No element in the stack");
    }
    else
    {
        printf("The top most element of the stack is:\t%d\n",stack[top]);
    }
    menu();
}
