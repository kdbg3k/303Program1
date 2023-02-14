#include <iostream>
#include "function.hpp"

int main() {
  int numbers[12] = {0}; 
  int size = 12;
  readFile(numbers); //call function to read in file of 10 integers --- integers are stored in numbers array
  
  char menuChoice;
  
  printMenu(); //print menu and ask user for their choice
  std::cin >> menuChoice;
  menuChoice = toupper(menuChoice);
  std::cout << "\n\n";
  switch(menuChoice){
    case 'M':
      int in; //ask user for index to modify
      std::cout << "Which index in the array would you like to modify? (1 - 10) >> ";
      std::cin >> in;
      modify_value(numbers,in);
      break;
    case 'A':
      //add to end of array
      add_to(numbers);
      std::cout << "Updated array: ";
      for (int i = 0; i < size; i++){
        if (numbers[i] != 0)
          std::cout << numbers[i] << " ";
      }
      break;
    case 'C':
      //check if integer exists
      int_exists(numbers, size);
      break;

    case 'R':
      remove(numbers, size);

      std::cout << "Updated array: ";
      for (int i = 0; i < size; i++){
        if (numbers[i] != 0)
          std::cout << numbers[i] << " ";
      }
      break;
  }

}