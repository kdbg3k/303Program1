#include <iostream>
#include <fstream>
#include "function.hpp"

void readFile(int numbers[]){
  //read ten integers from file
  std::ifstream inFile;
  inFile.open("test.txt");

  if (inFile.is_open()){
    for (int i = 0; i < 10; i++) //store integers in numbers array
      inFile >> numbers[i];
  }
  inFile.close(); //close file
}

void printMenu(){
  std::cout << "What would you like to do?\n";
  std::cout << "C - Check if integer exists in array\n"
    "M - Modify value in array\n"
    "A - Add new integer to end of array\n"
    "R - Remove value\n";
  std::cout << "\n\n";
  std::cout << "Enter Choice >> ";
}

int int_exists(int numbers[], int size){
  int userChoice;
  std::cout << "Which integer would you like to find in the array? >> ";
  std::cin >> userChoice;

  //find user's choice of integer by iterating through array and return the index
  for (int i = 0; i < size; i++){
    if (numbers[i] == userChoice){
      std::cout << std::endl << userChoice << " exists at index " << i << std::endl << std::endl;
      return i;
    }
  }
  std::cout << "Integer was not found in the array\n";
  return 0;
}

void modify_value(int numbers[], int index){
  int originalInt, newInt;
  originalInt = numbers[index];
  std::cout << "Enter new value for integer at index " << index << ": ";
  try{
    std::cin >> newInt;
  }
  catch(...){
    std::cout << "Exception caught" << std::endl;
  }
  std::cout << "Old value at index " << index << ": " << originalInt << std::endl;
  std::cout << "New value at index " << index << ": " << newInt << std::endl;
}

void add_to(int numbers[]){
  //ask user for number to add to end
  int newInteger;
  std::cout << "Enter integer to add to end of array: ";
  try{
    std::cin >> newInteger;
    if (!std::cin){
      throw newInteger;
    }
  }
  catch(int newInteger){
    std::cout << "Exception caught: invalid input" << std::endl << std::endl;
  }
  for (int i = 0; i < 20; i++){
    if (numbers[i] == 0){
      numbers[i] = newInteger;
      break;
    }
  }
  
}

void remove(int numbers[], int size){
  //ask user which index to remove
  int in;
  std::cout << "Enter index to remove: ";
  std::cin >> in;
  numbers[in] = 0;
}