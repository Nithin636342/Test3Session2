#include<stdio.h>
int input_n_and_r(int *n,int *r)
{
  printf("Enter the value of n: ");
  scanf("%d",n);
  printf("Enter the value of r :");
  scanf("%d",r);
}
int ncr(int n,int r)
{
  int nfact=1,rfact=1,nrfact=1,ncr;     //nrfact is for (n-r)!
  for(int i=1;i<=n;i++)
    {
      nfact*=i;
    }
  for(int j=1;j<=r;j++)
    {
      rfact*=j;
    }
  for(int k=1;k<=(n-r);k++)
    {
      nrfact*=k;
    }
  ncr=nfact/(rfact*nrfact);
  return ncr;
}
void output(int n,int r,int result)
{
  printf("The factorial of %d and %d is %d",n,r,result);
}
int main()
{
  int a,b,result;
  input_n_and_r(&a,&b);
  result=ncr(a,b);
  output(a,b,result);
  return 0;
}