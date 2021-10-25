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
  void getMonthByNumber(istream& in);   //an input function to set the month based on the month number
  void getMonthByName(istream& in);   //input function to set the month based on a three character input
  void outputMonthNumber(ostream& out);   //an output function that outputs the month as an integer,
  void outputMonthName(ostream& out);   //an output function that outputs the month as the letters.
  Month nextMonth();   //a function that returns the next month as a month object
   
  int monthNumber();

private:
  int monthNum;
};

int main(){
  // Testing constuctor from chars
  Month m('j','a','n');
  m.outputMonthName(cout);
  cout << " ";
  m.outputMonthNumber(cout);
  cout << endl;

  // Testing constuctor from int
  Month m(2);
  m.outputMonthName(cout);
  cout << " ";
  m.outputMonthNumber(cout);
  cout << endl;

  // Testing next month
  m = m.nextMonth();
  m.outputMonthName(cout);
  cout << " ";
  m.outputMonthNumber(cout);
  cout << endl;

  // Testing Input
  m.getMonthByName('a','p','r')
  m.outputMonthName(cout);
  cout << " ";
  m.outputMonthNumber(cout);
  cout << endl;

}

Month::Month(char c1, char c2, char c3){
  c1 = tolower(c1);
  c2 = tolower(c2);
  c3 = tolower(c3);

  if (c1 == 'j' && c2 == 'a' && c3 == 'n'){
    monthNum = 1;
  } else if (c1 == 'f' && c2 == 'e' && c3 == 'b'){
    monthNum = 2;
  } else  if (c1 == 'm' && c2 == 'a' && c3 == 'r'){
    monthNum = 3;
  } else  if (c1 == 'a' && c2 == 'p' && c3 == 'r'){
    monthNum = 4;
  } else  if (c1 == 'm' && c2 == 'a' && c3 == 'y'){
    monthNum = 5;
  } else  if (c1 == 'j' && c2 == 'u' && c3 == 'n'){
    monthNum = 6;
  } else  if (c1 == 'j' && c2 == 'u' && c3 == 'l'){
    monthNum = 7;
  } else  if (c1 == 'a' && c2 == 'u' && c3 == 'g'){
    monthNum = 8;
  } else  if (c1 == 's' && c2 == 'e' && c3 == 'p'){
    monthNum = 9;
  } else  if (c1 == 'o' && c2 == 'c' && c3 == 't'){
    monthNum = 10;
  } else  if (c1 == 'n' && c2 == 'o' && c3 == 'v'){
    monthNum = 11;
  } else  if (c1 == 'd' && c2 == 'e' && c3 == 'c'){
    monthNum = 12;
  } else {
    cout << "Sorry that is not a month";
    exit(1);
  }
};

Month::Month( int monthNumber){
  monthNum = monthNumber;
};        

Month::Month(){

};

void Month::getMonthByNumber(istream& in){
  in >> monthNum;
};

void Month::getMonthByName(istream& in){
  char c1, c2, c3;
  in >> c1 >> c2 >> c3;
  c1 = tolower(c1);
  c2 = tolower(c2);
  c3 = tolower(c3);

  if (c1 == 'j' && c2 == 'a' && c3 == 'n'){
    monthNum = 1;
  } else if (c1 == 'f' && c2 == 'e' && c3 == 'b'){
    monthNum = 2;
  } else  if (c1 == 'm' && c2 == 'a' && c3 == 'r'){
    monthNum = 3;
  } else  if (c1 == 'a' && c2 == 'p' && c3 == 'r'){
    monthNum = 4;
  } else  if (c1 == 'm' && c2 == 'a' && c3 == 'y'){
    monthNum = 5;
  } else  if (c1 == 'j' && c2 == 'u' && c3 == 'n'){
    monthNum = 6;
  } else  if (c1 == 'j' && c2 == 'u' && c3 == 'l'){
    monthNum = 7;
  } else  if (c1 == 'a' && c2 == 'u' && c3 == 'g'){
    monthNum = 8;
  } else  if (c1 == 's' && c2 == 'e' && c3 == 'p'){
    monthNum = 9;
  } else  if (c1 == 'o' && c2 == 'c' && c3 == 't'){
    monthNum = 10;
  } else  if (c1 == 'n' && c2 == 'o' && c3 == 'v'){
    monthNum = 11;
  } else  if (c1 == 'd' && c2 == 'e' && c3 == 'c'){
    monthNum = 12;
  } else {
    cout << "Sorry that is not a month";
    exit(1);
  }
  
};

void Month::outputMonthNumber(ostream& out){
  out << monthNum;
};

void Month::outputMonthName(ostream& out){
  switch (monthNum)
  {
  case 1:
    out << "Jan";
    break;
  case 2:
    out << "Feb";
    break;
  case 3:
    out << "Mar";
    break;
  case 4:
    out << "Apr";
    break;
  case 5:
    out << "May";
    break;
  case 6:
    out << "Jun";
    break;
  case 7:
    out << "Jul";
    break;
  case 8:
    out << "Aug";
    break;
  case 9:
    out << "Sep";
    break;
  case 10:
    out << "Oct";
    break;
  case 11:
    out << "Nov";
    break;
  case 12:
    out << "Dec";
    break;
  default:
    exit(1);
  }
};

Month Month::nextMonth(){
  int nextMonth = monthNum +1;
  if(nextMonth == 13){
    nextMonth = 1;
  }
  return Month(nextMonth);
};

int Month::monthNumber(){
 return monthNum;
};