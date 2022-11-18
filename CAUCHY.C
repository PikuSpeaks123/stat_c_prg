#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//#include<time.h>

void main()
{
  int n,i;
  float mu,sigma,x,y,u[20],v[20],z[20],pi;
  clrscr();
  printf("\nEnter the parameters mu and sigma : ");
  scanf("%f%f",&mu,&sigma);
  printf("\nEnter the sample size n : ");
  scanf("%d",&n);
  //srand(time(NULL));
  randomize();
  pi=(float)22/7;
  for(i=0;i<n;i++)
  {
      x=rand()/(float)RAND_MAX;
      y=rand()/(float)RAND_MAX;
      u[i]=sqrt(-2*log(x))*cos(2*pi*y);
      v[i]=sqrt(-2*log(x))*sin(2*pi*y);
      z[i]=u[i]/fabs(v[i]);
  }
  printf("\nThe random numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf("%f  ",v[i]);
  }
  getch();
}