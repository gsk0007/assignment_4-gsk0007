#include <iostream>
#include <iomanip>
using namespace std;

// Class modeling a gas pump
class GasPump
{
public:
    // MEmber function prototypes for setting an accessing gas pump data
    void setGasPrice();
    void pumpGas();
    void displayPrice();
    void displayPumped();
    void reset();
    void displayTotalGasPumped();

private:
    // Member variables for gas pump data
    const float galPerSec = 0.1;
    int secondsToPump;
    float pricePerGal = 2.0, gasPumped = 0, totGasPumped = 0, gasCost = 0, totGasCost = 0;
};

int main()
{
    // Declare a character to compare against in while loop and a GasPump object
    char stillPumping = 'Y';
    GasPump customer;

    // While loop to keep pumping gas until user says no
    do
    {
        // Show functionality of member functions of the gas pump class
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

    // Display total gas pumped and total gas cost after user has stopped pumping
    cout << "The total amount pumped and the price is:" << endl;
    customer.displayTotalGasPumped();
}


// ____________________________________________________________________________
// Member function definitions
// Function for setting the price per gallon
void GasPump::setGasPrice()
{
    cout << "Please enter price of gas: ";
    cin >> pricePerGal;
    cout << endl;
};
// Function for pumping gas at a constant rate of 0.1 gallons per second
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
// Function for displaying the price per gallon
void GasPump::displayPrice()
{
    cout << pricePerGal << " Dollars per gallon" << endl;
};
// Function for displaying the amount of gas pumped
void GasPump::displayPumped()
{
    cout << gasPumped << setw(5) << " Gallons" << endl;
    cout << gasCost << setw(5) << " Dollars" << endl;
};
// Function for resetting the gas pump's temporaty variables but not total amounts
void GasPump::reset()
{
    gasPumped = 0;
    gasCost = 0;
};
// Function for displaying the total amount of gas pumped and total cost
void GasPump::displayTotalGasPumped()
{
    cout << totGasPumped << setw(5) << " Gallons" << endl;
    cout << totGasCost << setw(5) << " Dollars" << endl;
};
