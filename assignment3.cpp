#include <iostream>
using namespace std;
class TicTacToe
{
public:
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    // creating 2D array to get input from user
    // array positions-{{00,01,02},{10,11,12},{20,21,22}}
    string n1 = " "; // for player 1 name
    string n2 = " "; // for player 2 name
    char token = 'X';
    int row;
    int column;
    bool tie = false;
    void getInput()
    {
        // Structure of TIC TAC TOE
        cout << "   |    |   \n";                                                               // vertical lines
        cout << " " << board[0][0] << " | " << board[0][1] << "  | " << board[0][2] << "   \n"; // displaying numbers on board
        cout << "___|____|___\n";                                                               // horizontal lines
        cout << "   |    |   \n";
        cout << " " << board[1][0] << " | " << board[1][1] << "  | " << board[1][2] << "   \n";
        cout << "___|____|___\n";
        cout << "   |    |   \n";
        cout << " " << board[2][0] << " | " << board[2][1] << "  | " << board[2][2] << "   \n";
        cout << "   |    |   \n";
    }
    void check()
    {
        int digit;

        // for player1...
        if (token == 'X')
        {
            cout << n1 << " enter the number to place your token: " << endl;
            cin >> digit;
        }
        // for player2...
        else
        {
            cout << n2 << " enter the number to place your token: " << endl;
            cin >> digit;
        }
        // checking if the number is valid or not
        if (digit >= 1 && digit <= 9)
        {
            row = (digit - 1) / 3;
            column = (digit - 1) % 3;
        }
        else // if the number is not valid
        {
            cout << "Invalid input. Please enter a number between 1 to 9." << endl;
            return;
        } //
        // checking if there is unused space on the board
        if (board[row][column] != 'X' && board[row][column] != 'O')
        {
            board[row][column] = token;
            token = (token == 'X') ? 'O' : 'X';
        }
        else
        {
            cout << "There is no empty space on the board. Please choose another number." << endl;
        }
    }
    // function to check if any player has won the game or it is a draw.
    bool checkWinner()
    {
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            {
                return true; // for rows and columns
            }
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            return true; // for diagonals
        }
        // checking for a tie
        tie = true;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    tie = false;
                    break;
                }
            }
            if (!tie)
                break;
        }
        return tie;
    }
};
int main()
{
    TicTacToe t;
    cout << "***TIC TAC TOE***" << endl;
    cout << "Token for Player 1: X" << endl;
    cout << "Token for Player 2: O" << endl;
    cout << "Player 1 enter your name: " << endl;
    cin >> t.n1;
    cout << "Player 2 enter your name: " << endl;
    cin >> t.n2;
    cout << t.n1 << " is Player 1." << endl;
    cout << t.n1 << " will play first." << endl;
    cout << t.n2 << " is Player 2." << endl;
    cout << t.n2 << " will play second." << endl;

    while (!t.checkWinner())
    {
        t.getInput();
        t.check();
    }
    if (t.tie)
    {
        cout << "The game is a draw." << endl;
    }
    else
    {
        cout << (t.token == 'X' ? t.n2 : t.n1) << " won the game!" << endl;
    }
    return 0;
}
