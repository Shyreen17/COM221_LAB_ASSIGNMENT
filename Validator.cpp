#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    int num;

    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        getline(cin, input);
        
        istringstream stream(input);
        if (stream >> num && num >= 5 && num <= 10) {
            cout << "Your input value (" << num << ") has been accepted." << endl;
            break;
        } else {
            cout << "Sorry, you entered an invalid number, please try again" << endl;
        }
    }

    return 0;
}
