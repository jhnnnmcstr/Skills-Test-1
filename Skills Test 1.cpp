// You found an exciting summer job for five weeks. It pays, say, $15.50 per hour.
// Suppose that the total tax you pay on your summer job income is 14%.
// After paying the taxes, you spend 10% of your net income to buy new clothes
// and other accessories for the next school year and 1% to buy school supplies.
// After buying clothes and school supplies, you use 25% of the remaining money to buy savings bonds.
// For each dollar you spend to buy savings bonds, your parents spend $0.50 to buy additional savings bonds for you. Write a program that prompts the user to enter the pay rate for an hour and the number of hours you worked each week. The program then outputs the following:
// a. Your income before and after taxes from your summer job.
// b. The money you spend on clothes and other accessories.
// c. The money you spend on school supplies.
// d. The money you spend to buy savings bonds.
// e. The money your parents spend to buy additional savings bonds for you.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	double hourlyrate,hoursworked,grossincome,netincome,amtclothes,amtsupplies,amtbonds,amtparentsbonds,remainingmoney;
	const double totaltax = 0.14, clothesinc = 0.10, suppliesinc= 0.01, bondsinc = 0.25, parentsbondsinc = 0.50;
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Fill up the following: " << endl;
	cout << "Hourly Rate: $";
	cin >> hourlyrate;
	
	cout << endl;
	cout << "Hours worked for 5 weeks: " << endl;
	cin >> hoursworked;

	grossincome = hourlyrate * hoursworked;
	netincome = grossincome - (grossincome * totaltax);
	amtclothes = netincome * clothesinc;
	amtsupplies = netincome * suppliesinc;
	remainingmoney = netincome - (amtclothes + amtsupplies);
	amtbonds = remainingmoney * bondsinc;
	amtparentsbonds = static_cast<double> (amtbonds*parentsbondsinc);
	
	cout << endl;
	cout << "Then, " << endl;
	
	cout << "Gross Income: $" << grossincome << endl;
	cout << "Net Income: $" << netincome << endl;
	
	cout << endl;
	cout << "Amounts spent on: " << endl;
	
	cout << "Clothes & Other Accessories: $" << amtclothes << endl;
	cout << "School Supplies: $" << amtsupplies << endl;
	
	cout << endl;
	cout << "After buying Supplies and Clothes, " << endl;
	
	cout << "Savings Bonds: $" << amtbonds << endl;
	cout << "Parents spent to buy Additional Bonds: $" << amtparentsbonds<< endl;
	
	return 0;
	
}
