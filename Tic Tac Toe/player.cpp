#include <string>
using namespace std;

class Player {
private:
    std::string name;
    CellState mark;
public:
    Player(std::string n, CellState m) : name(std::move(n)), mark(m) {}
    std::string getName() const { return name; }
    CellState getMark() const { return mark; }
};