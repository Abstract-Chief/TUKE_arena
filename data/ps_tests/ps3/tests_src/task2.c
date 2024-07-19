#include<stdio.h>
#include<string.h>
#include"hangman.h"

int main(int argc,char **argv){
   if(argc!=3){
      printf("Usage: %s <a> <b>\n",argv[0]);
      return 1;
   }
   if (!strcmp(argv[1],"null"))
      argv[1]="";
   else if (!strcmp(argv[1],"NULL"))
      argv[1]=NULL;
   if (!strcmp(argv[2],"null"))
      argv[2]="";
   else if (!strcmp(argv[2],"NULL"))
      argv[2]=NULL;

   char result[30];
   get_guessed_word(argv[1],argv[2], result);
   if (result[0] == '\0')
      printf("NULL\n");
   else
      printf("%s\n",result);
}