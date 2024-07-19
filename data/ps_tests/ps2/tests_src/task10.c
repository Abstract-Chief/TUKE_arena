#include "arrays.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc!=2){
      printf("Usage: %s <a>\n",argv[0]);
      return 1;
   }
   int a;
   sscanf(argv[1],"%d",&a);
   int heights[3];
   podium(a, heights);
   for(int i = 0; i < 3; i++){
       printf("%d", heights[i]);
       if( i!=2) printf(" ");
   }
}
