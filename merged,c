#include<stdio.h>
int main(){
int a1[20],a2[20],a3[20],n,m,i,j,k;
printf("Enter the elements of first array");
scanf("%d",&n);
printf("Enter the elements of array in sorted order\t");
for(i=0;i<n;i++){
  scanf("%d",&a1[i]);}
printf("Enter the elements of  second array \t");
 scanf("%d",&m);
printf("Enter the elements of array in sorted order");
for(j=0;j<m;j++){
  scanf("%d",&a2[j]);}
printf("merged arrays is");
i=j=0;
 for(k=0;k<m+n;k++){
   if((i<n)&&(j<m))
{
 if(a1[i]<a2[j]){
  a3[k]=a1[i];
  i++;
  }
  else
  {
  a3[k]=a2[j];
  j++;
  }
  
}
  else if(i<n)
{
a3[k]=a1[i];
i++;
}
 else{
a3[k]=a2[j];
j++;
 }

}
 for(k=0;k<m+n;k++)
{
printf("%d\t",a3[k]);
}
return 0; }





