#include "morse.h"
#include<stdio.h>

int main(int argc,char **argv){
   if(argc<2){
      printf("Usage: %s <text>\n",argv[0]);
      return 1;
   }
   if (is_morse_code_valid(argv[1]))
      printf("Code is valid!\n");
   else
      printf("Code is invalid!\n");
}
