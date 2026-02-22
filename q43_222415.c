#include <stdio.h>
int main(){char name[3][20]; printf("Names:\n"); for(int i=0;i<3;i++) scanf("%s",name[i]); for(int i=0;i<3;i++) printf("%s\n",name[i]); return 0;}