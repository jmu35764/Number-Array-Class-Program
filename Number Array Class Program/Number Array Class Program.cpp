// Number Array Class Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;


int main()
{
    //std::cout << "Hello World!\n";

    //NumberArray();

    // NumberArray arr1;

    //NumberArray();

    random_device rd("default");
    mt19937 gen(rd());

    uniform_real_distribution<> dis(1.0, 20.0);

    //arr1.Print();

    //arr1.setNumber(13, dis(gen));

    //NumberArray arr2(5);
    
    /*for (int i = 0; i < 12; i++)
    {
        arr1.setNumber(i, dis(gen));
    }*/
        
    //arr1.Print();
    //arr2.Print();


    NumberArray arr3(5);
    /*
    arr3.setNumber(0, 12);
    arr3.setNumber(6, 15);
    arr3.setNumber(11, 20);
    arr3.setNumber(-1, 10);
    arr3.setNumber(12, 10);
 
    cout << arr3.getNumber(0) << endl;
    cout << arr3.getNumber(6) << endl;
    cout << arr3.getNumber(11) << endl;
    cout << arr3.getNumber(12) << endl;
    */
   
    //double value = 2;

    for (int i = 0; i < 5; i++)
    {
        arr3.setNumber(i, dis(gen));

        //value = value + 2;
    }

    arr3.Print();

    cout << endl << arr3.getMax() << endl;
    cout << arr3.getMin() << endl;
    cout << arr3.getAverage() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
