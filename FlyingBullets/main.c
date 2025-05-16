/*
DEVS: SyefC/BoomPlay


!ALL STARTS HERE!

LIB USES:
#include <stdio.h>   
#include <unistd.h>  
#include <stdlib.h>  
#include <conio.h>   
#include <windows.h> 
#include <time.h>    

OWN MADE LIB USES: 
#include "map.h"
#include "cls.h"
#include "cex.h"
#include "cey.h"

Languages: C
Compiler: GCC (MinGW 32-BIT but uses a 64-BIT computer)
Code Editor: Vim & VsCode
Source Code: GitHub
*/



#include <stdio.h>   ///lib
#include <unistd.h>  ///lib
#include <stdlib.h>  ///lib
#include <conio.h>   ///lib
#include <windows.h> ///lib
#include <time.h>    ///lib


char map[10][20] = {
    "                    ",
    "                    ",
    "                    ",
    "                    ",
    "                    ",
    "                    ", //////// MAP (printing map is availble in the .h file which is map.h)
    "                    ",
    "                    ",
    "                    ",
    "                    "};

    /////////////////////
int points = 0;//////////
int playerx = 0;////////////
int playery = 0;////////
int bulletp = 1;/////              :VARIABLES: DONT DELETE!!!
int bulletpx = 0;//////////
int enemyx = 0;///////////
int enemyy = 0;/////////
char c = '?';////////
/////////////////////

//////////////////
#include "map.h"//        :OWN LIBRALIES:
#include "cls.h"//        :OWN LIBRALIES:
#include "cex.h"//        :OWN LIBRALIES:
#include "cey.h"//        :OWN LIBRALIES:
//////////////////

 int main(){
    cls();
    srand(time(NULL));
    enemyx = rand() % 9;
    chekpx();
    enemyy = rand() % 20;
    chekpy();
     map[enemyx][enemyy] = 'E';
    while(1){
   if(kbhit()){
    c = getch();
    if(c == 'd'){
        if(playerx < 9){
    map[playerx][playery] = ' ';
    bulletpx++;
    playerx++;
     map[playerx][playery] = 'Y';
        }
    }
     else if(c == 'a'){
        if(playerx > 0){
    map[playerx][playery] = ' ';
    bulletpx--;
    playerx--;
     map[playerx][playery] = 'Y';
        }
    }
    else if(c == ' '){
        while(bulletp < 19){
            map[bulletpx][bulletp] = ' ';
            bulletp++;
            map[bulletpx][bulletp] = '-'; 
if(bulletpx == enemyx && bulletp == enemyy){
    map[bulletpx][bulletp] = ' ';
    map[bulletpx][bulletp + 1] = ' ';
     enemyx = rand() % 9;
     chekpx();
    enemyy = rand() % 20;
    chekpy();
     map[enemyx][enemyy] = 'E';
         points++;
        bulletp = 1;
        break;
}
else if(bulletp == 19){
        map[bulletpx][bulletp] = ' ';
    map[bulletpx][bulletp + 1] = ' ';
     bulletp = 1;
        break;
}
    if(c == '?'){
      printf("INPUT: 'NONE'\n\n",c);
   }
   else if(c == ' ' || c == 'a' || c == 'd'){
    printf("INPUT: '%c'\n\n",c);
   }
   else {
    printf("INPUT: '%c' (Unknown Key)\n\n",c);
   }
    printf("POINTS: %d\n\n",points);
    printf("-----------------------------------------------\n");
              showmap();
              printf("-----------------------------------------------\n");
              printf("reloading...\n");
    Sleep(100);
   cls();
        }
    }
    else{
        cls();
        printf("\n\n   GAME PAUSED FOR 2 SECONDS\n\n"); 
        printf("\033[32m\n\n   PRESS 'A' OR 'D' TO MOVE UP AND DOWN!\033[0m");
        Sleep(2000);
    }
   }
   if(c == '?'){
      printf("INPUT: 'NONE'\n\n",c);
   }
   else if(c == ' ' || c == 'a' || c == 'd'){
    printf("INPUT: '%c'\n\n",c);
   }
   else {
    printf("INPUT: '%c' (Unknown Key)\n\n",c);
   }
   printf("POINTS: %d\n\n",points);
printf("-----------------------------------------------\n");
  showmap();
printf("-----------------------------------------------\n");
  Sleep(150);
  cls();
    }
}