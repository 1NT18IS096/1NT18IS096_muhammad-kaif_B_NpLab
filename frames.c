//1nt18is096
//Muhammad kaif
//enter the number of frames and at the reciver side the frames shoul display the size and each frames.
#include<stdio.h>
int main()
{
int n;
printf("\n enter no of frames to be transmitted");
scanf("%d",&n);
long int fr[n];
int i;
for(i=0;i<n;i++)
scanf("%ld",&fr[i]);
int j=0;
int k,r;
int m=0;
while(j<n)
{
k=fr[j];
while(k>0)
{
k=k/10;
m++;
}
printf("\n size of frame : %d",m);
m=0;
j++;
}
printf("\n frames recieved are:");
for(i=0;i<n;i++)
printf("%ld\n",fr[i]);
return 0;
}
