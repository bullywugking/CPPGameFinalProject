//Gary Wall
//C++ professor Jeffrey Howard
// Final Project
//Created 12/17/19

#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "enemy.h"
#include "time.h"
using namespace std;

int main() {
    int width= 10;
    int height = 7;
    bool winLoss;
    int enemy1Row,enemy2Row,enemy3Row,enemy1Col,enemy2Col,enemy3Col;
    vector<vector<int> > gameBoard(height , vector<int> (width));
    srand(time(0));
    enemy1Row =  1;
    enemy2Row = rand() % 2 + 2;
    enemy3Row=rand() % 2 + 4;
    enemy1Col=rand() % 8 + 1;
    enemy2Col=rand() % 8 + 1;
    enemy3Col=rand() % 8 + 1;

    gameBoard[enemy1Row][enemy1Col] = 3;
    gameBoard[enemy2Row][enemy2Col] = 3;
    gameBoard[enemy3Row][enemy3Col] = 3;
    gameBoard[3][4] = 3;
    gameBoard[1][5] = 3;
    enemy enemy1(enemy1Row, enemy1Col);
    enemy enemy2(enemy2Row, enemy2Col);
    enemy enemy3(enemy3Row, enemy3Col);

    // Displays the GameBoard
    for (int i = 0; i < gameBoard.size(); i++) {
        for (int j = 0; j < gameBoard[i].size(); j++){
            cout << gameBoard[i][j] << " , ";
        }
        cout << endl;
    }
    gameBoard[0][0] = 1;
    player mainChar(0,0);
    bool enemy1V, enemy2V, enemy3V;


   /* gameBoard[3][4] = 3;
    gameBoard[1][5] = 3;
    gameBoard[6][6] = 3;
    */
    gameBoard[height-1][width-1] = 4;
    bool runGame = true;
    while(runGame){
        winLoss = mainChar.isSafe(gameBoard);
        enemy1V = enemy1.isSafe(gameBoard);
        enemy2V = enemy2.isSafe(gameBoard);
        enemy3V = enemy3.isSafe(gameBoard);
        if(enemy1V || enemy2V || enemy3V){


        }else{
            runGame = false;
            cout << "Enemy got you!" << endl;
        }

        if(winLoss){
            if(mainChar.getWin()){
                runGame = false;
                cout << "Congratulations You Won!!!" << endl;
            }

        }else{
            runGame = false;
            cout << "You Died!" << endl;
        }

    }

    return 0;
}