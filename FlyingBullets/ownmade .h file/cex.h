/*
DEVS: SyefC/BoomPlay
Checking if enemy position is out of control
*/

void chekpy(){
    if(enemyy > 16 || enemyy == 16 || enemyy == 0){
        enemyy = rand() % 18;
    }
}