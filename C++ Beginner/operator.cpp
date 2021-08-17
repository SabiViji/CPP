#include <iostream>

using namespace std;

int main()
{
    int a=10,b=20;

    //Arthemetic opterators --> +,-,*,/,%
    cout << 7 + 6 << endl;
    cout << 5 - 4 << endl;
    cout << 3 * 2 << endl;
    cout << 8 / 4 << endl;
    cout << 50 % 10 << endl;

    //Unary operators --> ++,--
    cout << a++ + b << endl; //Post Increment
    cout << ++a + b <<endl; //Pre Increment

    //Relational operator --> <,>,<=,>=,==
    //True = 1, Flase = 0
    a = 5;
    b = 5;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;

    //Logical operators --> &&,||,!
    cout << (a == 5 && b == 6) << endl;
    cout << (a == 5 || b == 6) << endl;
    cout << !(a == 5 || b == 6) << endl;

    //Assignment operators --> =,+=,-=,*=,/=
    a = 5;
    a += 2; //a = 7
    a -= 1; //a = 6 
    a *= 3; //a = 18
    a /= 6; //a = 3

    return 0;
}