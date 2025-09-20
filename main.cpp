// COMSC-210 | Lab 12 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>
#include <fstream>
using namespace std;

const int DAYS = 30;

int main() {
    array<double, DAYS> gasPrices;

    ifstream fin;
    fin.open("gas_prices.txt");
    if (fin.good()) {
        for (int i = 0; i < DAYS; i++) {
            fin >> gasPrices[i];
        }
        fin.close();
    }
    else
        cout << "File not found.\n";

    cout << "===== GAS PRICE TRACKER =====" << endl;

    cout << "1. Gas prices from the last " << gasPrices.size() << " days:" << endl;
    for (double val : gasPrices) cout << val << " "; cout << endl;

    cout << "2. First day price: " << gasPrices.front() << endl;
    cout << "3. Last day price: " << gasPrices.back() << endl;

    return 0;
}