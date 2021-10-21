#include<iostream>
using namespace std;

class Temperature{
    public:
        double getCelsius();
        double getKelvin();
        double getFahrenheit();
        void setCelsius();
        void setKelvin(double kelvin);
        void setFahrenheit();
    private:
        double kelvin, celsius, fahrenheit;
};

int main(){
    double kelvin;
    Temperature Tconverter;
    cout << "Please enter a temperature in Kelvin: ";
    cin >> kelvin;
    Tconverter.setKelvin(kelvin);
    Tconverter.setCelsius();
    Tconverter.setFahrenheit();

    // Display temp in other units
    cout << "The temperature in celsius is: " << Tconverter.getCelsius() << endl;
    cout << "The temperature in fahrenheit is: " << Tconverter.getFahrenheit() << endl;
};

double Temperature::getCelsius(){
    return celsius;
};

double Temperature::getKelvin(){
    return kelvin;
};

double Temperature::getFahrenheit(){
    return fahrenheit;
};

void Temperature::setCelsius(){
    celsius = kelvin - 273.15;
};

void Temperature::setKelvin(double in){
    kelvin = in;
};

void Temperature::setFahrenheit(){
    fahrenheit = ((9.0/5.0)*celsius) + 32.0;
};
