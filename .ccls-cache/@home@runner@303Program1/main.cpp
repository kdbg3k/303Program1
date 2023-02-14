#include <iostream>
#include "function.hpp"

int main() {
  int numbers[10];
  readFile(numbers);
  char menuChoice;
  printMenu(); //print menu and ask user for their choice
  std::cin >> menuChoice;
  menuChoice = toupper(menuChoice);

  switch(menuChoice){
    case 'M':
      //ask user for index to modify
      int in;
      std::cout << "Which index in the array would you like to modify? (1 - 10) >> ";
      std::cin >> in;
      modify_value(numbers,in);
  
    case 'A':
      //add to end of array
      int newInteger;
      
      
  }

}