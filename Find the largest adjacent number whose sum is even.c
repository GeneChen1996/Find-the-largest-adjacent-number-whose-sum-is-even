#include<stdio.h>

int main(void)
{
    printf("");
    int a[] = {3, 16, 4, 6, 9, 3 ,3 ,3 , 7 ,2 ,3 ,3 ,3};   
    int count=0;
    int len = sizeof(a)/4;
    int ans = 0;
    ans = fun(a,len);
    printf("%d",ans);
    return 0;
}

int fun(int *a, int len)
{
    int count=0;
    for(int i = 0;i<len;i++)
    {

        if(i == len-1)
         {
            if ((a[i] + a[0])%2 ==0 & (a[0]+a[1])%2 !=0)
            {
                count+= 1;
            }
         }
    
        else if((a[i] + a[i+1]) %2 == 0)
        {
            count+= 1;
            i += 1;
        }
    }
    printf("%d\n",count);
    return count;
}