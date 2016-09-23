//Calculates currency in $ for three currencies.
#include <iostream>
#include "../std_lib_facilities.h"


int main() {
    double dollars, d;
    char currency;
    constexpr double y_to_d = 101.07;
    constexpr double k_to_d = 6.64;
    constexpr double p_t_d = 0.77;
    while (cin) {
        cout << "Please enter amount in $ to exchange and currency (y, k, p): ";
        cin >> d >> currency;
        if (currency == 'y') {
            dollars = d * y_to_d;
            cout << d << " yen are equivalent to $" << dollars << endl;
        }
        else if (currency == 'k') {
            dollars = d * k_to_d;
            cout << d << " kronos are equivalent to $" << dollars << endl;
        }
        else if (currency == 'p') {
            dollars = d * p_t_d;
            cout << d << " pounds are equivalent to $" << dollars << endl;
        }
        else
            cout << "You entered the incorrect currency!" << endl;
    }
    return 0;
}