#include "family.h"
#include "careers.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

void introFunc();
void moneyCountsASCII();
void winASCII();
void loseASCII();
void quitASCII();
void titleScreen(); 
void rules();

void moneyCountsASCII() {
  cout << " /$$      /$$                                                "
          "/$$$$$$                                  /$$"
       << endl;
  cout << "| $$$    /$$$                                               /$$__  "
          "$$                                | $$"
       << endl;
  cout << "| $$$$  /$$$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$      | $$  "
          "\\__/  /$$$$$$  /$$   /$$ /$$$$$$$  /$$$$$$   /$$$$$$$"
       << endl;
  cout << "| $$ $$/$$ $$ /$$__  $$| $$__  $$ /$$__  $$| $$  | $$      | $$     "
          "  /$$__  $$| $$  | $$| $$__  $$|_  $$_/  /$$_____/"
       << endl;
  cout << "| $$  $$$| $$| $$  \\ $$| $$  \\ $$| $$$$$$$$| $$  | $$      | $$   "
          "   | $$  \\ $$| $$  | $$| $$  \\ $$  | $$   |  $$$$$$"
       << endl;
  cout << "| $$\\  $ | $$| $$  | $$| $$  | $$| $$_____/| $$  | $$      | $$    "
          "$$| $$  | $$| $$  | $$| $$  | $$  | $$ /$$\\____  $$"
       << endl;
  cout << "| $$ \\/  | $$|  $$$$$$/| $$  | $$|  $$$$$$$|  $$$$$$$      |  "
          "$$$$$$/|  $$$$$$/|  $$$$$$/| $$  | $$  |  $$$$//$$$$$$$/"
       << endl;
  cout << "|__/     |__/ \\______/ |__/  |__/ \\_______/ \\____  $$       "
          "\\______/  \\______/  \______/ |__/  |__/   \\___/ |_______/"
       << endl;
  cout << "                                            /$$  | $$" << endl;
  cout << "                                           |  $$$$$$/" << endl;
  cout << "                                            \\______/" << endl;
}

void winASCII() {
  cout << " /$$     /$$                                                        "
          "  /$$"
       << endl;
  cout << "|  $$   /$$/                                                        "
          " | $$"
       << endl;
  cout << " \\  $$ /$$//$$$$$$  /$$   /$$       /$$  /$$  /$$  /$$$$$$  "
          "/$$$$$$$ | $$"
       << endl;
  cout << "  \\  $$$$//$$__  $$| $$  | $$      | $$ | $$ | $$ /$$__  $$| $$__  "
          "$$| $$"
       << endl;
  cout << "   \\  $$/| $$  \\ $$| $$  | $$      | $$ | $$ | $$| $$  \\ $$| $$  "
          "\\ $$|__/"
       << endl;
  cout
      << "    | $$ | $$  | $$| $$  | $$      | $$ | $$ | $$| $$  | $$| $$  | $$"
      << endl;
  cout << "    | $$ |  $$$$$$/|  $$$$$$/      |  $$$$$/$$$$/|  $$$$$$/| $$  | "
          "$$ /$$"
       << endl;
  cout << "    |__/  \\______/  \\______/        \\_____/\\___/  \\______/ "
          "|__/  |__/|__/"
       << endl;
}

void loseASCII() {
  cout << " /$$     /$$                        /$$                       /$$"
       << endl;
  cout << "|  $$   /$$/                       | $$                      | $$"
       << endl;
  cout << " \\  $$ /$$//$$$$$$  /$$   /$$      | $$  /$$$$$$   /$$$$$$$ /$$$$$$"
       << endl;
  cout << "  \\  $$$$//$$__  $$| $$  | $$      | $$ /$$__  $$ /$$_____/|_  $$_/"
       << endl;
  cout << "   \\  $$/| $$  \\ $$| $$  | $$      | $$| $$  \\ $$|  $$$$$$   | $$"
       << endl;
  cout << "    | $$ | $$  | $$| $$  | $$      | $$| $$  | $$ \\____  $$  | $$ "
          "/$$"
       << endl;
  cout
      << "    | $$ |  $$$$$$/|  $$$$$$/      | $$|  $$$$$$/ /$$$$$$$/  |  $$$$/"
      << endl;
  cout << "    |__/  \\______/  \\______/       |__/ \\______/ |_______/    "
          "\\___/"
       << endl;
}

void quitASCII() {
  cout << "  ___        _ _   _   _" << endl;
  cout << " / _ \\ _   _(_) |_| |_(_)_ __   __ _" << endl;
  cout << "| | | | | | | | __| __| | '_ \\ / _` |" << endl;
  cout << "| |_| | |_| | | |_| |_| | | | | (_| |   _   _   _" << endl;
  cout << " \\__\\_\\__,_ |_|\\__|\\__|_|_| |_|\\__, |  (_) (_) (_)" << endl;
  cout << "                                |___/" << endl;
}

