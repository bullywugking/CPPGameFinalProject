//
// Created by phill on 12/19/2019.
//

#ifndef FINALLCPPPROJECT_ENEMY_H
#define FINALLCPPPROJECT_ENEMY_H

#include <string>
#include <vector>
using namespace std;
class enemy {public:

    bool isSafe(vector<vector<int> > &passBoard);
    int getRow();
    int getCol();

    bool moveRight(vector<vector<int> > &passBoard);
    bool moveLeft(vector<vector<int> > &passBoard);
    bool moveUp(vector<vector<int> > &passBoard);
    bool moveDown(vector<vector<int> > &passBoard);
    bool moveUpLeft(vector<vector<int> > &passBoard);
    bool moveUpRight(vector<vector<int> > &passBoard);
    bool moveDownRight(vector<vector<int> > &passBoard);
    bool moveDownLeft(vector<vector<int> > &passBoard);

    bool topLeft(vector<vector<int> > &passBoard);
    bool topMiddle(vector<vector<int> > &passBoard);
    bool topRight(vector<vector<int> > &passBoard);
    bool middleLeft(vector<vector<int> > &passBoard);
    bool middleMiddle(vector<vector<int> > &passBoard);
    bool middleRight(vector<vector<int> > &passBoard);
    bool bottomLeft(vector<vector<int> > &passBoard);
    bool bottomMiddle(vector<vector<int> > &passBoard);
    bool bottomRight(vector<vector<int> > &passBoard);

    void setRow(int passRow);
    void setCol(int passColumn);

    enemy(int passRow, int passCol);
    enemy();

private:
    int row;
    int col;

};


#endif //FINALLCPPPROJECT_ENEMY_H
