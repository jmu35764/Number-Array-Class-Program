// Number Array Class Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;

// The purpose of this code is to create a dynamically allocated array using
// objects and prove that it works by testing different types of arrays and 
// confirming that the values are being stored properly


int main()
{
    //****** CODE FOR RANDOM NUMBER GENERATOR ******//
    
    random_device rd("default");
    mt19937 gen(rd());

    uniform_real_distribution<> dis(1.0, 20.0);  // Set random values from 1 to 20
    
    double k_value; // Known value variable
    double r_value; // Random value variable

    //****** CONSTRUCTOR TEST ******//
    
    //DEFAULT CONTRUCTOR TEST//

    // Default size of the arrays is set to 12, so 
    // there should be 12 instances of values printed 

    cout << "DEFAULT CONSTRUCTOR TEST" << endl;

    NumberArray arr1;
    arr1.Print();
    cout << endl;

    //PARAMETERIZED CONSTRUCTOR TEST//
    // Here we are setting the index of arr2 to be 5.
    // So there should be 5 values that get printed.
    cout << "PARAMETERIZED CONSTRUCTOR TEST" << endl;

    NumberArray arr2(5);
    arr2.Print();
    cout << endl;

    
    //****** SET NUMBER AND GET NUMBER TESTS ******//

    // Valid index Test
    // Here the code is testing if the setNumber function is working
    // This is done by storing a value in a particular part of the
    // array and then print the values in those indexes using the
    // getNumber member function
    cout << "SET NUMBER AND GET NUMBER TEST";

    arr2.setNumber(0, 10);
    arr2.setNumber(2, 12);
    arr2.setNumber(4, 15);

    cout << endl << arr2.getNumber(0) << endl;
    cout << arr2.getNumber(2) << endl;
    cout << arr2.getNumber(4) << endl << endl;

    // Out of bounds index

    cout << "OUT OF BOUNDS INDEX TEST" << endl;
    arr2.setNumber(-1, 2); // Selects index value lower than 0
    arr2.setNumber(5, 3);  // Selects index value higher than index

    // Show that the values in arr2 have not been altered.
    arr2.Print();
    cout << endl << endl;
    
    cout << "GET NUMBER FROM INVALID INDEX TEST" << endl;
    cout << arr2.getNumber(-1) << endl;
    cout << arr2.getNumber(5) << endl << endl;


    //****** STATISTICAL FUNCTION TEST: KNOWN VALUES ******//
    
    // Resetting value of arr2 to start at 2 and increase by increments of 2
    // The max, min, and average values should be as follows:
    // 10, 2, 6
    cout << "STATISTICAL FUNCTION TEST: KNOWN VALUES";

    k_value = 2;

    for (int i = 0; i < 5; i++)
    {
        arr2.setNumber(i, k_value);

        k_value = k_value + 2; // Increase value by 2
    }
    
    cout << endl << arr2.getMax() << endl;
    cout << arr2.getMin() << endl;
    cout << arr2.getAverage() << endl << endl;


    //****** STATISTICAL FUNCTION TEST: RANDOM VALUES ******//
    // Resetting values of arr2 to be filled by random values

    cout << "STATISTICAL FUNCTION TEST: RANDOM VALUES" << endl;

    for (int i = 0; i < 5; i++)
    {
        arr2.setNumber(i, dis(gen));
    }
    arr2.Print();
    cout << endl;

    cout << endl << arr2.getMax() << endl;
    cout << arr2.getMin() << endl;
    cout << arr2.getAverage() << endl;

}


