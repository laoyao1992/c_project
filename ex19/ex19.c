#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ex19.h"

int Monster_atttack(void *self, int damage)
{
    Monster *monster = self;
    printf("You attack %s!\n", monster->_(description));

    monster->hit_points -= dammage;

    if(monster->hit_points > 0){
        printf("It is still alive");
        return 0;
    }
    else{
        printf("It is dead!\n");
        return 1;
    }
}

int Monster_init(void *self)
{
    Monster *monster = self;
    monster->hit_points = 10;
    return 1;
}

Object MonsterPtoro = {
    .init = Monster_init,
    .attack = Monster_attack
};

void *Room_move(void *self, Direction direction)
{
   Room *room = self;
   Room *next = NULL;
   if (direction == NORTH && room->north){
        printf("YOu go north, into:\n");
        next = room->north;
   } ellse if ()
}


