#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

/**
 * Function : printMenu
 *            prints the menu which the user uses to select
 *            what they would like to do.
 */
void printMenu();
/**
 * Function: getNumDigits
 *          Finds how many digits are in an integer
 * @param number - The number that is being entered
 */
int getNumDigits(int number);
/**
 * Function: getSum
 *          Finds the sum of each digit in the given number
 * @param number - The number that is entered by the user
 * @return - the sum of digits 
 */
int getSum(int number);
/**
 * Function: getNthDigit
 *          Outputs what digit is shown when given a position
 *          for the digit you would like to have
 * @param number - The number given by the user
 * @param n - The digit 
 * @return - The digit that is found by the position given
 */
int getNthDigit(int number, int n);
/**
 * Function: isPalindrome
 *          Finds whether or not the number entered
 *          is a palindrome.
 * @param number - The number entered by the user
 * @return - true or false whether or not it is a palindrome
 */
bool isPalindrome(int number);
/** Function: exit
 *          Exits the program and tells the user "goodbye"
 */
void exit();
int number;
int n; 

int main(){
  printMenu();
  return 0;
}

void printMenu(){
  int choice;

  cout << "1. Find the digits of an integer." << endl;
  cout << "2. Find the nth digit in an integer." << endl;
  cout << "3. Find the sum of all digets in an integer." << endl;
  cout << "4. Is the integer a palindrome?" << endl;
  cout << "5. Exit." << endl;
  cout << "Enter Choice: " << endl;
  cin >> choice;
  if(choice == 1){
    getNumDigits(number);
  }
  else if(choice == 2){
    getNthDigit(number, n);
  }
  else if(choice == 3){
    getSum(number);
  }
  else if(choice == 4){
      isPalindrome(number);
  }
  else if(choice == 5){
    exit();
  }
  else{
    cout << "Not a valid selection" << endl;
    printMenu();
  }
}

int getNumDigits(int number){
  int length = 0;
  cout << "Enter your integer: ";
  cin >> number;
 
  while (number != 0){
    length++;
    number /= 10;
  }
 
  cout << "The integer is " << length << " digets long." << endl;
  printMenu();
  return length;
}

int getNthDigit(int number, int n){
  number = 0;
  n = 0;
  int position = 0;

  cout << "Enter an integer number: " << endl;
  cin >> number;
  cout << " Enter a position: " << endl;
  cin >> n;
  
  if(n!=0){
    n = number / pow(10,(n-1));
    position = number % 10;
  }
  cout << "The position is: " << position << endl;
  return position;
}

int getSum(int number){
  int sum = 0;
  int remainder;
  cout << "Enter your integer: ";
  cin >> number;

  while (number != 0){
    remainder = number % 10;
    sum += remainder;
    number /= 10;
  }
  cout << "The sum of the integers is: " << sum << endl;
  printMenu();
  return 0;
}

void exit(){
  cout << "Goodbye" << endl;
}
bool isPalindrome(int number){
    int reversedInt = 0;
    int remainder = 0;
    int n;
    
    cout << "Enter an integer: " << endl;
    cin >> number;

    n = number;

    do{
       remainder = number % 10;
        reversedInt = reversedInt * 10 + remainder;
        number /= 10;
    }

    while(number != 0);
    
     cout << "The reversed number is " << reversedInt << endl;
     
     if(n == reversedInt){
       cout << "The number is a palindrome" << endl;
     }
     else{
       cout << "The number is not a palindrome" << endl;
     }
    
    return 0;
}
