#include <iostream>
#include <cmath>

using namespace std;

double calculateSquareArea() {
    double sideLength;
    cout << "Enter the length of a side of the square: ";
    cin >> sideLength;
    return sideLength * sideLength;
}

double calculateRectangleArea() {
    double length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    return length * width;
}

double calculateTriangleArea() {
    double base, height;
    cout << "Enter the length of the base and height of the triangle: ";
    cin >> base >> height;
    return 0.5 * base * height;
}

int main() {
    while (true) {
        cout << "Please select the area of the shape to calculate:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;

        int selection;
        cout << "Enter selection: ";
        cin >> selection;

        switch (selection) {
            case 1: {
                double area = calculateSquareArea();
                cout << "The area of the square is: " << area << endl;
                break;
            }
            case 2: {
                double area = calculateRectangleArea();
                cout << "The area of the rectangle is: " << area << endl;
                break;
            }
            case 3: {
                double area = calculateTriangleArea();
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 4: {
                cout << "Exiting program." << endl;
                return 0;
            }
            default: {
                cout << "Invalid input. Please enter a valid selection." << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }
    }

    return 0;
}
