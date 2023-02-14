#pragma once

void readFile(int numbers[]);
//Pre: none
//Post: txt file of numbers is read, integers are placed in array

void printMenu();
//Pre: none
//Post: list of options is printed on screen for user to pick from

int int_exists(int numbers[], int size);
//Pre: numbers array is passed in, size of array is passed in
//Post: returns index which integer is stored, if integer exists

void modify_value(int numbers[], int index);
//Pre: numbers array is passed in, index number is passed in
//Post: value at chosen index has been changed, old and new values are printed

void add_to(int numbers[]);
//Pre: Numbers array passed in, array is not empty
//Post: One integer is added to end of array

void remove(int numbers[], int size);
//Pre: Numbers array passed in, array is not empty
//Post: index of choice is changed to 0