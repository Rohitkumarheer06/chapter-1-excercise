#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string name, hometown;
    int age;
    cout << "Enter your first and second name: ";
    getline(cin, name); 
    cout << "Enter your hometown: ";
    getline(cin, hometown);

    while (true) {
        cout << "Enter your age: ";
        if (cin >> age) {
            break;
        } else {
            cout << "Please enter a valid age." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }

    cout << "\nName: " << name << "\nHometown: " << hometown << "\nAge: " << age << endl;

    return 0;
}
