#include <iostream>

using namespace std;

int main()
{
    int number = 74;
    char letter = 'y';
    float mark = 324.45;
    double mark2 = 2342423423.3434;
    bool value = true;

    unsigned int a = 875; //Only postive values
    short int b = 14; // only 2 byte
    long int c = 165671; //8 bytes


    cout << "Size of int = " << sizeof(int) << "bytes\n";
    cout << "Size of char = " << sizeof(char) << "bytes\n";
    cout << "Size of float = " << sizeof(float) << "bytes\n";
    cout << "Size of double = " << sizeof(double) << "bytes\n";
    cout << "Size of bool = " << sizeof(bool) << "bytes\n";
    cout << "Size of short int = " << sizeof(short int) << "bytes\n";
    cout << "Size of long int = " << sizeof(long int) << "bytes\n";

    return 0;
}