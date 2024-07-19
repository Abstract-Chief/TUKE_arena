#include "arrays.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc<2){
      printf("Usage: %s <n_args>\n",argv[0]);
      return 1;
   }
   int data[argc-1];
   for(int i=1;i<argc;i++){
      sscanf(argv[i],"%d",&data[i-1]);
   }
   printf("%d\n", array_max(data,argc-1));
}
