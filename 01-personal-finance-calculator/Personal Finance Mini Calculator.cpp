#include <iostream>
using namespace std;
int main()
{
  double Monthly_Income, Rent, Food, Transportation, Other_Expenses, Total_Expenses, Remaining_Money;
  cout << "Enter the Monthly Income: ";
  cin >> Monthly_Income;
  cout << "Enter the expenses of the Rent: ";
  cin >> Rent;
  cout << "Enter the expenses of the Food: ";
  cin >> Food;
  cout << "Enter the expenses of the Transportation: ";
  cin >> Transportation;
  cout << "Enter the expenses of the Other Expenses: ";
  cin >> Other_Expenses;
  Total_Expenses = Rent + Food + Transportation + Other_Expenses;
  cout << "The Total Expenses: " << Total_Expenses << endl;
  Remaining_Money = Monthly_Income - Total_Expenses;
  cout << "The Remaining Money: " << Remaining_Money << endl;
  if (Remaining_Money > 0)
  {
    cout << "You are saving" << endl;
  }
  else if (Remaining_Money == 0)
  {
    cout << "You are Balanced" << endl;
  }
  else
  {
    cout << "You are Overspending" << endl;
  }
  return 0;
}