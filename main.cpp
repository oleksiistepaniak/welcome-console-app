#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to our welcoming application. Let's meet with you closer. What is your name?" << endl;

    string name;

    getline(cin, name);

    cout << "Okay, your name is: " << name << endl;

    cout << "Okay, what is your age?" << endl;

    int age;

    cin >> age;

    cout << "Okay, your age is: " << age << endl;

    cin.ignore();

    cout << "Okay, what is your hobby?" << endl;

    string hobby;

    getline(cin, hobby);

    cout << "Okay, your hobby is: " << hobby << endl;

    cout << "Okay, it was nice to meet with you. Bye!" << endl;
}