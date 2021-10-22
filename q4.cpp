#include <iostream>
#include <cstdlib> // for exit()
#include <cctype>  // for tolower()

using namespace std;

class Month
{
public:
  Month(char c1, char c2, char c3);   //constructor to set month based on first 3 chars of the month name
  Month( int monthNumber);  //a constructor to set month base on month number, 1 = January etc.
  Month();   //a default constructor (what does it do? nothing)
  void getMonthByNumber(istream&);   //an input function to set the month based on the month number
  void getMonthByName(istream&);   //input function to set the month based on a three character input
  void outputMonthNumber(ostream&);   //an output function that outputs the month as an integer,
  void outputMonthName(ostream&);   //an output function that outputs the month as the letters.
  Month nextMonth();   //a function that returns the next month as a month object
   
  int monthNumber();

private:
  int month;
};

int main(){

}

Month::Month(char c1, char c2, char c3){

};

Month::Month( int monthNumber){

};        

Month::Month(){

};

void Month::getMonthByNumber(istream&){

};

void Month::getMonthByName(istream&){

};

void Month::outputMonthNumber(ostream&){

};

void Month::outputMonthName(ostream&){

};

Month Month::nextMonth(){

};

int Month::monthNumber(){

};