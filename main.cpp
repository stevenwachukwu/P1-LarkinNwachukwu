#include <iostream>
#include <fstream>
#include "dice.hpp"
#include "tools.hpp"


void UnitDice (){
/*Getting the file we want to put the number of rolls*/
  int nDice;
  banner() ;
  printf("Pls enter the number of rolls: 1-10 \n");
  std::cin >> nDice;
  /*Making it 1-10 rolls*/
  if (nDice > 10){
  nDice = nDice%10;
  }
  std::ofstream 
  
  Diceroll("Diceroll.txt",std::ios::app);

  /* Not open messages */
  if (!Diceroll.is_open()) {
  std::cerr << "File not opened" << std::endl;
  return; }
   
  Dice rolling(nDice);
  Diceroll << "And your rolls are:" << std::endl;
  rolling.roll();
  rolling.print(Diceroll);
  Diceroll << std::endl;
  Diceroll.close();
  
}
  int main() {
      /*Sending out to the file*/
      std::ofstream outputFile("Diceroll.txt", 
      std::ios::app);
      /*Output if file can't open*/
      if (!outputFile.is_open()) {
          std::cerr << "Error opening test-Diceroll.txt file." << std::endl;
          return 1; 
      }
      UnitDice();
      outputFile.close();
      bye();
      return 0; 
  }
