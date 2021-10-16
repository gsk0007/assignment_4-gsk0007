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
    int menu = 0;
    GasPump customer;
    do
    {
        cout << "What do you want to do?" << endl;
        cout << "[1] Display gas dispensed and cost" << endl;
        cout << "[2] Change price per gallon" << endl;
        cout << "[3] Display cost of gas" << endl;
        cout << "[4] Reset gas pumped" << endl;
        cout << "[5] Display total gas dispensed and cost" << endl;
        cout << "[6] Pump gas" << endl;
        // Get menu selection
        cin >> menu;
        // cout << menu << endl;
        while (menu < 1 || menu > 6)
        {
            cout << "Please make a valid selection: " << endl;
            cin >> menu;
        };

        switch (menu)
        {
        case 1:
            customer.displayPumped();
            break;
        case 2:
            customer.setGasPrice();
            break;
        case 3:
            customer.displayPrice();
            break;
        case 4:
            customer.reset();
            break;
        case 5:
            customer.displayTotalGasPumped();
            break;
        case 6:
            customer.pumpGas();
            break;
        default:
            exit(1);
        }
        cout << "Enter Y to keep pumping gas: ";
        cin >> stillPumping;

    } while (stillPumping == 'y' || stillPumping == 'Y');
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
