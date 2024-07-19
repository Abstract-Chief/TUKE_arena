/*File "karel.c" create by abstract, (2024-07-10)*/
#include "karel.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

enum KarelErrors{
   KAREL_ERROR_FILE_NOT_FOUND = 1,
   KAREL_ERROR_FILE_FORMAT = 2,
   KAREL_ERROR_NO_BEEPERS = 3,
   KAREL_ERROR_FRONT_BLOCKED = 4,
   KAREL_ERROR_NO_BEEPERS_IN_BAG = 5

};

Karel Player;
void parse_karel_world(const char* filename) {
   FILE* file = fopen(filename, "r");
   if (file == NULL) {
      perror("Error opening file");
      exit(KAREL_ERROR_FILE_NOT_FOUND);
   }
   fscanf(file, "%d %d %d %d %c %d\n", &Player.world_width, &Player.world_height, 
      &Player.x, &Player.y, &Player.direction, &Player.beepers);
   Player.x--;
   Player.y--;
   for (int i = 0; i < MAX_WIDTH; i++) {
      for (int j = 0; j < MAX_HEIGHT; j++) {
         memset(&Player.world[i][j], 0, sizeof(struct block));
         if(i==0){
            Player.world[i][j].w = true;
         }else if(i==Player.world_width-1){
            Player.world[i][j].e = true;
         }
         if(j==0){
            Player.world[i][j].s = true;
         }else if(j==Player.world_height-1){
            Player.world[i][j].n = true;
         }
      }
   }
   char type;
   int x, y, beepers_count;
   char direction;
   while (fscanf(file, "%c %d %d", &type, &x, &y) == 3) {
      x--;y--;
      switch (type) {
         case 'B':
            fscanf(file, "%d\n", &beepers_count);
            Player.world[x][y].beepers = beepers_count;
            break;
         case 'W':
            fscanf(file, " %c\n", &direction);
            switch (direction) {
               case 'N':
                  Player.world[x][y].n = true;
                  if(y<Player.world_height-1)
                     Player.world[x][y + 1].s = true;
                  break;
               case 'E':
                  Player.world[x][y].e = true;
                  if(x<Player.world_width-1)
                     Player.world[x+1][y].w = true;
                  break;
               case 'S':
                  Player.world[x][y].s = true;
                  if(y>0)
                     Player.world[x][y - 1].n = true;
                  break;
               case 'W':
                  Player.world[x][y].w = true;
                  if(x>0)
                     Player.world[x-1][y].e = true;
                  break;
               default:
                  break;
            }
            break;
         default:
            break;
      }
   }

   fclose(file);
}

void step() {
   if(front_is_blocked()) exit(KAREL_ERROR_FRONT_BLOCKED);
   switch (Player.direction) {
      case 'N': Player.y++; break;
      case 'E':Player.x++;break;
      case 'S':Player.y--; break;
      case 'W': Player.x--; break;
      default:
         break;
   }

}
void turn_left(){
   switch (Player.direction) {
      case 'N': Player.direction = 'W'; break;
      case 'E': Player.direction = 'N'; break;
      case 'S': Player.direction = 'E'; break;
      case 'W': Player.direction = 'S'; break;
      default:
         break;
   }
}
void pick_beeper(){
   if (Player.world[Player.x][Player.y].beepers > 0) {
      Player.world[Player.x][Player.y].beepers--;
      Player.beepers++;
   }else exit(KAREL_ERROR_NO_BEEPERS);
}
void put_beeper(){
   if (Player.beepers > 0) {
      Player.world[Player.x][Player.y].beepers++;
      Player.beepers--;
   }else exit(KAREL_ERROR_NO_BEEPERS_IN_BAG);
}
void print_walls(){
   const struct block * b=&Player.world[Player.x][Player.y];
   printf("%d %d : %d %d %d %d\n",Player.x,Player.y,b->n,b->e,b->s,b->w);
   printf("  %c\n",(Player.world[Player.x][Player.y].n ? '_' : '*'));
   printf("%c ^ %c\n",(Player.world[Player.x][Player.y].w ? '|' : '*'),(Player.world[Player.x][Player.y].e ? '|' : '*'));
   printf("  %c\n",(Player.world[Player.x][Player.y].s ? '_' : '*'));

}
bool front_is_clear(){
   switch (Player.direction) {
      case 'N': return !Player.world[Player.x][Player.y].n;
      case 'E': return !Player.world[Player.x][Player.y].e;
      case 'S': return !Player.world[Player.x][Player.y].s;
      case 'W': return !Player.world[Player.x][Player.y].w;
      default:
         return false;
   }
}
bool front_is_blocked(){
   return !front_is_clear();
}
bool beepers_present(){
   return Player.world[Player.x][Player.y].beepers > 0;
}
bool facing_north(){
   return Player.direction == 'N';
}
bool facing_south(){
   return Player.direction == 'S';
}
bool facing_east(){
   return Player.direction == 'E';
}
bool facing_west(){
   return Player.direction == 'W';
}
bool not_facing_north(){
   return !facing_north();
}
bool not_facing_south(){
   return !facing_south();
}
bool not_facing_east(){
   return !facing_east();
}
bool not_facing_west(){
   return !facing_west();
}
bool beepers_in_bag(){
   return Player.beepers > 0;
}
bool no_beepers_present(){
   return !beepers_present();
}
bool left_is_clear(){
   turn_left();
   bool result = front_is_clear();
   turn_left();
   turn_left();
   turn_left();
   return result;
}
bool left_is_blocked(){
   return !left_is_clear();
}
bool right_is_clear(){
   turn_left();
   turn_left();
   turn_left();
   bool result = front_is_clear();
   turn_left();
   return result;
}
bool right_is_blocked(){
   return !right_is_clear();
}
bool no_beepers_in_bag(){
   return !beepers_in_bag();
}
void set_step_delay(int delay){
   ;
}

void turn_on( const char* path ){
   parse_karel_world(path);
}
void draw_map() {
   for(int i=Player.world_height-1;i>=0;i--){
      for(int j=0;j<Player.world_width;j++){
         printf("%c%c%c%c ",Player.world[j][i].w ? '|' : '_',Player.world[j][i].n ? '^' : '_',Player.world[j][i].s ? 'v' : '_',Player.world[j][i].e ? '|' : '_');
      }
      printf("\n");
   }
}
void print_berries(){
   int count=0;
   for(int i=Player.world_height-1;i>=0;i--){
      for(int j=0;j<Player.world_width;j++){
         if(Player.world[j][i].beepers>0){
            count++;
            printf("%d %d %d/",j+1,i+1,Player.world[j][i].beepers);
         }
      }
   }
   if(count==0) printf("NULL");
   else printf("end");
}
void turn_off(){
   printf("%d %d %d %c\n", Player.x+1, Player.y+1, Player.beepers, Player.direction);
   print_berries();
   //save position and direction
   exit(EXIT_SUCCESS);
}




