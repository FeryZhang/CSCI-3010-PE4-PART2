#include <iostream>
#include <string>
using namespace std;

void DisplayBoard(int square[10]);
int GetPlayerChoice();

void DisplayBoard(int square[10])
{
    cout << "\nWelcome to Game: Tic Tac Toe\n";
    cout << "Player 1 (0)" << endl;
    cout << "Player 2 (11)" << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
}

int GetPlayerChoice()
{
    int choice;
    cout << "Enter a number for putting your step:  "<< endl;
    cin >> choice;
    return choice;
}