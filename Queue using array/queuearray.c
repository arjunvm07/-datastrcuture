#include<stdio.h>
#include<stdlib.h>

void enqueue(), dequeue(), peek(), display();

int queue[50], n, front = -1, rear = -1, choice, item;

int main()
{
	printf("Enter the size of the queue:");
	scanf("%d", &n);
	printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
	do
	{
		
		printf("\nEnter your choice:");
		scanf("%d", &choice);
		
		switch (choice)
		{
		case 1:
			enqueue();
			//display();
			break;
		case 2:
			dequeue();
			//display();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			exit(1);
		default:
			printf("Invalid choice. Please enter a valid option.\n");
		}
		
	} while (choice != 5);
	
	return 0;
}

void enqueue()
{
	if (rear != n - 1)
	{
		printf("Enter the element to be inserted:");
		scanf("%d", &item);
		if (front == -1)
		{
			front = 0;
		}
		rear = rear + 1;
		queue[rear] = item;
		printf("Element inserted successfully\n");
	}
	else
	{
		printf("Queue is full, can't insert data\n");
	}
}

void dequeue()
{
	if (front == -1 || front > rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleted:\t%d\n", queue[front]);
		if (front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front = front + 1;
		}
	}
}

void display()
{
	int i = 0;
	if (rear == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Elements are:");
		for (i = front; i <= rear; i++)
		{
			printf("%d\t", queue[i]);
		}
		printf("\n");
	}
}

void peek()
{
	if (front == -1)
	{
		printf("No element in queue\n");
	}
	else
	{
		printf("Peek element: %d\n", queue[front]);
	}
}
