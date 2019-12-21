//
// Created by phill on 12/18/2019.
//
#include <iostream>
#include <string>
#include <vector>
#include "player.h"
using namespace std;

int  player:: getRow(){
    return row;
}
int player:: getCol(){
    return col;
}
bool player:: getWin(){
    return win;
}

void  player:: setRow(int passRow){
    row = passRow;
}
void  player:: setCol(int passColumn){
    col = passColumn;
}
player:: player(int passRow, int passCol){
    row = passRow;
    col = passCol;
    win = false;
}

player:: player(){
    row = 0;
    col = 0;
    win = false;
}
bool player:: moveRight(vector<vector<int> > &passBoard){

    if(passBoard[row][col +1] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row][col +1] = 1;
        col = col+1;
        return true;
    }
}
bool player:: moveLeft(vector<vector<int> > &passBoard){
    if(passBoard[row][col -1] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row][col -1] = 1;
        col = col-1;
        return true;
    }

}
bool player:: moveUp(vector<vector<int> > &passBoard){

    if(passBoard[row -1][col] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row -1][col] = 1;
        row = row-1;
        return true;
    }

}
bool player:: moveDown(vector<vector<int> > &passBoard){


    if(passBoard[row+1][col] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row+1][col] = 1;
        row = row+1;
        return true;
    }

}
bool player:: moveUpLeft(vector<vector<int> > &passBoard){


    if(passBoard[row - 1][col - 1] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row - 1][col -1] = 1;
        row = row -1;
        col = col -1;
        return true;
    }

}

bool player:: moveUpRight(vector<vector<int> > &passBoard){
    if(passBoard[row -1][col +1] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row - 1][col + 1] = 1;
        row = row-1;
        col = col+1;
        return true;
    }
}

bool player:: moveDownRight(vector<vector<int> > &passBoard){


    if(passBoard[row +1][col+1] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row +1][col+1] = 1;
        row = row+1;
        col = col+1;
        return true;
    }

}
bool player:: moveDownLeft(vector<vector<int> > &passBoard){


    if(passBoard[row +1][col-1] == 3){
        return false;
    }else{
        passBoard[row][col] = 0;
        passBoard[row +1][col-1] = 1;
        row = row+1;
        col = col-1;
        return true;
    }
}
// Do the rest of the move left and right function. then program a move random for the enemy class.
// maybe make a diffrent class for the enemy
// or maybe a bool variable for if it is a enemy or player. or pherhaps a seperate function
// so that it could also check for if an enemey is in that spot. wait it already returns if a enemy is in that spot.
// maybe modify the is safe's ??

