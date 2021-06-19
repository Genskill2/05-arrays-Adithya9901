/* Enter your solutions in this file */
#include <stdio.h>


float average(int z[],int n)
{  float avg;
 float sum=0;
 for(int i=0;i<n;i++)
 { sum+=z[i];
 }
 avg=(float)sum/n;
 return avg;
}

int factors( int n, int x[])
{  int t=0;
 int k=n;
 
 for(int i=2;i<n;i++)
 { if(k%i==0)
 {k=k/i;
  x[t]=i;
  t++;
  i=1;
 }
 } return t;
}

int max(int x[],int n)
{ int max1=x[0];
 
 for (int i=1;i<n;i++)
 { if(x[i]>max1)
 { max1=x[i];
 }
 }
 return max1;
}

int min(int z[],int n)
{ int min1 =z[0];
 
 for (int i=1;i<n;i++)
 { if(z[i]<min1)
 { min1=z[i];
 }
 }
 return min1;
}


int mode(int z[], int n)
{ int t[]={0,1,2,3,4,5,6,7,8,9,10,11};
  
 for(int k=0;k<12;k++)
 {  int s=0;
  for(int i=0;i<n;i++)
  { 
    if(z[i]==t[k])
    { s+=1;
    }
  }
  t[k]=s;
 }
 int max1=t[0];
 int u;
 for (int i=1;i<12;i++)
 { if(t[i]>max1)
 { max1=t[i];
  u=i;
 }
 }
 return u;
}
