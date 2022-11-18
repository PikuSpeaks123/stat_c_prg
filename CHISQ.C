#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//#include<time.h>

void main()
{
  int n,m,i,j;
  float mu,sigma_sq,sigma,x,y,u,z,pi,v[100];
  clrscr();
  printf("\nEnter the parameters mu and sigma : ");
  scanf("%f%f",&mu,&sigma_sq);
  sigma=sqrt(sigma_sq);
  printf("\nEnter the sample size n : ");
  scanf("%d",&n);
  printf("\nEnter the Degrees of Freedom : ");
  scanf("%d",&m);
  //srand(time(NULL));
  randomize();
  pi=(float)22/7;
  for(i=0;i<n;i++)
  {
    z=0.0;
    for(j=0;j<m;j++)
    {
      x=rand()/(float)RAND_MAX;
      y=rand()/(float)RAND_MAX;
      u=sqrt(-2*log(x))*cos(2*pi*y);//Generate random no from N(0,1)
      z=z+pow(u,2);
    }
    v[i]=z;
  }
  printf("\nThe random numbers are : \n");
  for(i=0;i<n;i++)
  {
    printf("%f  ",v[i]);
  }
  getch();
}