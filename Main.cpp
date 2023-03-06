//Main.cpp : This file contains the 'main' function. Program execution begins and ends here.
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cmath>
#include <stdexcept>
#include "Assignment1.h"

using namespace std;

//insert a try catch here for if the file is accesable 
//maybe do a ui where they can enter in the name of the file they 
//want to access 

int main() {

	//feed in the array size and then the function creates the array 
	//return back the array 
	int s = 100;
    int* arrayy = new int[s];

	string name = cout << "Enter in the name of the file you would like to read that has 100 integers in total" << endl;  

	readingFile(name, int s, arrayy);

	//eventually modify this code
    char choice = 'C';
    char userChoice = 'C';
   
    //r for replace
    //f for find
    //m for modify 
    //a for add

    //display to the user the choices that they are making/have made
    while (choice != 'X' && choice != 'x') {
        showMenu();
        cin >> choice;
        char userChoice = toupper(choice);

        switch (userChoice) {
        case 'R':
            replaceValue(arrayy);
            //call

            break;
        case 'F':
            find(arrayy);

            break;
        case 'M':
            char input = l;
            int indexx = 0;

            cout >> "Do you know the index of the value you are looking for? y/n";
            if (toupper(input) = "Y") {
                cin >> indexx;
                modifyInteger(arrayy, indexx);
            }
            else if (toupper(input) = "N") {
                modifyInteger(arrayy);
            }


            break;
        case 'A':
            addToArray(arrayy);

            break;

        }

    }
	



} 