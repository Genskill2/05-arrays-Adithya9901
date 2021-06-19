/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>

float average(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x,7) - 4.7142) < 0.001);
  
  int y[] = {5};
  assert (average(y , 1) == 5.0);
  printf("Average: passed\n");
}

float average(int z[],int n)
{  float avg;
 float sum=0;
 for(int i=0;i<n;i++)
 { sum+=z[i];
 }
 avg=(float)sum/n;
 return avg;
}

int factors( int, int[]);

int main(void) {
  int ret[100] ={0};
  int count = factors(180, ret);
  assert (count == 5);
  assert ( ret[0] == 2);
  assert ( ret[1] == 2);
  assert ( ret[2] == 3);
  assert ( ret[3] == 3);
  assert ( ret[4] == 5);
  
  count = factors(143, ret);
  assert (count == 2);
  assert ( ret[0] == 11);
  assert ( ret[1] == 13);
  printf("Factors: passed\n");
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
 }return t;}

int max( int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x,7)==10);
  
  int y[] = {5};
  assert ( max(y,1)==5);
  printf("Max: passed\n");
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

int min(int[], int);

int main(void) {
  int x[] ={9,5,6,10,2,-3,4};
  assert (min(x,7)==-3);
  
  int y[]={5};
  assert (min(y,1)==5);
  printf("Min: passed\n");
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

int mode(int[],int);

int main(void) {
  int x[] = {4,9,5,6,5,10,0,2,-3,-3,4,4};
  assert ((mode(x,12)==4));
  
  int y[] = {5};
  assert (mode(y,1) == 5);
  printf("Mode: passed\n");
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
