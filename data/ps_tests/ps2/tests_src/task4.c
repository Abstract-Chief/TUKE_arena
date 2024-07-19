#include "arrays.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc!=2){
      printf("Usage: %s <a>\n",argv[0]);
      return 1;
   }
   int a;
   sscanf(argv[1],"%d",&a);
   printf("%d\n", euler(a));
}
