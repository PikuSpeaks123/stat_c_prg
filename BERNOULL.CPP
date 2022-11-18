#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<time.h>

void main()
{
  int n,i,x[100];
  float p,u;
  clrscr();
  printf("\nEnter the success prob. : ");
  scanf("%f",&p);
  printf("\nEnter the sample size n : ");
  scanf("%d",&n);
  //srand(time(NULL));
  randomize();
  for(i=0;i<n;i++)
  {
    u=rand()/(float)RAND_MAX;
    if(u<p)
    {
      x[i]=1;
    }else
    {
      x[i]=0;
    }
  }
  printf("\nThe random numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf("%d  ",x[i]);
  }
  getch();
}
