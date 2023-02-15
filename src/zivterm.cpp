#include <iostream>
#include <thread>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
using namespace chrono;



// DIRECTORY COMMAND
void dir(){
    string path;
    cout << "Enter Path: ";
    getline(cin, path);
    string thecmd = "dir ";
    thecmd.append(path);
    const char* cmd = thecmd.c_str();
    system(cmd);
    
}

// RUN COMMAND
void run(){
  string path;
  cout << "Enter Path: ";
  getline(cin, path);
  const char* thecmd = path.c_str();
  system(thecmd);
}
// MAKE DIRECTORY COMMAND
void makeDir(){
    string path;
    cout << "Enter Path: ";
    getline(cin, path);
    string thecmd = "md ";
    thecmd.append(path);
    const char* cmd = thecmd.c_str();
    system(cmd);
}
// The Calculator
void calc()
{
  float num1;
  float num2;
  float num3;
  char num3m;
  char op;

  cout << "Enter First Number: ";
  cin >> num1;
  cout << "Enter Second Number: ";
  cin >> num2;
  cout << "Do You Want A Third Number? [y/n]: ";
  cin >> num3m;
  if (num3m == 'y') {
    cout << "Enter Third Number: ";
    cin >> num3;
    cout << "Processed Values! \n";

  } else {
    cout << "Processed Values! \n";
  }
  cout << "Choose An Operator: ";
  cin >> op;
  if (op == '+') {
    cout << num1 + num2 + num3 << endl;
  } else if (op == '-') {
    cout << num1 - num2 - num3 << endl;
  } else if (op == '/') {
    cout << num1 / num2 / num3 << endl;
  } else if (op == '*') {
    cout << num1 * num2 * num3 << endl;
  }

  cout << "";
  
}
// The Game, This Took Me Way Too Long To Make
void game() {
  char choice1;
  char choice2;
  char choice3;
  system("cls");
  cout << "You Versus 'Entity'" << endl;
  cout << "Entity 100% | You 100%" << endl;
  cout << "" << endl;
  cout << "Your Choices: [1] Attack [2] Block [3] Super Attack (if goes wrong, "
          "you insta die)"
       << endl;
  cout << "" << endl;
  cout << "Choose The Number: ";
  cin >> choice1;
  if (choice1 == '1') {
    system("cls");
    cout << "You Took 50% of His Health!" << endl;
    cout << "You Versus 'Entity'" << endl;
    cout << "Entity 50% | You 100%" << endl;
    cout << "" << endl;
    cout << "Your Choices: [1] Attack [2] Block [3] Super Attack (if goes "
            "wrong, you insta die)"
         << endl;
    cout << "" << endl;
    cout << "Whats Your Choice: ";
    cin >> choice2;
    if (choice2 == '1') {
      system("cls");
      cout << "You Missed And He Took 50% of Your Health!" << endl;
      cout << "You Versus 'Entity'" << endl;
      cout << "Entity 50% | You 50%" << endl;
      cout << "" << endl;
      cout << "Your Choices: [1] Attack [2] Block [3] Super Attack (if goes "
              "wrong, you insta die)"
           << endl;
      cout << "" << endl;
      cout << "Whats Your Choice: ";
      cin >> choice3;
      if (choice3 == '1') {
        system("cls");
        cout << "You Took His Rest Of His Health" << endl;
        cout << "You Versus 'Entity'" << endl;
        cout << "Entity 0% | You 50%" << endl;
        cout << "" << endl;
        cout << "You Won!" << endl;
        cout << "--------------------------------------------------------------"
                "----"
             << endl;
      } else if (choice3 == '2') {
        system("cls");
        cout << "He Took The Rest Of Your Health Due Of A Failed Block" << endl;
        cout << "You Versus 'Entity'" << endl;
        cout << "Entity 50% | You 0%" << endl;
        cout << "" << endl;
        cout << "You Lost!" << endl;
        cout << "--------------------------------------------------------------"
                "----"
             << endl;
      } else if (choice3 == '3') {
        cout << "Failed Attack You Lost!" << endl;
      }
    } else if (choice2 == '2') {
      system("cls");
      cout << "You Blocked Him And He Fell Off A Cliff And Lost All His Health"
           << endl;
      cout << "You Versus 'Entity'" << endl;
      cout << "Entity 0% | You 100%" << endl;
      cout << "" << endl;
      cout << "YOU WON!" << endl;
      cout << "----------------------------------------------------------------"
              "--"
           << endl;
    } else if (choice2 == '3') {
      cout << "You Have Lost Stamina and lost all your health!" << endl;
    }

  } else if (choice1 == '2') {
    system("cls");
    cout << "He Took 50% of Your Health!" << endl;
    cout << "You Versus 'Entity'" << endl;
    cout << "Entity 100% | You 50%" << endl;
    cout << "" << endl;
    cout << "Your Choices: [1] Attack [2] Block [3] Super Attack (if goes "
            "wrong, you insta die)"
         << endl;
    cout << "" << endl;
    cout << "Whats Your Choice: ";
    cin >> choice2;
    if (choice2 == '1') {
      system("cls");
      cout << "You Took 50% Of His Health" << endl;
      cout << "You Versus 'Entity'" << endl;
      cout << "Entity 50% | You 50%" << endl;
      cout << "" << endl;
      cout << "Your Choices: [1] Attack [2] Block [3] Super Attack (if goes "
              "wrong, you insta die)"
           << endl;
      cout << "" << endl;
      cout << "Whats Your Choice: ";
      cin >> choice3;
      if (choice3 == '2') {
        system("cls");
        cout << "You Failed The Block And He Took the Rest Of Your Health"
             << endl;
        cout << "You Versus 'Entity'" << endl;
        cout << "Entity 50% | You 0%" << endl;
        cout << "" << endl;
        cout << "You Lost!" << endl;
        cout << "" << endl;
        cout << "----------------------------------------------------------"
             << endl;
      } else if (choice3 == '1') {
        system("cls");
        cout << "You Missed And He Took 50% of Your Health!" << endl;
        cout << "You Versus 'Entity'" << endl;
        cout << "Entity 50% | You 0%" << endl;
        cout << "" << endl;
        cout << "You Lose!" << endl;
        cout << "" << endl;
        cout << "---------------------------------------------" << endl;

      } else if (choice3 == '3') {
        cout << "You Ended Him! | YOU WON!!!! NO DIF!!!" << endl;
      }

    } else if (choice2 == '3') {
      cout << "You Have Lost Stamina and lost all your health!" << endl;
    } else if (choice2 == '2') {
      system("cls");
      cout << "You Failed The Block And He Took the Rest Of Your Health"
           << endl;
      cout << "You Versus 'Entity'" << endl;
      cout << "Entity 100% | You 0%" << endl;
      cout << "" << endl;
      cout << "You Lost!" << endl;
      cout << "" << endl;
      cout << "----------------------------------------------------------"
           << endl;
    }
  } else if (choice1 == '3') {
    cout << "You Have Lost Stamina and lost all your health!" << endl;
  } else {
    cout << "Wrong Input, Ending Game.." << endl;
    system("cls");
  }
}

