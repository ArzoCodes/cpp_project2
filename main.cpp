#include <iostream>
using namespace std;
 // prog
int main(){

  int accountNumber; 
  double  beginingBalance, charges, credits, limit, newBalance;  
 cout << "Enter account number (-1 to end) : " ;
  cin >> accountNumber;
  while(accountNumber != -1){ 
  cout << "Enter begining balance: ";
  cin >> beginingBalance;
  cout << "Enter total charges: ";
  cin >> charges;
  cout << "Enter total credits: ";
  cin >> credits;
  cout << "Enter credit limit: ";
  cin >> limit;

 newBalance = beginingBalance + charges - credits;
  cout << "New balance is: " <<  newBalance << endl;
  
  if(newBalance > limit){
    cout << "Account: " <<  accountNumber << endl;
    cout << "Credit limit: " << limit  << endl;
    cout << "Balance" << newBalance << endl;
    cout << " Credit Limit Exceeded." << endl;
  }
   cout << "\nEnter account number (-1 to end): ";
    cin >> accountNumber;
   }
 


return 0;

}
