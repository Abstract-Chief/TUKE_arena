#include "arrays.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc!=4){
      printf("Usage: %s <a> <b> <c>\n",argv[0]);
      return 1;
   }
   float a;
   int  b, c;
   sscanf(argv[1],"%f",&a);
   sscanf(argv[2],"%d",&b);
   sscanf(argv[3],"%d",&c);
   printf("%.4f\n", unit_price(a,b, c));
}
