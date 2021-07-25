#include<stdio.h>
//author -> Ankush chhabra
//program to find square root of the number upto p decimal places using binary search
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int l=0,r=n;
    double ans;
    //finding the integer value whose square is less than or equal to n using binary search
    while(l<=r)
    {
      int mid=(l+r)/2;
      if(mid*mid==n)
      {
        ans=mid;
        break;
      }
      if(mid*mid>n)
      {
        r=mid-1;
      }
      else
      {
        ans=mid;
        l=mid+1;
      }
     }
     double temp=0.1;
     //finding p decimal places from j=1,2,3,4.....p one by one for each decimal value
     for(int j=1;j<=p;j++)
     {
      double ans1=ans;
      for(int i=0;i<=9;i++)
      {
        double tempans=temp*i;
        double num=tempans+ans1;
        if(num*num<=n)
        {
         ans=num;
        }
        else
        {
          break;
        }
      }
      temp/=10;
    }
     printf("%0.15g",ans);
}

