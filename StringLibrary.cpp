// StringLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

string Concatenate(string string1, string string2)
{
    //return combined const char strings
    string sumString("");
    sumString += string1.c_str();
    sumString += ' ' + string2.c_str();
    cout << sumString; //kein richtiger verweis
    return sumString.c_str();
}


int main()
{
    const char* msg = "That's a string here.";
    const char* msg2 = "That's another one.";
    printf("%s\n", Concatenate(msg, msg2));
    return 0;

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
