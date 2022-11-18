#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//#include<time.h>

void main()
{
  int n,i;
  float mu,sigma_sq,sigma,x,y,u[20],v[20],pi;
  clrscr();
  printf("\nEnter the parameters mu and sigma : ");
  scanf("%f%f",&mu,&sigma_sq);
  sigma=sqrt(sigma_sq);
  printf("\nEnter the sample size n : ");
  scanf("%d",&n);
  //srand(time(NULL));
  randomize();
  pi=(float)22/7;
  for(i=0;i<n;i++)
  {
      x=rand()/(float)RAND_MAX;
      y=rand()/(float)RAND_MAX;
      u[i]=sqrt(-2*log(x))*cos(2*pi*y);//Generate random no from N(0,1)
      v[i]=sigma*u[i]+mu;//Generate random no. from N(mu,sigma_sq)
  }
  printf("\nThe random numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf("%f %f \n",u[i],v[i]);
  }
  getch();
}