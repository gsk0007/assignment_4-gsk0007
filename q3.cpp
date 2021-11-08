#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
// Player class for storing a player's name and score
class Player{
  public:
    // Overloaded constructors 
    Player();
    Player(int newScore, string newname);
    // Setters
    void setName(string newName);
    void setScore(int newScore);
    // Getters
    string getName();
    int getScore();
  private:
    // Private variables of name and score
    string name;
    int score;
};

int main(){
  // Declare variables for menu selection and temporary variables for initializing a player object
  int menu;
  int tempScore;
  string tempName;
  // Declare a vector of player objects and its max size
  const int MAX_PLAYERS = 10;
  vector<Player> Players;

  while(menu!=5){
    // Menu for choosing action
    cout << "[1] Add a new player" << endl
        << "[2] Print all" << endl
        << "[3] See player score" << endl
        << "[4] Remove player" << endl
        << "[5] Exit" << endl;
    cin >> menu;
    // Validate menu input
    while(menu < 1 || menu > 5){
      cout << "Please enter a valid selection: ";
      cin >> menu;
    };
    // Do something based on menu choice
    switch (menu){
    case 1:{
      // Add a new player
      if(Players.size() < MAX_PLAYERS){
        cout << "Please Enter a name and score\nName: ";
        cin >> tempName;
        cout << "Score: ";
        cin >> tempScore;
        Player newplayer(tempScore, tempName);
        Players.push_back(newplayer);
      }else{
        cout << "There are already 10 players, please remove one to add another.";
      }
      break;
    }
    case 2:{
      // Print all players and scores
      cout << left <<setw(10) << "Name" << setw(10) << "Score" << endl;
      for(int i = 0; i < Players.size(); i++){
        cout << left << setw(10) << Players[i].getName() << setw(10) << Players[i].getScore() << endl; 
      }
      cout << endl;
      break;
    }
    case 3:{
      // Search for name
      string nameSearch;
      bool nameFound = false;
      cout << "Enter a name to search for: ";
      cin >> nameSearch;
      for(int i = 0; i < Players.size(); i++){
        if(nameSearch == Players[i].getName()){
          cout << left << "Score: " << Players[i].getScore() << endl;
          nameFound = true;
          break;
        } 
      }
      if(!nameFound){
        cout << "Sorry there is no player with this name.";
      }
      break;
    }
    case 4:{
      // Remove player by name
      string nameSearch;
      int nameLoc = -1;
      cout << "Enter a name to remove: ";
      cin >> nameSearch;
      for(int i = 0; i < Players.size(); i++){
        if(nameSearch == Players[i].getName()){
          nameLoc = i;
          break;
        } 
      }
      if(nameLoc != -1){
        Players.erase(Players.begin() + nameLoc);
      } else {
        cout << "No players removed" << endl;
      }
      break;
    }
    case 5:{
      // exit
      break;
    }
    default:{
      exit(1);
    }
    }
  } 
}

// Functions
// Constructor for player class with default values
Player::Player(){
  name = "";
  score = 0;
};
// Constructor for player class with parameters
Player::Player(int newScore, string newName){
  name = newName;
  score = newScore;
};
// Setters
void Player::setName(string newName){
  name = newName;
};
void Player::setScore(int newScore){
  score = newScore;
};

// Getters
string Player::getName(){
  return name;
};
int Player::getScore(){
  return score;
};

