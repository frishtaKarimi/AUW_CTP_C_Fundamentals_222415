#include <stdio.h>
int main(){int a[5],count=0; for(int i=0;i<5;i++){ scanf("%d",&a[i]); if(a[i]>0) count++; } printf("Positive Numbers Count = %d",count); return 0;}