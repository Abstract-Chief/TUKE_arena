#include<stdio.h>
#include<string.h>
#include"hangman.h"

int main(int argc,char **argv){
   if(argc!=2){
      printf("Usage: %s <a>\n",argv[0]);
      return 1;
   }
   if (!strcmp(argv[1],"NULL"))
      argv[1]=NULL;
   else if (!strcmp(argv[1],"null"))
      argv[1]="";
   char result[30];
   get_available_letters(argv[1],result);
   if (result[0] == '\0')
      printf("NULL\n");
   else
      printf("%s\n",result);
}
