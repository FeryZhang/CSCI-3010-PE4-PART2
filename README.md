# CSCI-3010-PE4-PART2

Person 1: Fengyuan Zhang
Person 2: Yuxi Liu

Brief description: In this assignment, we create a simple Tic-Tac-Toe game without win-condition. The original plan is to use "X" , "O" to represent the chess. However, when we worked on it, we found int_array will be easier for this assignment instead of char_array. Hence, we use "0" and "11" to express the chess.

Function:
Person1: 
CreateBoard: simply create a game board. Choose an integer array[10] for represent 1-9(from arr[1]to arr[9]). skip arr[0] for making print work easier.
PlaceMarker:
update the board based on the users' input. If users's input is the same as one of board grid, update it.
Also, we check (player%2) (odd/even) to decide which player is currently entering choide. After checking, set the grid as above design.

Person2:
DisplayBoard: We need a display the game board for users; first, we need to let them know the type of chess; also, we need to cout our array to represent the chess in our designed grid.
GetPlayerChoice: Using cin to get user's choice; use cout to remind users to give their choice. Finally, return users' choice. In future main function, we will create a value to receive users' choice for game to play. 

How to run the code: After merging file, set the path and create exe file for running. Here is a example in my laptop:

cd "/Users/apple/Desktop/PE4/" && g++ TicTacToe.cpp -o TicTacToe && "/Users/apple/Desktop/PE4/"TicTacToe