bool player:: topLeft(vector<vector<int> > &passBoard){
    int  playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Right enter 1" << endl;
    cout << "To move Down enter 4" << endl;
    cout << "To move Diagonal down right enter 5" << endl;
    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice == 1){
            alive = moveRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==4){
            alive = moveDown(passBoard);
            moveLoop = false;

        }else if(playerChoice ==5){
            alive = moveDownRight(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}

bool player :: topMiddle(vector<vector<int> > &passBoard){
    int row, col, playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Right enter 1" << endl;
    cout << "To move Left enter 2" << endl;
    cout << "To move Down enter 4" << endl;
    cout << "To move Diagonal down right enter 5" << endl;
    cout << "To move Diagonal down left enter 6" << endl;
    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice == 1){
            alive = moveRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==2){
            alive = moveLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==4){
            alive = moveDown(passBoard);
            moveLoop = false;

        }else if(playerChoice ==5){
            alive = moveDownRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==6){
            alive = moveDownLeft(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}
bool player :: topRight(vector<vector<int> > &passBoard){
    int playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Left enter 2" << endl;
    cout << "To move Down enter 4" << endl;
    cout << "To move Diagonal down left enter 6" << endl;
    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << "  ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
       if(playerChoice ==2){
            alive = moveLeft(passBoard);
            moveLoop = false;

       }else if(playerChoice ==4){
           alive = moveDown(passBoard);
           moveLoop = false;
       }else if(playerChoice ==6){
           alive = moveDownLeft(passBoard);
           moveLoop = false;
       }else{
           cout << "Invalid Move Try again" << endl;
       }
    }
    return alive;
}
bool player :: middleLeft(vector<vector<int> > &passBoard){
    int row, col, playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Right enter 1" << endl;
    cout << "To move Up enter 3" << endl;
    cout << "To move Down enter 4" << endl;
    cout << "To move Diagonal down right enter 5" << endl;
    cout << "To move Diagonal Up right enter 7" << endl;

    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice == 1){
            alive = moveRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==3){
            alive = moveUp(passBoard);
            moveLoop = false;

        }else if(playerChoice ==4){
            alive = moveDown(passBoard);
            moveLoop = false;

        }else if(playerChoice ==5){
            alive = moveDownRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==7){
            alive = moveUpRight(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}
bool player :: middleMiddle(vector<vector<int> > &passBoard){

    int playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Right enter 1" << endl;
    cout << "To move Left enter 2" << endl;
    cout << "To move Up enter 3" << endl;
    cout << "To move Down enter 4" << endl;
    cout << "To move Diagonal down right enter 5" << endl;
    cout << "To move Diagonal down left enter 6" << endl;
    cout << "To move Diagonal Up right enter 7" << endl;
    cout << "To move Diagonal Up left enter 8" << endl;

    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice == 1){
            alive = moveRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==2){
            alive = moveLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==3){
            alive = moveUp(passBoard);
            moveLoop = false;

        }else if(playerChoice ==4){
            alive = moveDown(passBoard);
            moveLoop = false;

        }else if(playerChoice ==5){
            alive = moveDownRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==6){
            alive = moveDownLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==7){
            alive = moveUpRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==8){
            alive = moveUpLeft(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}
bool player :: middleRight(vector<vector<int> > &passBoard){

    int row, col, playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Left enter 2" << endl;
    cout << "To move Up enter 3" << endl;
    cout << "To move Down enter 4" << endl;
    cout << "To move Diagonal down left enter 6" << endl;
    cout << "To move Diagonal Up left enter 8" << endl;

    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice ==2){
            alive = moveLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==3){
            alive = moveUp(passBoard);
            moveLoop = false;

        }else if(playerChoice ==4){
            alive = moveDown(passBoard);
            moveLoop = false;

        }else if(playerChoice ==6){
            alive = moveDownLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==8){
            alive = moveUpLeft(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}

bool player :: bottomLeft(vector<vector<int> > &passBoard){

    int row, col, playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Right enter 1" << endl;
    cout << "To move Up enter 3" << endl;
    cout << "To move Diagonal Up right enter 7" << endl;

    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice == 1){
            alive = moveRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==3){
            alive = moveUp(passBoard);
            moveLoop = false;

        }else if(playerChoice ==7){
            alive = moveUpRight(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}
bool player :: bottomMiddle(vector<vector<int> > &passBoard){

    int row, col, playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Right enter 1" << endl;
    cout << "To move Left enter 2" << endl;
    cout << "To move Up enter 3" << endl;
    cout << "To move Diagonal Up right enter 7" << endl;
    cout << "To move Diagonal Up left enter 8" << endl;

    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice == 1){
            alive = moveRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==2){
            alive = moveLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==3){
            alive = moveUp(passBoard);
            moveLoop = false;

        }else if(playerChoice ==7){
            alive = moveUpRight(passBoard);
            moveLoop = false;

        }else if(playerChoice ==8){
            alive = moveUpLeft(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}
bool player :: bottomRight(vector<vector<int> > &passBoard){

    int row, col, playerChoice;
    bool alive, moveLoop;
    moveLoop = true;
    cout << "Here are your options" << endl;
    cout << "To move Left enter 2" << endl;
    cout << "To move Up enter 3" << endl;
    cout << "To move Diagonal Up left enter 8" << endl;
    // check up down left and right. maybe get rid of diagonals maybe keep them


    for (int i = 0; i < passBoard.size(); i++) {
        for (int j = 0; j < passBoard[i].size(); j++){
            cout << passBoard[i][j] << " , ";
        }
        cout << endl;
    }

    while(moveLoop){
        cout << "Enter your choice" << endl;
        cin >> playerChoice;
        if(playerChoice ==2){
            alive = moveLeft(passBoard);
            moveLoop = false;

        }else if(playerChoice ==3){
            alive = moveUp(passBoard);
            moveLoop = false;

        }else if(playerChoice ==8){
            alive = moveUpLeft(passBoard);
            moveLoop = false;

        }else{
            cout << "Invalid Move Try again" << endl;

        }
    }
    return alive;
}

bool  player:: isSafe(vector<vector<int> > &passBoard){
    //if any corners or sides
    //go into cases depending on which side, and allow moves
    //before attempting the move, check


    int vecWidth, vecHeight;
    vecWidth = passBoard.size();
    vecHeight = passBoard[0].size();
    bool success = true;

    if ((row == 0) && (col == 0)) {
        //Top Left
        success = topLeft(passBoard);
    } else if ((row == 0) && (col > 0) && (col < (vecWidth - 1))) {
        //topMiddle
        success = topMiddle(passBoard);
    } else if ((row == 0) && (col == (vecWidth - 1))) {
        //Top right
        success = topRight(passBoard);
    } else if ((row > 0) && (col == 0) && (row < (vecHeight - 1))) {
        //Left Middle
        success = middleLeft(passBoard);
    } else if ((row == (vecHeight - 1)) && (col == 0)) {
        //Bottom Left
        success = bottomLeft(passBoard);
    } else if ((row == vecWidth - 1) && (col > 0) && (col < (vecWidth - 1))) {
        //Bottom Middle
        success = bottomMiddle(passBoard);
    } else if ((col == (vecHeight - 1)) && (row == vecWidth - 1)) {
        //Bottom Right
        //You win
        cout << "Congratulations You have won!!" << endl;
        win = true;
    } else if ((row > 0) && (row < (vecHeight - 1)) && (col == (vecHeight - 1))) {
        //Middle Right
        success = middleRight(passBoard);
    } else if ((row > 0) && (row < (vecHeight - 1)) && (col > 0) && (col < (vecHeight - 1))) {
        //Middle Middle
        success = middleMiddle(passBoard);
    } else {
        //   throw new ArrayIndexOutOfBoundsException("You're not in bounds");
    }

    return success;
}