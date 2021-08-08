
#include <iostream>
using namespace std;


void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies ) {

   

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
   
   ComputeChange(userCents, numQuarters, dimes, nickels, pennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << dimes << endl;
   cout << "Nickels: " << nickels << endl;
   cout << "Pennies: " << pennies << endl;

   return 0;
}
