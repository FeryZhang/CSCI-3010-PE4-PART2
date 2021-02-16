#include <iostream>
#include <string>
using namespace std;




void CreateBoard(int a[10]);
void PlaceMarker();

void CreateBoard(int a[10])
{   
    for (int i =0; i<10;i ++){
        a[i] = i;
    }

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
