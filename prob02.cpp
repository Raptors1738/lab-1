#include <iostream>
#include <iomanip>
using namespace std;
  int main(){
    float cost_dollars, tip_decimal, tip_percentage;

    cout << "Please input meal cost: ";
    cin >> cost_dollars; 
    cout << cost_dollars << "\n";

    cout << "Please input tip percentage: ";
    cin >> tip_percentage; 
    cout << tip_percentage << "\n";

    double cost_cents, tip_amount, total, tip_amount_dollars, total_dollars, tax_amount, tax_cents;
    cout << fixed << setprecision(2);
    cost_cents = cost_dollars * 100;
    tax_cents = cost_cents * 0.075;
    tip_decimal = tip_percentage / 100;
    tip_amount = tip_decimal * cost_cents;
    total = cost_cents + tip_amount + tax_cents;
    
    tax_amount = tax_cents / 100;
    tip_amount_dollars = tip_amount / 100;
    total_dollars = total / 100;

    cout << "Restaurant Bill\n";
    cout << "====================\n";
    cout << "Subtotal: $" << cost_dollars << "\n";
    cout << "Taxes: $" << tax_amount << "\n";
    cout << "Tip: $" << tip_amount_dollars << "\n";
    cout << "====================\n";
    cout << "Total: $" << total_dollars << "\n";

    return 0;
  }
