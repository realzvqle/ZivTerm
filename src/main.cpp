#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <dirent.h>
#include <cstring>
#include <stdio.h>
#include <thread>
#include <algorithm>
#include <tchar.h>


using namespace std;
typedef HWND *hwnd;


/*
  _______    _______                             
 |___  (_)  |__   __|                  _     _   
    / / ___   _| | ___ _ __ _ __ ___ _| |_ _| |_ 
   / / | \ \ / / |/ _ \ '__| '_ ` _ \_   _|_   _|
  / /__| |\ V /| |  __/ |  | | | | | ||_|   |_|  
 /_____|_| \_/ |_|\___|_|  |_| |_| |_|  

 Version --DEBUG--

 Copyright "zvqle", all rights reserved


  */




struct idk{
  string ver = "ZivTerm++ Version 0.3";
  string input;
};

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

void cmd(){
  system("cmd");
}

// RUN COMMAND
void runasadmin(HWND hwnd){
  string path;
  cout << "Enter Path: ";
  getline(cin, path);
  const char* thecmd = path.c_str();
  LPCSTR out = (LPCSTR) thecmd;
  ShellExecute(hwnd, _T("runas"), out, 0, 0, SW_SHOWNORMAL);
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

  cout << "-------------------------------------------------------------------------";
  
}

void run(){
  string path;
  cout << "Enter Path: ";
  getline(cin, path);
  const char* thecmd = path.c_str();
  LPCSTR out = (LPCSTR) thecmd;
  ShellExecute(NULL, _T("open"), out, 0, 0, SW_SHOWNORMAL);


}

void directory(){
  system("dir");
}
void ipgen(){
  srand(time(NULL));
  int part1 = rand() % 255;
  int part2 = rand() % 255;
  int part3 = rand() % 255;
  int part4 = rand() % 255;
  cout << part1 << "." << part2 << "." << part3 << "." << part4 << endl;
}

void devlock(){
  string lock;
  struct idk idkd;
  cout << "DEVLOCK ENABLED" << endl;
  cout << endl << idkd.ver << endl << endl;
  cout << "The Developer Is Adding New Features Into ZivTerm++, So Its Locked Currently" << endl << endl;
  cout << "Theres A Key To Enter ZivTerm++ At This, But Only The Developers Know" << endl << endl;
  cout << "Enter Key: ";
  cin >> lock;
  if(lock == "81607"){
    cout << "Correct!" << endl;
    Sleep(1000);
    system("cls");
  }
  else{
    cout << "Wrong Key!" << endl;
    Sleep(2000);
    exit(0);
  }

  
}


void boot(){
  system("cls");
  cout << "------------------------------------------------" << endl;
  cout << "ZivTerm++, Copyright 'zvqle' All Rights Reserved" << endl;
  cout << "------------------------------------------------" << endl << endl;
  Sleep(2);
  cout << "Welcome" << endl << endl;
  cout << "Loading ZivTerm         ";
  for(int i = 0; i < 25; i++){
    cout << "\b\b\b\b\b\b\b\b[      ]" << flush;
    Sleep(10);
    cout << "\b\b\b\b\b\b\b\b[#     ]" << flush;
    Sleep(10);
    cout << "\b\b\b\b\b\b\b\b[##    ]" << flush;
    Sleep(10);
    cout << "\b\b\b\b\b\b\b\b[###   ]" << flush;
    Sleep(10);
    cout << "\b\b\b\b\b\b\b\b[####  ]" << flush;
    Sleep(10);
    cout << "\b\b\b\b\b\b\b\b[##### ]" << flush;
    Sleep(10);
    cout << "\b\b\b\b\b\b\b\b[######]" << flush;
    Sleep(10);
  }

  
}

void shell(HWND hwnd){
  system("cls");
  cout << "Welcome To..." << endl << R"( 
  _______    _______                             
 |___  (_)  |__   __|                  _     _   
    / / ___   _| | ___ _ __ _ __ ___ _| |_ _| |_ 
   / / | \ \ / / |/ _ \ '__| '_ ` _ \_   _|_   _|
  / /__| |\ V /| |  __/ |  | | | | | ||_|   |_|  
 /_____|_| \_/ |_|\___|_|  |_| |_| |_|           
                                                 )" << endl << endl;
  Sleep(1000);
  cout << "Type 'Help' To See Commands" << endl << endl;
  Sleep(2000);
  string shelinput;
  struct idk shellline;
  shelinput = shellline.input;
  while(true){
    cout << ":~ ";
    getline(cin, shellline.input);
    transform( shellline.input.begin(), shellline.input.end(), shellline.input.begin(), []( char c ) { return ( tolower( c ) ); } );
    if(shellline.input == "ver"){
      cout << shellline.ver << endl;
    }
    else if(shellline.input == "help"){

      cout << "ver - Tells The ZivTerm++ Version | ip - genrates a random ip" << endl;
      cout << "mkdir - Makes A Directory         | dir - Shows A Directory" << endl;
      cout << "sudo - Runs An Exectuble As Admin | calc - Minimal Console Calculator" << endl;
      cout << "run - runs an exectuble           | cmd - Runs The Command Prompt" << endl;
  
    }
    else if(shellline.input == "ip"){
      ipgen();
    }
    else if(shellline.input == "dir"){
      dir();
    }
    else if(shellline.input == "sudo"){
      runasadmin(hwnd);
    }
    else if(shellline.input == "mkdir"){
      makeDir();
    }
    else if(shellline.input == "calc"){
      calc();
    }
    else if(shellline.input == ""){
      cout << "" << endl;
    }
    else if(shellline.input == "exit"){
      exit(1);
    }
    else if(shellline.input == "run"){
      run();
    }
    else if(shellline.input == "cmd"){
      cmd();
    }
    else{
      cout << shellline.input << " is not a valid command, type \"Help\" for a list of commands" << endl;
    }
  }
}
int main(HWND hwnd) {
  system("cls");
  int devlocsk = 1;
  if(false){
    devlock();
  }
  boot();
  shell(hwnd);
  return 0;
}



/*

To Compile Type Into The command prompt

g++ main.cpp my.res -static-libstdc++ -static-libgcc

enjoy!


*/