#include <iostream>

using namespace std;

// Create Introduction
void intro()
{
    std::cout << "========================\n";
    std::cout << "Welcome to Tic-Tac-Toe\n";
    std::cout << " ========================\n";
}

    // Create array of empty board stocks
    string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    int player = 1;
    int position = 0;

void boardDisplay()
{
    std::cout << "     |     |      \n";
    std::cout << "  0  |  1  |  2   \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  3  |  4  |  5   \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  6  |  7  |  8   \n";
    std::cout << "     |     |      \n\n";
}

void gameBoard()
{
    std::cout << "   |   |   \n";
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    std::cout << "___|___|___\n";
    std::cout << "   |   |   \n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    std::cout << "___|___|___\n";
    std::cout << "   |   |   \n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    std::cout << "   |   |   \n";
}



// Determine if three spots in a row exist 
bool isWinner()
{
    bool winner = false;

    if (board[0] == board[1] && board[1] == board[2] && board[0] != " ")
    {
        winner = true;
    }
    else if (board[0] == board[4] && board[4] == board[8] && board[0] != " ")
    {
        winner = true;
    }
    else if (board[0] == board[3] && board[3] == board[6] && board[0] != " ")
    {
        winner = true;
    }
    else if (board[1] == board[4] && board[4] == board[7] && board[1] != " ")
    {
        winner = true;
    }
    else if (board[2] == board[5] && board[5] == board[8] && board[2] != " ")
    {
        winner = true;
    }
    else if (board[3] == board[4] && board[4] == board[5] && board[3] != " ")
    {
        winner = true;
    }
    else if (board[6] == board[7] && board[7] == board[8] && board[6] != " ")
    {
        winner = true;
    }
    return winner;
}

