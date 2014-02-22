#include <iostream>
#include <ctime>
#include <stack>
using namespace std;

//Initialize the map
/*8x8 Array*/
int arr[8][8];
/* Create a gamepiece and move Counter and game piece on (0,0) */
int Knight = 0;
int curX;
int currY;
int moveCounter;


void initMap(){
/*Initialize map with blocks == -1, then place knight at (0,0)*/
    int i;
    int j;
    for(int i = 0; i <=8; i++){
        for(j = 0; j <=8 - 1; j++){
            arr[i][j] = -1;
        }
    }
    curX = 0;
    currY = 0;
    moveCounter = 0;
    arr[curX][currY] = {0};
}

void printMap() {
    cout << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - -";
    cout << endl;
    for(int i = 0; i < 8; i++){
        cout <<"| ";
        for(int j = 0; j < 8; j++){
            cout << arr[i][j]<< " | ";
        }
        cout << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - -";
            cout << endl;
    }
}

void moveKnight(){
/*Function to make a move*/
/*Find element, change to 0, increment counter*/
/*Before leaving a block, redefine it to moveCounter*/
    cout << "Current Position is (";
    cout << curX << ","<< currY <<")";
    cout << endl;
    cout << "Current Move Counter is: " << moveCounter;
    cout << endl;

    /*One possible move
    int nextX = curX +1;
    int nextY = currY +2;
    cout << "Next move is ("<<nextX<<","<<nextY<<")";
    arr[nextX][nextY]={0};
    arr[curX][currY]={1};
    curX = nextX;
    currY = nextY;*/

    /*Array of possible moves*/

    int xMove[]={-2,-1,1,2,2,1,-1,-2};
    int yMove[]={1,2,2,1,-1,-2,-2,-1};
    cout << "The next possible moves are: ";
    cout << endl;
    /*Take curX + i th xMove member, and currY + i th yMove member*/
    for(int i=0; i<=8; i++){
        /*Check for out of bounds*/
        /*Coordinate is <0 or >7*/
        if (curX + xMove[i]>0 && curX + xMove[i]<8) {
            if (currY +yMove[i]>0 && currY +yMove[i]<8){
                int thisMoveX[8];
                int thisMoveY[8];
                thisMoveX[i]= curX + xMove[i];
                thisMoveY[i]= currY +yMove[i];
                /*Check that square isn't visited already*/
                    if (arr[thisMoveX[i]][thisMoveY[i]]==-1){
                        /*Find next moves*/
                        /*Pair off thisMove[i] with xMove[] and yMove[]*/
                        cout << "("<<thisMoveX[i]<<","<<thisMoveY[i]<<") ==>";
                    /*Choose the next move with the shortest path*/
                    /*Define new curX & currY*/
                    /*Change arr[curX][currY]={0}*/
                    /*Increment counter*/

                        cout << endl;
                    }

                    /*Find next moves

                    /* Check number of moves from each legal next move*/

                    /*Choose move with least number of following moves */
                }
            }
        }
    cout << endl;
}

int main(){
cout << "I am Sir Galvatin, Knight of Arthur, King of the Britons.";
cout << endl;
cout << "I have made ";
cout << moveCounter;
cout << " moves.";
cout << endl;
initMap();
printMap();
cout << endl;
moveKnight();
cout << endl;
}
