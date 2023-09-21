#pragma once

#define COL    GetStdHandle(STD_OUTPUT_HANDLE)

#define BLACK    SetConsoleTextAttribute(COL, 0x0000)        
#define DARK_BLUE  SetConsoleTextAttribute(COL, 0x0001)      
#define GREEN    SetConsoleTextAttribute(COL, 0x0002)        
#define BLUE_GREEN           SetConsoleTextAttribute(COL, 0x0003)        
#define BLOOD                SetConsoleTextAttribute(COL, 0x0004)        
#define PURPLE               SetConsoleTextAttribute(COL, 0x0005)        
#define GOLD                 SetConsoleTextAttribute(COL, 0x0006)        
#define ORIGINAL             SetConsoleTextAttribute(COL, 0x0007)        
#define GRAY                 SetConsoleTextAttribute(COL, 0x0008)        
#define BLUE                 SetConsoleTextAttribute(COL, 0x0009)       
#define HIGH_GREEN			     SetConsoleTextAttribute(COL, 0x000a)        
#define SKY_BLUE			       SetConsoleTextAttribute(COL, 0x000b)        
#define RED                  SetConsoleTextAttribute(COL, 0x000c)       
#define PLUM                 SetConsoleTextAttribute(COL, 0x000d)        
#define YELLOW               SetConsoleTextAttribute(COL, 0x000e)        
#define WHITE                SetConsoleTextAttribute(COL, 0x000f)

#define WINDOW_SIZE			 "mode con: cols=95 lines=30"

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

