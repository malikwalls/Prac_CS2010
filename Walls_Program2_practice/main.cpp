//
//  main.cpp
//  Walls_Program2_practice
//
//  Created by Malik Walls on 12/23/19.
//  Copyright © 2019 CS 2010. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    // variables
    double localTax, stateTax;
    localTax = 0.02;
    stateTax = 0.06;
    double productAmount, salesTax;

    // Input
    cout << " Enter report month: ";
    string  month;
    cin >> month;
    cout << " Enter report year: ";
    double year;
    cin >> year;
    cout << " Enter total from receipts: ";
    double total;
    cin >> total;

    cout<< endl << " Carol and Company " << endl;
    cout << " Monthly Sales Tax Report " << endl;

    cout << endl << " Report Date: " << month << " " << year << endl;

    cout << " ------------------------------------------ " << endl;

    // Calculate the total sales tax
    salesTax = stateTax * localTax;
     // Calculate the Sales
    productAmount = total/1.08;
    // Calculate the Local Sales Tax
    localTax = productAmount * salesTax;
    // Calculate the State Tax
    stateTax = productAmount * stateTax;


//    // Results
    cout << " Total Receipts: " << total << endl;
    cout << " Total Sales: " << productAmount << endl;
    cout << " Local Tax Collected: " << localTax << endl;
    cout << " State Tax Collected: " << stateTax << endl;
    cout << " Total Sales Tax Collected: "<< salesTax << endl;


    
    cout << endl; return 0;
}
