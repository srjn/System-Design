#ifndef UTILS_H
#define UTILS_H

#include <string>
using namespace std;
enum class CellState { Empty, X, O };

class Cell {
public:
    Cell();
    CellState getState();
    void setState(CellState);
};

class Board {
public:
    bool isEmpty(int, int);

    bool placeMark(int, int, CellState);

    void display(); // simple print to console
};

class Player {
public:
    Player(string, CellState);
    string getName();
    CellState getMark();
};

class Game {
public:
    Game(Player, Player);

    void switchTurn(); 

    bool checkWin(CellState);
    bool checkDraw();

    void start(); // loop until win or draw
};

#endif