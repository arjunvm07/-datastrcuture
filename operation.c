#include<stdio.h>
#include<stdlib.h>
int choice,j,i=0,a[50],b[10],s;
void insert();
void delete();
void sort();
void search();
void display();
int menu();
void main()
{
printf("\n Enter the size of array:");
scanf("%d",&s);
printf("\n Enter the elements of array:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
menu();

}
int menu()
{
printf("\n1.insert");
printf("\n2.delete");
printf("\n3.sort");
printf("\n4.search");
printf("\n5.display");
printf("\n6.exit");
printf("\nEnter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:sort();
break;
case 4:search();
break;
case 5:display();
break;
case 6:exit(1);
}
}
void search()
{
int ele,loc;
printf("\nEnter the element to be searched: ");
scanf("%d",&ele);
printf("\nElement found at: ");
for(i=0;i<s;i++)
{
if(ele==a[i])
printf("\n%d",i+1);
}

menu();
}
void sort()
{
printf("\nCurrent array: ");
for(i=0;i<s;i++)
printf("\t%d",a[i]);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
printf("\nsorted array: ");
for(i=0;i<s;i++)
printf("\t%d",a[i]);

menu();
}
void insert()
{
int loc,ele;
printf("\nEnter the location");
scanf("%d",&loc);
printf("\nEnter the element to be inserted: ");
scanf("%d",&ele);
for(i=s;i>loc-1;i--)
a[i]=a[i-1];
a[loc-1]=ele;
printf("\nElement inserted");
printf("\nNew array after insertion");
s++;
for(i=0;i<s;i++)
printf("\t%d",a[i]);

menu();
}
void delete()
{
int loc;
printf("\nenter the location");
scanf("%d",&loc);
for(i=loc-1;i<s-1;i++)
{
a[i]=a[i+1];
}

printf("\nElement deleted");
printf("\nNew array after deletion: ");
s--;
for(i=0;i<s;i++)
printf("\t%d",a[i]);

menu();
}
void display()
{
int i;
if(s==0)
{
printf("\nNo elements to display!");
return;
}
printf("\nArray elements are: ");
for(i=0;i<s;i++)
{
printf("%d\t",a[i]);
}

menu();

}
