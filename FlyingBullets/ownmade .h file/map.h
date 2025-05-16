/*
DEVS: SyefC/BoomPlay
Mostly Important: "printing the map".
*/

int x;
int y;

#define GREEN "\033[32m"
#define WHITE "\033[0m"

void showmap(){
for(x=0; x<10;x++){
    for(y = 0; y < 20; y++){
        if(playerx == x && playery == y){
            printf("%s%s",GREEN,WHITE);
        }
        printf(" %c",map[x][y]);
    }
    printf("\n");
}
}