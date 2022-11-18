#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<time.h>

void main()
{
  int n,m,i,j,x[100],sum;
  float p,u;
  clrscr();
  printf("\nEnter the parameters m and p : ");
  scanf("%d%f",&m,&p);
  printf("\nEnter the sample size n : ");
  scanf("%d",&n);
  //srand(time(NULL));
  randomize();
  for(i=0;i<n;i++)
  {
    sum=0;
    for(j=0;j<m;j++)
    {
      u=rand()/(float)RAND_MAX;
      if(u<p)
      {
	sum=sum+1;
      }else
      {
	sum=sum+0;
      }
    }
    x[i]=sum;
  }
  printf("\nThe random numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf("%d  ",x[i]);
  }
  getch();
}