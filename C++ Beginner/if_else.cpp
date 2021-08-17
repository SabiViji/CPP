#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age : ";
    cin >> age;
    if(age > 18){
        cout << "You're an adult\n";
    }
    else if(age == 18){
        cout << "You're 18\n";
    }
    else{
        cout << "You're under 18\n";
    }

    return 0;
}