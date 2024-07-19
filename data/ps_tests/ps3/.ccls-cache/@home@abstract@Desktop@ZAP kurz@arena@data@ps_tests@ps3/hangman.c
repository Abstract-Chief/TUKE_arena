#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdbool.h>
#include "hangman.h"
#include<string.h>
#include <ctype.h>
bool check_ch(char ch){
   return ((ch>='a' && ch <='z') || ( ch>='A' && ch<='Z'));
}
int get_word(char secret[]){
    FILE *fp = fopen(WORDLIST_FILENAME, "rb");
    if( fp == NULL ){
        fprintf(stderr, "No such file or directory: %s\n", WORDLIST_FILENAME);
        return 1;
    }
    struct stat st;
    stat(WORDLIST_FILENAME, &st);
    long int size = st.st_size;

    do{
        long int random = (rand() % size) + 1;
        fseek(fp, random, SEEK_SET);
        int result = fscanf(fp, "%*s %20s", secret);
        if( result != EOF )
            break;
    }while(1);
    fclose(fp);
    return 0;
}
bool in_arr(const char *str,char symbol){
   while(*str) if(*str++==symbol) return 1;
   return 0;
}
int is_word_guessed(const char secret[], const char letters_guessed[]){
   if (secret==NULL || letters_guessed==NULL) return 0;
   if ( !strlen(secret) || !strlen(letters_guessed) ) return 0;
   while(*secret) if(!in_arr(letters_guessed,*secret++)) return 0;
   return 1;
}
void get_guessed_word(const char secret[], const char letters_guessed[], char guessed_word[]){
   if(guessed_word==NULL) return;
   *guessed_word=0;
   if (secret==NULL || letters_guessed==NULL) return;
   if ( !strlen(secret) || !strlen(letters_guessed) ) return;
   for(;*secret;secret++,guessed_word++)
      if(!in_arr(letters_guessed,*secret)) *guessed_word='_';
      else *guessed_word=*secret;
   *guessed_word=0;
}
void get_available_letters(const char letters_guessed[], char available_letters[]){
   if (available_letters==NULL || letters_guessed==NULL) return;
   if (!strlen(letters_guessed) ) return;
   memset(available_letters,0,strlen(available_letters));
   for(char ch='a';ch<='z';ch++)
      if(!in_arr(letters_guessed,ch)) *available_letters++=ch;
   *available_letters=0;
   
}
void print_line(){
   printf("-------------\n");
}
void start_message(const char word[]){
   printf("Welcome to the game, Hangman!\n");
   printf("I am thinking of a word that is %d letters long.\n",(int)strlen(word));
}
#define lower(CH) (CH>='A' && CH<='Z' ? CH+'a' : CH)
void hangman(const char secret[]){
   int word_size=strlen(secret);
   char not_used[26],gueses_letter[26],otvet[word_size];
   int gueses=8,count_ch=0;
   memset(otvet,0,sizeof(otvet));
   memset(gueses_letter,0,sizeof(gueses_letter));
   printf("Welcome to the game, Hangman!\n");
   printf("I am thinking of a word that is %d letters long.\n",(int)strlen(secret));
   for(int i=0;gueses!=0;i++){
      printf("-------------\n");
      printf("You have %d guesses left.\n",gueses);
      get_available_letters(gueses_letter,not_used);
      printf("Available letters: %s\n",not_used);
      printf("Please guess a letter: ");
      char input[word_size];
      char buf=0;
      scanf("%s%c",input,&buf);
      char data=tolower(input[0]);
      if(!strcmp(input, secret)){
         printf("Congratulations, you won!\n");
         return; 
      }
      if(!check_ch(data)){
         printf("Oops! '%c' is not a valid letter:",input[0]);
      }else{
         if(in_arr(gueses_letter,data))
            printf("Oops! You've already guessed that letter:");
         else if(in_arr(secret,data))
            printf("Good guess:");
         else{
            printf("Oops! That letter is not in my word:");
            gueses--;
         }
         gueses_letter[count_ch++]=data;
      }
      get_guessed_word(secret,gueses_letter,otvet);
      for(char *arr=otvet;*arr;arr++) printf(" %c",*arr);
      printf("\n");
      if(is_word_guessed(secret,gueses_letter)){
         break;
      }
   }
   printf("-------------\n");
   if(gueses==0){
      printf("Sorry, you ran out of guesses. The word was %s.\n",secret);
   }
   else{
      printf("Congratulations, you won!\n");
   }
}
