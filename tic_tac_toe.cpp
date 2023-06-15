#include <iostream>
// #include <stdlib.h>
#include <windows.h>
// #include <vector>
using namespace std;
int main()
{
    int choice;
    int i = 0, j = 0;
    char player;
    char ask_for_play;
    
Again_play:
    char arr[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // initially empty all matrix
    int cnt = 0;                                                          // how many time we enter the successfully key  ->9
    int ub = 2;                                                           // ub for the player2 [O];
    int lb = 1;                                                           // lb for the plqyer1[X];
    int choose_player = (rand() % (ub - lb + 1)) + lb;                    // which player randomly choose by computer
    if (choose_player == 1)
    {
        player = 'X';
    }
    else
    {
        player = 'O';
    }
     bool winner = false;
    // this matrix is used to check thw winner player
    pair<int, int> check_winner[8][3] = {{{0, 0}, {0, 1}, {0, 2}}, {{1, 0}, {1, 1}, {1, 2}}, {{2, 0}, {2, 1}, {2, 2}}, {{0, 0}, {1, 0}, {2, 0}}, {{0, 1}, {1, 1}, {2, 1}}, {{0, 2}, {1, 2}, {2, 2}}, {{0, 0}, {1, 1}, {2, 2}}, {{0, 2}, {1, 1}, {2, 0}}};
    while (true)
    {
    Display_winner:
        system("cls"); // it is used to clear the console screen
        cout << "\t\t\t\t\ttic tac toe game\n";
        cout << "\t\t\t\t\tplayer1 [X]\n\t\t\t\t\tplayer2 [O]\n\n";
        cout << "\t\t\t\t\t     |     |     \n";
        cout << "\t\t\t\t\t  " << (arr[0][0]) << "  |  " << arr[0][1] << "  |  " << arr[0][2] << "  \n";
        cout << "\t\t\t\t\t_____|_____|_____\n";
        cout << "\t\t\t\t\t     |     |     \n";
        cout << "\t\t\t\t\t  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << "  \n";
        cout << "\t\t\t\t\t_____|_____|_____\n";
        cout << "\t\t\t\t\t     |     |     \n";
        cout << "\t\t\t\t\t  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << "  \n";
        cout << "\t\t\t\t\t     |     |     \n";

        if (winner || cnt==9)  //check conditin either count is 9 or won any player
        {
            system("cls");
            if(winner)
            cout << "\n\t\t\t congratulations,player " << player << " has won the match\n";
            else
            cout<<" \t\t\t\t\tmatch draw !! \n";
            cout << " \n\t\t\t do yo want to play again? y/n  ->";
            Beep(300, 1000);     // alarm after any players win or match draw
            cin >> ask_for_play; // ask for the players want to play or not --->y-yes,n-not
            if (ask_for_play == 'y')
            {
                goto Again_play; // if player wants to play again then cursor goto Again_play label
            }
            else
            {
                return 0; // if players does not want to play the return
            }
        }
        bool turn = false;
        cout << "\n\t\t\t\t\tenter player " << player << " choice -->";
        cin >> choice; // enter players choice where player want to insert their symbols
        switch (choice)
        {
        case 1:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";
            break;
        case 2:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 3:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 4:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 5:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 6:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 7:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 8:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;
        case 9:
            if (arr[(choice - 1) / 3][(choice - 1) % 3] == ' ')
            {
                cnt++;
                arr[(choice - 1) / 3][(choice - 1) % 3] = player;
                turn = true;
            }
            else
                cout << choice << " already filled!!\n";

            break;

        default:
            cout << "invalid case\n";
            break;
        }

        for (int i = 0; i < 8; i++)  //loop for the check winner
        {
            if ((arr[check_winner[i][0].first][check_winner[i][0].second] != ' ') && (arr[check_winner[i][0].first][check_winner[i][0].second] == arr[check_winner[i][1].first][check_winner[i][1].second]) && (arr[check_winner[i][1].first][check_winner[i][1].second] == arr[check_winner[i][2].first][check_winner[i][2].second]))
            {
                winner = true;
                goto Display_winner;
            }
        }
        if (turn)
        {
            player = player == 'X' ? 'O' : 'X';   //change player
        }
    }
}