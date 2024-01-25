#include "dice.hpp"

Dice::Dice(int n){
    nDice = n;
    diceVal = new int [nDice];
    srand(time(NULL));

} //constructor

Dice::~Dice() {
    delete [] diceVal;
} //destructor

const int* Dice:: roll () {
    for (int j = 0; j < nDice; j++) {
        diceVal [j] = rand()%6+1;
    }
    return diceVal;
}

ostream& Dice::print(ostream& diceOutput) {
    for (int j = 0; j < nDice; j++) {
        diceOutput << diceVal [j];
    }
    return diceOutput;

}
