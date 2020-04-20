#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int cmp(const void*a,const void*b)
{
  return *(const int *)b-*(const int*)a;

}
int lastStoneWeight(int* stones, int stonesSize){

    
    while(1)
    {   qsort(stones,stonesSize,sizeof(int),cmp);
        int y=stones[0];
        int x=stones[1];
        stones[0]=stones[1]=0;
        if(x==0)
        {
            return y;
        }
        if(y!=x)
        {
           stones[0]=y-x;
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