// Main Shell Code And Some Small Commands HardLined Here
int main() {
  system("cls");
  cout << "--------------------------------------------------------" << endl;
  cout << "ZivTerm v0.2c | Copyright 'zvqle' All Rights Reserved" << endl;
  cout << "--------------------------------------------------------" << endl;
  cout << "\n";
  
  cout << "Type 'help' To See Commands \n";
  cout << "\n";

  string shell;
  for (auto& c : shell)
    c = std::toupper(c);
  int zvqle = 9;
  while (zvqle == 9) {
    cout << ":- ";
    getline(cin, shell);
    if (shell == "help") {
      cout << "calc - A Minimal Calculator" << endl;
      cout << "exit - exits zivterm" << endl;
      cout << "clear - clears the screen" << endl;
      cout << "reset - creates another instance of ZivTerm on top of ZivTerm"
           << endl;
      cout << "game - A Little Game, Much Imporved From The Other Ones I've Made" << endl;
      cout << "dir - lists directory of the PATH" << endl;
      cout << "run - runs file when you input PATH" << endl;
      cout << "makedir - makes a directory" << endl;

      } else if (shell == "exit") {
      return 0;
    } else if (shell == "clear") {
      system("cls");
    } else if (shell == "calc" ) {
      calc();
    } else if (shell == "") {
      cout << "\n";
    } else if (shell == "reset") {
      system("./main");
    } else if (shell == "ver") {
      cout << "ZivTerm™ Version 0.2c \n";
    } else if (shell == "game") {
      game();
    } else if (shell == "dir") {
      dir();
    } else if (shell == "run") {
      run();
    } else if (shell == "makedir"){
      makeDir();
    }
    else {
      cout << "Wrong Input, Type 'Help' For A List Of Commands" << endl;
    }
  }

  return 0;
}
