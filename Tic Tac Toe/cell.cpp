#include "header.h"
enum class CellState { Empty, X, O };

class Cell {
private:
    CellState state;
public:
    Cell() : state(CellState::Empty) {}
    CellState getState() const { return state; }
    void setState(CellState s) { state = s; }
};