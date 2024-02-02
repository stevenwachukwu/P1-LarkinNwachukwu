#include <iostream>
#include <fstream>
#include "dice.hpp"
#include "tools.hpp"


void UnitDice (){
    srand(time(nullptr)); // random number each time

    // Testing all numbers from 1 to 10
    int nDice = rand() % 10 + 1  ;
    banner();
    ofstream
            Diceroll("Diceroll.txt",ios::app);

    /*Output if file can't open*/
    if (!Diceroll.is_open()) {
        fatal ("File Diceroll.txt cannot be opened for writing.");
    }

    Dice rolling(nDice);
    Diceroll << "And your rolls are:" << endl;
    const int* Rollnum = rolling.roll(); //this helps to access the array
    rolling.print(Diceroll); //calling the print function
    cout << "And your rolls are:\n" << rolling << endl;
    Diceroll << endl;
    Diceroll.close();
}
int main() {
    UnitDice();
    bye();
    return 0;
}
