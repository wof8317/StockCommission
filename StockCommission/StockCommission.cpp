#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double stockShares = 200; //Total stock shares
	double sharePrice = 21.77; //Share Price
	double brokerPercentage = 2; //Brokerage percentage
	double totalStockPrice = stockShares * sharePrice; //Total Stock price calculation
	double brokerCommission = totalStockPrice * (brokerPercentage / 100); //Brokerage commission calculation
	double grossTotal = totalStockPrice + brokerCommission; //Gross Total
	cout << "Kathrine bought " << stockShares << " shares of stock at a price of $" << sharePrice << " per share." << endl;
	cout << "She must pay her stock broker a " << brokerPercentage << " percent commission for the transaction." << endl;
	cout << "This is how much she has to pay..." << endl;
	cout << "\n-----------------------------------------" << endl;
	cout << stockShares << " shares @ $" << sharePrice << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Total Stock Price: $" << setw(8) << setprecision(2) << fixed << totalStockPrice << endl;
	cout << "Broker Commission: $" << setw(8) << setprecision(2) << fixed << brokerCommission << endl;
	cout << "Gross Total: " << setw(7) << "$" << setw(8) << setprecision(2) << fixed << grossTotal << endl;
	cout << "\nHow many shares will you be buying? ";
	cin >> stockShares;
	cout << "\nWhat is the price per share? $";
	cin >> sharePrice;
	cout << "\nWhat percentage will your broker be paid? (3 or 4 ...) ";
	cin >> brokerPercentage;
	/*
	  Had to do this nasty hack below where I created new variables by appending a 1 after totalStockPrice, brokerCommission, and grossTotal to display
	  the accurate calculations instead of repeating the initial calculations. I didn't like to do it, but it works.
	*/
	double totalStockPrice1 = stockShares * sharePrice;
	double brokerCommission1 = totalStockPrice1 * (brokerPercentage / 100);
	double grossTotal1 = totalStockPrice1 + brokerCommission1;
	cout << "\n-----------------------------------------" << endl;
	cout << setprecision(0) << stockShares << " shares @ $" << setprecision(2) << sharePrice << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Stock Cost: $" << setw(10) << setprecision(2) << fixed << totalStockPrice1 << endl;
	cout << "Broker Fee: $" << setw(10) << setprecision(2) << fixed << brokerCommission1 << endl;
	cout << "Total Cost: $" << setw(10) << setprecision(2) << fixed << grossTotal1 << endl;
	cout << "\nHave a nice day!";
	return 0;
}