#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int*stones,int stonesSize)
{
    int max_i=0;
    for(int i=0;i<stonesSize;i++)
    {
        if(stones[i]>stones[max_i])
        {
            max_i=i;
        }
    }
    int max=stones[max_i];
    stones[max_i]=0;
    return max;
}
void  insert(int*stones,int stonesSize,int val)
{
    for(int i=0;i<stonesSize;i++)
    {
        if(stones[i]==0)
        {
            stones[i]=val;
            return;
        }
        
    }
    
    
}
int lastStoneWeight(int* stones, int stonesSize){

    
    while(1)
    {
        int y=max(stones,stonesSize);
        int x=max(stones,stonesSize);
        if(x==0)
        {
            return y;
        }
        if(y!=x)
        {
            insert(stones,stonesSize,y-x);
        }
    }
    
    return 0;
}


int main(void) {

clock_t start,finish;

  int a[6]={2,7,4,7,8,1};
  start=clock();
 int c= lastStoneWeight(a,6);
 finish=clock();
 printf("%d\n",c);
 
 double T;
 T=(double)(finish-start)/CLOCKS_PER_SEC;
 printf("%lf",T);
  

 // printf("Hello World\n");
  return 0;
}
