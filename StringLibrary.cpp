// StringLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int getLength(char* msg)
{
    const char* str = msg;
    int Size = 0;
    while (str[Size] != '\0') Size++;
    return Size;
}

string Concatenate(char* string1, char* string2)
{
    char result[100];           // array to hold the result.

    strcpy(result, string1);    // copy string one into the result.
    strcat(result, string2);    // append string two to the result.

    return result;
}


int main()
{
    const char* msg = "That's a string here.";
    const char* msg2 = "That's another one.";

    string conString;
    conString = Concatenate(const_cast<char*>(msg), const_cast<char*>(msg2));
    cout << conString << endl;

    cout << "Before modifying: " << msg << endl;

    string modString = "Oops, a new string appeared.";

    msg = modString.c_str(); //We are putting the string on a char array with the c_str() function
    cout << "After modifying: " << msg << endl;

    const char* msgCount = "This sentence has 26 chars";

    cout << "Char count: " << getLength(const_cast<char*>(msgCount));

    return 0;

}