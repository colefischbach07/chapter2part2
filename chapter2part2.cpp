/*
file name: chapter2part2.cpp
programer: cole fischbach
date: 9/18/2025
purpose: part 2 of sales tax program
instead of having state and country sales tax hard-coded in your program allow
the user to enter the sales taxes as well as the amount of the purchase and display
the total Sales tax.
*/





#include <iostream>
using namespace std;

int main()
{
	double stateTax;
	double countyTax;
	double itemcost;

	cout << "Please enter the state tax (as a decimal): ";
	cin >> stateTax;
	cout << "Please enter the county tax (as a decimal): ";
	cin >> countyTax;
	cout << "Please enter the cost of the item you purchased: ";
	cin >> itemcost;

	double totalSalesTax = (itemcost * stateTax) + (itemcost * countyTax);

	cout << "The total sales tax is: " << totalSalesTax << endl;

	return 0;
}