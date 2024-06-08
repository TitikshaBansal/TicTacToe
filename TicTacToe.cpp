#include <bits/stdc++.h>
using namespace std;
int a1, a2, b1, b2;

// function for checking if latest move lead to a win.
bool checkIfWin(char update, vector<vector<char>> &arr)
{
    for (int i = 0; i < 3; i++)
    {
        // checking rows
        if (arr[i][0] == update && arr[i][1] == update && arr[i][2] == update)
        {
            return true;
        }

        // checking columns
        if (arr[0][i] == update && arr[1][i] == update && arr[2][i] == update)
        {
            return true;
        }
    }
    // checking diagonals
    if (arr[0][0] == update && arr[1][1] == update && arr[2][2] == update)
    {
        return true;
    }
    if (arr[0][2] == update && arr[1][1] == update && arr[2][0] == update)
    {
        return true;
    }
    return false;
}

// function to update and check the board for the current player's turn.
int nextTurn(int x, int y, char update, bool *winner, int cont, vector<vector<char>> &arr)
{
    // updating matrix
    arr[x][y] = update;

    // printing matrix
    cout << "\n Updated Board: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // check if win
    bool win = checkIfWin(update, arr);

    // printing the winner if any
    if (win == true)
    {
        cout << "\n We have a winner!! \n";
        cout << "\n player " << update << " has won the game! \n";
        *winner = false;
        cout << "Do you want a rematch?\n Enter 1 if yes, otherwise 0.\n";
        cin >> cont;
    }
    return cont;
}
int main()
{
    int play = 1;
    while (play != 0)
    {
        vector<vector<char>> arr{{'I', 'I', 'I'}, {'I', 'I', 'I'}, {'I', 'I', 'I'}};
        int a1, a2, b1, b2, count = 0;
        char player1 = 'X', player2 = 'O';
        bool winner = true;
        cout << "Here are some rules for the game:\n Player1's symbol is \"X\". \n ";
        cout << "Player2's symbol is \"O\". \n No overwriting is allowed. \n";
        cout << "Players you need to provide input in form of [row column] format. Row1=0, Row2=1, Row3=2, similarly for columns.\n Let the game start \n";
        cout << "Initialising the Board.\n";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        while (winner)
        {
        move1:
            cout << "Player1, your turn: \n";
            cin >> a1 >> a2;
            if (a1 >= 3 || a2 >= 3 || arr[a1][a2] == 'X' || arr[a1][a2] == 'O')
            {
                cout << "Invalid move. enter the correct index.\n";
                goto move1;
            }
            int temp = play;
            play = nextTurn(a1, a2, player1, &winner, temp, arr);
            count++;
            if (play==0){
                return 0;

            }
            // checking if match is draw or not.
            if (count == 9)
            {
                cout << "Match Draw!";
                cout << "Do you want a rematch?\n Enter 1 if yes, otherwise 0.\n";
                cin >> play;
                break;
            }
        move2:
            if (winner == true)
            {
                cout << "Player2, your turn: \n";
                cin >> b1 >> b2;
                if (b1 >= 3 || b2 >= 3 || arr[b1][b2] == 'X' || arr[b1][b2] == 'O')
                {
                    cout << "Invalid move. enter the correct index.\n";
                    goto move2;
                }
                int temp2 = play;
                play = nextTurn(b1, b2, player2, &winner, temp2, arr);
                count++;
            }
        }
    }
    return 0;
}
