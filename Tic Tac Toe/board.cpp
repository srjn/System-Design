#include <iostream>
using namespace std;
#include "header.h"

class Board {
private:
    Cell grid[3][3];
public:
    bool isEmpty(int row, int col) const {
        return grid[row][col].getState() == CellState::Empty;
    }

    bool placeMark(int row, int col, CellState mark) {
        if (isEmpty(row, col)) {
            grid[row][col].setState(mark);
            return true;
        }
        return false;
    }

    void display() {
        cout<<"Displaying....";
    } // simple print to console
};