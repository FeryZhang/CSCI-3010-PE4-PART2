#include <iostream>
#include <string>
using namespace std;




void CreateBoard(int a[10]);
void DisplayBoard(int square[10]);
int GetPlayerChoice();
void PlaceMarker();

void CreateBoard(int a[10])
{   
    for (int i =0; i<10;i ++){
        a[i] = i;
    }

}

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

void PlaceMarker(int a[10], int mark, int player)
{
    for (int i = 0; i<10; i++){
        if(a[i] == mark)
            if (player%2 == 1)
            {
                a[i] = 0;
            
            }
            else{
                a[i] = 11;
            }
    }


}


int main()
{
    int mark = 0;
    int turn_count = 1;
    int player = 1;
    int a[10];
    CreateBoard(a);
    DisplayBoard(a);
    while(turn_count < 10)
    {
        mark = GetPlayerChoice();
        PlaceMarker(a,mark,player);
        DisplayBoard(a);
        turn_count++;
        player++;
    }


}
