#pragma once
//:)
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <stdexcept>
#include <cmath>

using namespace std; 

int readingFile(string fileName, int size, int array[]);

int modifyInteger(int array[], int index = 0);

int find(int array[]);

int addToArray(int array[]);

int replaceValue(int array[]);

void showMenu();

