
#include <iostream>
using namespace std;

//totCents is provided by the user in main. All other values are passed by reference and their subsequent values are based on the operations in the function
//int& varName means that the variable is a reference to the internal memory position of an int variable. A position is reserved without providing a specific value.
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies ) {

   
   //I should have updated totCents along the way to make the calculations neater. 
   numQuarters = totCents / 25;
   numDimes = (totCents - numQuarters*25)/10;
   numNickels = (totCents - (numQuarters*25) - (numDimes*10))/5;
   numPennies = totCents - (numQuarters*25) - (numDimes*10) - (numNickels*5);
}

int main() {
   int userCents;
   int numQuarters;
   int dimes, nickels, pennies;
   

   cout << "Enter total cents: " << endl;
   cin >> userCents;
   //Because ComputeChange uses arguments that are pass by reference, the correct values can be determined in the function. When the function is called the variables for each coin
   //have not been initialized with a value.
   ComputeChange(userCents, numQuarters, dimes, nickels, pennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << dimes << endl;
   cout << "Nickels: " << nickels << endl;
   cout << "Pennies: " << pennies << endl;

   return 0;
}
