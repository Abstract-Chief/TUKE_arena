#include "morse.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc<2){
      printf("Usage: %s <text>\n",argv[0]);
      return 1;
   }
   char output[150];
   text_to_morse(argv[1], output);
   printf("%s\n",output);
}
