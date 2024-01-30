#include <iostream>
#include <fstream>
#include "dice.hpp"
#include "tools.hpp"


void UnitDice (){
  srand(time(nullptr)); // random number each time
  
  // Testing all numbers from 1 to 10 
int nDice = rand() % 10 + 1  ; 
    banner() ;
    ofstream
    Diceroll("Diceroll.txt",ios::app);

    Dice rolling(nDice);
    Diceroll << "And your rolls are:" << endl;
    rolling.roll();
    rolling.print(Diceroll);
    Diceroll << endl;
    Diceroll.close();
}
int main() {

  /*Sending out to the file*/
    std::ofstream outputFile("Diceroll.txt",
    ios::app);
    /*Output if file can't open*/
    if (!outputFile.is_open()) {
       void fatal();
    }
    UnitDice();
    outputFile.close();
    bye();
    return 0;
}
