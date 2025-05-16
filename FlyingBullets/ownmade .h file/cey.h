/*
DEVS: SyefC/BoomPlay
Checking if enemy position is out of control
*/

void chekpx(){
    if(enemyx == 8 || enemyx > 8){
        enemyx = rand() % 7;
    }
}