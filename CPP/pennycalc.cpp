#include <iostream>

double a_penny_doubled_everyday(int, double tpenny = 0.01);

void amount_accumulated() {
    double total_amount = a_penny_doubled_everyday(18);
    std::cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $"  << total_amount;
}

double a_penny_doubled_everyday(int day, double tpenny) {
    std::cout << tpenny << std::endl;
    if(day <= 1)
        return tpenny;
    return tpenny = 2 * a_penny_doubled_everyday(--day, tpenny);
}

int main(){
    amount_accumulated();
    return 0;
}