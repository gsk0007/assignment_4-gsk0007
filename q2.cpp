#include<iostream>
using namespace std;

// Class for input of temperature in kelvin and output in celsius and fahrenheit
class Temperature{
    public:
        // Funtion prototypes for getting and setting temperatures
        double getCelsius();
        double getKelvin();
        double getFahrenheit();
        void setCelsius();
        void setKelvin(double kelvin);
        void setFahrenheit();
    private:
        // Private variables for the same temperature in different units
        double kelvin, celsius, fahrenheit;
};

int main(){
    // Declaring temporary temperature variable to input and initializing the temperature class
    double kelvin;
    Temperature Tconverter;

    // Prompt user to input a temperature in kelvin
    cout << "Please enter a temperature in Kelvin: ";
    cin >> kelvin;

    // Use temperature class to set kelvin temperature and output the same temperature in celsius and fahrenheit
    Tconverter.setKelvin(kelvin);
    Tconverter.setCelsius();
    Tconverter.setFahrenheit();

    // Display temp in other units
    cout << "The temperature in celsius is: " << Tconverter.getCelsius() << endl;
    cout << "The temperature in fahrenheit is: " << Tconverter.getFahrenheit() << endl;
};


// ____________________________________________________________________________
// Temperature member functions
// Public function to return celsius temperature
double Temperature::getCelsius(){
    return celsius;
};
// Public function to return kelvin temperature
double Temperature::getKelvin(){
    return kelvin;
};
// Public function to return fahrenheit temperature
double Temperature::getFahrenheit(){
    return fahrenheit;
};
// Public function to set celsius temperature
void Temperature::setCelsius(){
    celsius = kelvin - 273.15;
};
// Public function to set kelvin temperature
void Temperature::setKelvin(double in){
    kelvin = in;
};
// Public function to set fahrenheit temperature
void Temperature::setFahrenheit(){
    fahrenheit = ((9.0/5.0)*celsius) + 32.0;
};
