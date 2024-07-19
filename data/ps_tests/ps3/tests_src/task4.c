#include"hangman.h"
#include <stdio.h>

int main(int argc,char **argv){
   if(argc<2){
      printf("Usage: %s <secret>\n",argv[0]);
      return 1;
   }
   char *secret=argv[1];
   hangman(secret);
}
