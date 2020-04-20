#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void test(int *nums,int numsSize)
{
    for(int i=0;i<numsSize;i++)
    {
      for(int j=i+1;j<numsSize;j++)
      {
          int temp;
          if(nums[i]>nums[j])
          {
              temp=nums[i];
              nums[i]=nums[j];
              nums[j]=temp;
          }

      }
    }

}
int lastStoneWeight(int* stones, int stonesSize){
       
    if(stonesSize<=1)
    {
        return stones[0];
    }
        
    else
    {
        
    
    while(stonesSize!=1)
    {
        test(stones,stonesSize);
        if(stones[stonesSize-1]!=stones[stonesSize-2])
        {
            stones[stonesSize-2]=stones[stonesSize-1]-stones[stonesSize-2];
            stonesSize--;
        }
        else
        {
            if(stonesSize==2&&stones[stonesSize-1]==stones[stonesSize-2])
            {
                return 0;
            }
            stonesSize=stonesSize-2;
        }
        
    }
        
    return stones[0];
    }
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

