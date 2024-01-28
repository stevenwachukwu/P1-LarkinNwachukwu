#ifndef dice
#define dice

//#include <iostream>
#include "tools.hpp"

//using namespace std;

class Dice {
private:
    int nDice;
    int* diceVal;

public:
    Dice(int n);
    ~Dice();
    ostream& print(ostream&);
    const int* roll();

};
inline ostream& operator << (ostream& out, Dice& d) {return d.print(out);}
#endif
