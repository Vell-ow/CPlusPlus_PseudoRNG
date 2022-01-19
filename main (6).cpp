#include <iomanip>
#include <cstdlib>
#include <cmath>
// This program takes a number provided by the user, and then returns a 
// statement containing that number multiplied by 9. It repeats until the
// sentinel value -1 is entered, then exits.
// 
// Programmer:    Andrew Coviello
// Lab 8
// Project 2
// Problem Statement: Using a given integer, multiply the integer by 9 
// and return the answer to the user.
// 
// 1. Establish int values for the number, multiple, product, first step,
// second step and result.
// 2. Initialize a large while loop to keep track of a sentinel value, 0,
// which will exit the program if entered(the program would otherwise run 
// forever).
// 3. Prompt the user for the integer.
// 4. Use an if statement to test for the sentinel number.
// 5. Multiply the number by 9 if not.
// 6. Print the multiple to the user and loop again until sentinel value.
//
#include <iostream>
using namespace std;

void rando(int minimum, int maximum, int range);

int main() {

  // integers for grade values
  int minimum, maximum, range;

  unsigned seed;

  // Use the time function to get a "seed" value for srand
  seed = time(0); 
  srand(seed);

  // beginning display shows choices and prompts user for character
  while(true)
  {
    // prompt the user
    cout << setw(30) << "Enter the minimum value you want to see random numbers generated from: " << endl;
    // read in the value
    cin >> minimum;
    cout << setw(30) << "Enter the maximum value you want to see random numbers generated from: " << endl;
    cin >> maximum;
    cout << setw(30) << "Enter the number of numbers you want to see generated: " << endl;
    cin >> range;    
    // prompt title
    cout << setw(30) << "****** Random Numbers ******\n" << endl;
    rando(minimum, maximum, range);
  }
  // combine the two digits together into another int to get the answer
  // maybe by multiplying step 1 by 10, and adding step 2?
}

void rando(int minimum, int maximum, int range)
{
    // The function should print an error message if  minimum  is less 
    // than 0 or greater than or equal to  maximum,  or if the third 
    // parameter is not a positive number.
    if(minimum < 0 || minimum > maximum || range < 0)
    {
      // quit if true
      exit(0);
    }
    for(int i = 0; i < range; i++)
    {
      cout << (rand() % (maximum - minimum + 1)) + minimum << " " << endl;
    }
}