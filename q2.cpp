#include<iostream>
using namespace std;

class Temperature{
    public:
        double getCelsius();
        double getKelvin();
        double getFahrenheit();
        void setCelsius(double celsius);
        void setKelvin(double kelvin);
        void setFahrenheit(double fahrenheit);
    private:
        double kelvin, celsius, fahrenheit;
};

int main(){

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
    celsius = kelvin + 273.15;
};

void Temperature::setKelvin(double kelvin){
    kelvin = kelvin;
};

void Temperature::setFahrenheit(){
    fahrenheit = (9.0/5)*celsius + 32;
};
