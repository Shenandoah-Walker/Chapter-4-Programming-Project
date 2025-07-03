//Geometry Calculator Program
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {

  //Initialize variables
  double choice, area, base, height, radius, length, width;

  //Set variables to 0 in case they are not used
  area = 0;
  choice = 0;
  base = 0;
  height = 0;
  radius = 0;
  length = 0;
  width = 0;

  //Display menu and get request user choice
  cout << "Geometry Calculator" << endl;
  cout <<  "1. Calculate the Area of a Circle" << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle" << endl;
  cout << "4. Quit" << endl;
  cout << "Enter your choice (1-4): " << flush;
  cin >> choice;

  //Use the fixed function to set the floating-point notation to fixed-point
  cout << fixed;
  
  //For option 1, get radius and calculate area
  if (choice == 1) {
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;
    //Ensure radius is positive
    if (radius >= 0) {
    area = 3.14159 * radius * radius;
    cout << "The area of the circle is " << area << endl;
    return 0;
    }
    //If radius is negative, display error message
    else {
      cout << "Error: Negative values are not allowed. Please restart the program." << endl;
      return 0;
    }
  }

  //For option 2, get length and width and calculate area
  else if (choice == 2) {
    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;
    
    //Ensure length and width are positive
    if (length >= 0 && width >= 0) {
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
    }
    
    //If length or width is negative, display error message
    else {
      cout << "Error: Negative values are not allowed. Please restart the program." << endl;
      return 0;
    }
  }

  //For option 3, get base and height and calculate area
  else if (choice == 3) {
    cout << "Enter the base of the triangle: " << endl;
    cin >> base;
    cout << "Enter the height of the triangle: " << endl;
    cin >> height;

    //Ensure base and height are positive
    if (base >= 0 && height >= 0) {
    area = base * height * 0.5;
    cout << "The area of the triangle is " << area << endl;
    return 0;
    }

    //If base or height is negative, display error message
    else {
      cout << "Error: Negative values are not allowed. Please restart the program." << endl;
      return 0;
    }
  }

  //For option 4, quit the program
  else if (choice == 4) {
    cout << "End of program" << endl;
    return 0;
  }

  //For any other option, display error message
  else {
    cout << "Error: Invalid choice. Please restart the program." << endl;
    return 0;
  }


}