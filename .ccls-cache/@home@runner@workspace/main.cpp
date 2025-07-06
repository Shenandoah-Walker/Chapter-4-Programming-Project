//Shipping Charges Program
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  
  //Initialize variables
  int weight, distance;
  double shippingCharge;
  

  //Create a header for the program
  cout << "Shipping Charge Calculator for Fast Freight Shipping Company" << endl;
  cout << endl;
  

  //Set precision for output
  cout << fixed << setprecision(2);
  

  //Prompt user to enter weight and ensure that the weight is in the correct range: between 0 and 20 kilograms
  cout << "Enter the weight of the package (in kilograms): " << flush;
  cin >> weight;
  
  if (weight <= 0) {
    cout << "Invalid weight. Weight must be greater than 0. Please restart the program." << endl;
    return 0;
  }
  else if (weight > 20) {
    cout << "Only packages weighing 20 kilograms or less can be shipped." << endl;
    return 0;
  }

  
  //Prompt user to enter distance and ensure that the distance is in the correct range: between 10 and 3000 miles
  cout << "Enter the distance to be shipped (in miles):" << endl;
  cin >> distance;

  if (distance < 10) {
    cout << "Distance must be at least 10 miles." << endl;
    return 0;
  }
  else if (distance > 3000) {
    cout << "Distance must be 3000 miles or less." << endl;
    return 0;
  }

  
  //Calculate shipping charge
  if (weight <= 2) {
    shippingCharge = (distance / 500) * 1.10;
     if (shippingCharge == 0) {
       shippingCharge = 1.10;
     }
    cout << "The shipping charge is $" << shippingCharge << endl;
    return 0;
  }
  
  else if (weight > 2 && weight <= 6) {
    shippingCharge = (distance / 500) * 2.20;
    if (shippingCharge == 0) {
       shippingCharge = 2.20;
     }
    cout << "The shipping charge is $" << shippingCharge << endl;
    return 0;
}
  else if (weight > 6 && weight <= 10) {
    shippingCharge = (distance / 500) * 3.70;
    if (shippingCharge == 0) {
       shippingCharge = 3.70;
     }
    cout << "The shipping charge is $" << shippingCharge << endl;
    return 0;
  }

  else {
    shippingCharge = (distance / 500) * 4.80;
    if (shippingCharge == 0) {
       shippingCharge = 4.80;
     }
    cout << "The shipping charge is $" << shippingCharge << endl;
    return 0;
  }
  
}