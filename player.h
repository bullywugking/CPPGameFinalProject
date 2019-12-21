//
// Created by phill on 12/18/2019.
//

#ifndef FINALLCPPPROJECT_PLAYER_H
#define FINALLCPPPROJECT_PLAYER_H
#include <string>
#include <vector>
using namespace std;
class player {
public:

    bool isSafe(vector<vector<int> > &passBoard);
    int getRow();
    bool getWin();
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

    player(int passRow, int passCol);
    player();

private:
    int row;
    int col;
    bool win;

};


#endif //FINALLCPPPROJECT_PLAYER_H
