//Days in a Month Program

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  //Initialize variables
  int month = 0, year = 0, days = 0;

  //Prompt the user to enter the month and store the input in the variable month
  cout << "Enter a month (1-12): ";
  cin >> month;

  //If the month is less than 1 or greater than 12, display an error message and exit the program
  if (month < 1 || month > 12) {
    cout << "Invalid month. Months must be between 1 and 12. Please restart the program." << endl;
    return 0;
  }
  //Prompt the user to enter the year and store the input in the variable year
  cout << "Enter a year: ";
  cin >> year;

  //If the month is January, March, May, July, August, October, or December, set the variable days to 31
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    days = 31;
  }

  //If the month is April, June, September, or November, set the variable days to 30
  else if (month == 4 || month == 6 || month == 9 || month == 11) {
    days = 30;
  }
  
  //If the month is February, check if the year is a leap year. Then, set the variable days to 29 if it is a leap year, and 28 if it is not.
  if ((month == 2) && (year % 100 == 0) && (year % 400 == 0)) {
      days = 29;
  }
  else {
    days = 28;
  }

  //Display the number of days in the month
  cout << "There are " << days << " days in that month." << endl;

  return 0;
}
