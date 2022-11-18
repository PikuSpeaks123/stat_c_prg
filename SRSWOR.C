#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
  int i,j=0,n,x,p=0,k,a,b,arr[20];
  clrscr();
  randomize();
  printf("Enterthe sample size : \n");
  scanf("%d",&n);
  printf("Enter the lower and upper limit : \n");
  scanf("%d %d",&a,&b);
  printf("The random no.s drawn are : \n");
  while(j<=n)
  {
    x=(floor)(b-a)*(rand()/(float)RAND_MAX)+a;
    k=0;
    for(i=0;i<p;i++)
    {
       if(arr[i]==x)
       {
	 k=1;
       }
    }
    if(k==0)
    {
      arr[p]=x;
      j++;
      p++;
     }
  }
  for(i=0;i<n;i++)
  {
    printf("%d  ",arr[i]);
  }
  getch();
}