void rules() {
  cout << "\n\n\t\t================================================" << endl;
  cout << "\t\t /$$$$$$$            /$$" << endl;
  cout << "\t\t| $$__  $$          | $$" << endl;
  cout << "\t\t| $$  \\ $$ /$$   /$$| $$  /$$$$$$   /$$$$$$$" << endl;
  cout << "\t\t| $$$$$$$/| $$  | $$| $$ /$$__  $$ /$$_____/" << endl;
  cout << "\t\t| $$__  $$| $$  | $$| $$| $$$$$$$$|  $$$$$$" << endl;
  cout << "\t\t| $$  \\ $$| $$  | $$| $$| $$_____/ \\____  $$" << endl;
  cout << "\t\t| $$  | $$|  $$$$$$/| $$|  $$$$$$$ /$$$$$$$/" << endl;
  cout << "\t\t|__/  |__/ \\______/ |__/ \\_______/|_______/" << endl;
  cout << "\t\t================================================" << endl;

  cout << "\n\n\t\t 1) The objective of this game is to collect money, pay off "
          "debt, and reach savings goals."
       << endl;
  cout << "\t\t 2) The game will conclude after 12 turns, each of which "
          "represents a month."
       << endl;
  cout << "\t\t 3) You will be randomly assigned a family dynamic and job, "
          "which you will work with to budget and save for your goals."
       << endl;
  cout
      << "\t\t 4) You will have the opportunity to take out loans, but they "
         "must be repaid the next month,and you can only have one loan per game"
      << endl;
  cout << "\t\t 5) Random events will occur each month-- these may hurt or "
          "benefit you."
       << endl;
}

void titleScreen(){
  cout << "\t\t\t\t\n\nWELCOME TO...\n\n";
  moneyCountsASCII();
}

void introFunc() {
  cout << "\n=================================================================="
          "==================================================="
       << endl;
  int startChoice;


  cout << "\n\n\n\t\t\t\tWould you like to: " << endl;
  cout
      << "\t\t\t\t1) View the Rules\n\t\t\t\t2) Begin the game\n\t\t\t\t3) Exit"
      << endl;
  cin >> startChoice;
  while (startChoice < 1 || startChoice > 3) {
    cout << "\t\t\t\t This is not a valid option. Please try again." << endl;
    cout << "\t\t\t\tWould you like to: " << endl;
    cout << "\t\t\t\t1) View the Rules\n2) Begin the game\n3) Exit" << endl;
    cin >> startChoice;
  }
  if (startChoice == 1) {
    rules();
  }
  if (startChoice == 2) {
    // game func(s) here
  }
  if (startChoice == 3) {
    quitASCII();
    cout << "\n================================================================"
            "========================================"
         << endl;
    exit(0);
  }
}

void playAgain(bool restartGame) {
  int playAgainYN;
  cout << "\t\t\tWould you like to play again?";
  cout << "\n\t\t\t1) Yes";
  cout << "\n\t\t\t2) No";
  cin >> playAgainYN;
  while (playAgainYN != 1 || playAgainYN != 2) {
    cout << "\t\t\tInvalid choice" << endl;
    cout << "\n\t\t\tWould you like to play again?";
    cout << "\n\t\t\t1) Yes";
    cout << "\n\t\t\t2) No";
  }
  if (playAgainYN == 1) {
    cout << "\n\t\t\tGreat! Lets play again.";
    // Insert Function to reset game here
  } else if (playAgainYN == 2) {
    quitASCII();
    cout << "\n================================================================"
            "========================================"
         << endl;
    restartGame = false;
  }
}

class Background {
  vector<string> FamNames{"Jones",  "Smith", "Rose",    "Brown", "Wilson",
                          "Thomas", "Moore", "Jackson", "Lee",   "Harris"};

public:
  string AssignNames();
  int AssignFam();
  int famNum;
  string fullName;
};

string Background::AssignNames() {
  string firstName;
  string lastName;
  Background name;
  string fullName;

  cout << "What is your first name? ";
  cin >> firstName;

  srand(time(NULL));
  int randomNum = rand() % 9;
  lastName = name.FamNames[randomNum];
  fullName = firstName + " " + lastName;
  return fullName;
}

/*
int Background::AssignFam(){

  //replace this with fam vector
  srand(time(NULL));
  int randomNum = rand()%9;
  lastName= name.FamNames[randomNum];
  fullName = firstName + " " + lastName;
  return fullName;
}
*/

int main() {
  bool restartGame = true;
  Background test;
  test.fullName = test.AssignNames();
  FamilyInfo family = assignFam();
  Career career = assignCareer();

  cout << "family size " << family.size << endl;
  cout << "You have: ";
  for (int i = 0; i < family.members.size(); i++) {
    cout << "\na " << family.members[i];
    cout << " of " << family.ages[i] << " years old";
  }

  cout << "\nYou are a(n) " << career.job;
  cout << "\nYou make $" << career.salary << " a year\n";

  cout << "\nFull Name: " << test.fullName;

  titleScreen(); 
  do {
    introFunc();
  } while ((restartGame = true));

  if (restartGame == false) {
    cout << "Thank you for playing!\n\n";
    quitASCII();
  }
  return 0;
}