#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

typedef struct node nodel;
nodel *start = NULL;

nodel *create();
void display();
void in_b();
void in_e();
void in_bw();
void del_b();
void del_e();
void del_bw();

int main() {
    int x;
    printf("Singly linked list\n");
    printf("MENU\n");
    printf("1.Display\t2.Insertion at beginning\t 3.Insertion at end \t4.Insertion in between\n");
    printf("5.Deletion at beginning \t6.Deletion at end\t7.Deletion in between \t8.Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &x);
        switch (x) {
            case 1:
                display();
                break;
            case 2:
                in_b();
                break;
            case 3:
                in_e();
                break;
            case 4:
                in_bw();
                break;
            case 5:
                del_b();
                break;
            case 6:
                del_e();
                break;
            case 7:
                del_bw();
                break;
            case 8:
                exit(0);
        }
    }
}

nodel *create() {
    nodel *nptr = (nodel *)malloc(sizeof(nodel));
    if (nptr == NULL) {
        printf("Memory Overflow");
        exit(1);
    } else {
        return nptr;
    }
}

void display() {
    nodel *ptr = start;
    printf("\nElements in the linked list are:");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void in_b() {
    int val;
    nodel *nptr = create();
    printf("Enter the element to be inserted: ");
    scanf("%d", &val);
    nptr->data = val;
    nptr->link = NULL;
    if (start == NULL) {
        start = nptr;
    } else {
        nptr->link = start;
        start = nptr;
    }
}

void in_e() {
    int val;
    nodel *nptr = create(), *temp;
    printf("Enter the element to be inserted: ");
    scanf("%d", &val);
    nptr->data = val;
    nptr->link = NULL;
    temp = start;
    if (temp == NULL) {
        start = nptr;
    } else {
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = nptr;
    }
}

void in_bw() {
    int val, pos, i;
    nodel *temp, *ptr = create();
    printf("Enter the element and position to be inserted: ");
    scanf("%d %d", &val, &pos);
    ptr->data = val;
    ptr->link = NULL;
    temp = start;
    if (pos == 1) {
        ptr->link = start;
        start = ptr;
    } else {
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->link;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        ptr->link = temp->link;
        temp->link = ptr;
    }
}

void del_b() {
    nodel *temp;
    if (start == NULL) {
        printf("List is empty!\n");
    } else {
        temp = start;
        start = start->link;
        free(temp);
    }
}

void del_e() {
    nodel *temp, *prev;
    temp = start;
    if (start == NULL) {
        printf("List is empty!\n");
        return;
    }
    while (temp->link != NULL) {
        prev = temp;
        temp = temp->link;
    }
    if (temp == start) {
        start = NULL;
    } else {
        prev->link = NULL;
    }
    free(temp);
}

void del_bw() {
    nodel *temp, *pre;
    int i, pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    temp = start;
    if (pos == 1) {
        if (start == NULL) {
            printf("List is empty!\n");
            return;
        }
        start = start->link;
    } else {
        for (i = 1; i < pos && temp != NULL; i++) {
            pre = temp;
            temp = temp->link;
        }
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        pre->link = temp->link;
    }
    free(temp);
}
