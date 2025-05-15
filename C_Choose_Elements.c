#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[1000];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }  
    long long sum = 0;
      for(int i = 0; i < x; i++){
          sum = sum + arr[i];
     }
     printf("%lld", sum);
   return 0;
}