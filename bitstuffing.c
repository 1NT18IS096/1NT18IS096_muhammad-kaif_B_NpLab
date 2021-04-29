\\1NT18IS096
\\Muhammad Kaig
\\c program for stuffing and unstuffing (bit wise).
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int a[20],b[30],i,j,k,count,n;
 printf("enter frame length:");
 scanf("%d",&n);
 printf("enter input frame(0's&1'sonly):\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\n orginal frame:");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
 printf("\n");
 sender(n,a);
 receiver(n,a);

}
void sender(int n,int a[20])
 {
     int i,count,j;
     int b[20];
     int k;
     i=0;count=1;j=0;
 while(i<n)
 {
 if(a[i]==1)
 {
 b[j]=a[i];
for(k=i+1;a[k]==1&&k<n&&count<5;k++)
 {
 j++;
 b[j]=a[k];
 count++;
 if(count==5)
 {
 j++;
 b[j]=0;
 }
 i=k;
 }
 }
 else
 {
 b[j]=a[i];
 }
 i++;
 j++;
 }
 printf(" After stuffing the frame is(at the sender side):");
 for(i=0;i<j;i++)
printf("%d",b[i]);
}
void receiver(int n,int a[20])
{
int i;    
printf("\n after unsstuffing the frame:");
for(i=0;i<n;i++)
printf("%d",a[i]);
}    
