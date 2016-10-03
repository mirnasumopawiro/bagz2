//
//  snake.cpp
//  HelloWorld
//
//  Created by Ida Bagus Kerthyayana Manuaba on 14/09/2016.
//  Copyright © 2016 Ida Bagus Kerthyayana Manuaba. All rights reserved.
//

#include "conio.h"
#include <ncurses.h>

#define WORLD_WIDTH 50
#define WORLD_HEIGHT 20

int main(int argc, char *argv[]) {
    
    WINDOW *snakeys_world;
    int offsetx, offsety;
    
    initscr();
    refresh();
    
    offsetx = (COLS - WORLD_WIDTH) / 2;
    offsety = (LINES - WORLD_HEIGHT) / 2;
    
    snakeys_world = newwin(WORLD_HEIGHT,
                           WORLD_WIDTH,
                           offsety,
                           offsetx);
    
    box(snakeys_world, 0 , 0);
    
    wrefresh(snakeys_world);
    
    getch();
    
    delwin(snakeys_world);
    
    endwin();
    
    return 0;
    
}