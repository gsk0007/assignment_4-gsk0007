#include <iostream>
#include <iomanip>
using namespace std;

class GasPump
{
public:
    void setGasPrice();
    void pumpGas();
    void displayPrice();
    void displayPumped();
    void reset();
    void displayTotalGasPumped();

private:
    const float galPerSec = 0.1;
    int secondsToPump;
    float pricePerGal = 2.0, gasPumped = 0, totGasPumped = 0, gasCost = 0, totGasCost = 0;
};

int main()
{
    char stillPumping = 'Y';
    GasPump customer;
    do
    {
        cout << "Please enter the price of gas per gallon: ";
        customer.setGasPrice();
        customer.pumpGas();
        cout << "Summary of transaction:" << endl;
        customer.displayPumped();
        customer.displayPrice();
        cout << "Would you like to continue pumping?";
        cin >> stillPumping;
        customer.reset();
    } while (stillPumping == 'y' || stillPumping == 'Y');
    cout << "The total amount pumped and the price is:" << endl;
    customer.displayTotalGasPumped();
}

void GasPump::setGasPrice()
{
    cout << "Please enter price of gas: ";
    cin >> pricePerGal;
    cout << endl;
};

void GasPump::pumpGas()
{
    cout << "Please enter how many seconds you would like to pump gas: ";
    cin >> secondsToPump;
    cout << endl;

    for (int i = secondsToPump; i > 0; i--)
    {
        gasPumped = gasPumped + galPerSec;
    };
    gasCost = gasPumped * pricePerGal;
    // Keep track of totals
    totGasPumped += gasPumped;
    totGasCost += gasCost;
};

void GasPump::displayPrice()
{
    cout << pricePerGal << " Dollars per gallon" << endl;
};

void GasPump::displayPumped()
{
    cout << gasPumped << setw(5) << " Gallons" << endl;
    cout << gasCost << setw(5) << " Dollars" << endl;
};

void GasPump::reset()
{
    gasPumped = 0;
    gasCost = 0;
};

void GasPump::displayTotalGasPumped()
{
    cout << totGasPumped << setw(5) << " Gallons" << endl;
    cout << totGasCost << setw(5) << " Dollars" << endl;
};
