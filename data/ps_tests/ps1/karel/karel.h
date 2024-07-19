#ifndef KAREL_H
#define KAREL_H
#include<stdbool.h>

#define MAX_WIDTH 20
#define MAX_HEIGHT 20
struct block{
   int beepers;
   bool n,e,s,w;
};
typedef struct Karel {
   int x,y;
   int beepers;
   char direction; // Направление (N, E, S, W)
   int world_width,world_height;
   struct block world[MAX_WIDTH][MAX_HEIGHT];
} Karel;
extern Karel Player;
void draw_map();
void print_walls();

// Basic Karel functions
void step();
void turn_left();
void pick_beeper();
void put_beeper();
void turn_on(const char* path);
void turn_off();

// Sensors
bool front_is_clear();
bool beepers_present();
bool facing_north();
bool beepers_in_bag();

// Super Karel functions (extension)
void set_step_delay(int);
bool front_is_blocked();
bool left_is_clear();
bool left_is_blocked();
bool right_is_clear();
bool right_is_blocked();
bool no_beepers_present();
bool not_facing_north();
bool facing_south();
bool not_facing_south();
bool facing_east();
bool not_facing_east();
bool facing_west();
bool not_facing_west();
bool no_beepers_in_bag();

#endif /* KAREL_H */

