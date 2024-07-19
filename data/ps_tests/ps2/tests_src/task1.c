#include "arrays.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc!=4){
      printf("Usage: %s <length> <human_weight> <car_weight>\n",argv[0]);
      return 1;
   }
   int length, human_weight, car_weight;
   sscanf(argv[1],"%d",&length);
   sscanf(argv[2],"%d",&human_weight);
   sscanf(argv[3],"%d",&car_weight);
   printf("%.4f\n", lift_a_car(length,human_weight, car_weight));
}
