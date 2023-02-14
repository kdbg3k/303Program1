#include <iostream>
#include "function.hpp"

void readFile(int numbers[]){
  //read ten integers from file

  //store integers in numbers array
}

void printMenu(){
  std::cout << "What would you like to do?\n";
  std::cout << "C - Check if integer exists in array\n"
    "M - Modify value in array\n"
    "A - Add new integer to end of array\n"
    "R - Remove value\n";
  std::cout << "Enter Choice >> ";
}

int int_exists(int numbers[], int size){
  int userChoice;
  std::cout << "Which integer would you like to find in the array? >> ";
  std::cin >> userChoice;

  //find user's choice of integer by iterating through array and return the index
  for (int i = 0; i < size; i++){
    if (numbers[i] == userChoice)
      return i; //returns index where integer was found
  }
  std::cout << "Integer was not found in the array\n";
  return 0;
}

void modify_value(int numbers[], int index){
  int originalInt, newInt;
  originalInt = numbers[index];
  std::cout << "Enter new value for integer at index " << index << ": ";
  std::cin >> newInt;
 //try catch block

  std::cout << "Old value at index " << index << ": " << originalInt << std::endl;
  std::cout << "New value at index " << index << ": " << newInt << std::endl;
}