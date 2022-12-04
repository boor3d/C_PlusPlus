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


// Show Board to User 
void boardDisplay()
{
    std::cout << "     |     |      \n";
    std::cout << "  1  |  2  |  3   \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  4  |  5  |  6   \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  7  |  8  |  9   \n";
    std::cout << "     |     |      \n\n";
}


// Interactive Board For Game
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

bool boardFilled()
{
    bool filled = true;

    for (int i = 0; i < 9; i++)
    {
        if (board[i] == " ")
        {
            filled = false;
        }
    }

    return filled;
}


void setPosition()
{
    cout << "Player " << player << "'s Turn (ENTER 1-9): ";

    while (!(cin >> position))
    {
        cout << "Player " << player << ", please enter a valid number between 1 and 9: ";
        cin.clear();
        cin.ignore();
    }

    cout << "\n";


    while (board[position-1] != " ")
    {
        cout << "Oops! Somebody is already there!";

        cout << "Player" << player << "'s Turn (ENTER 1-9): ";
        cin >> position;

        cout << "\n";
        
    }  
}


void updateBoard()
{
    if (player % 2 == 1)
    {
        board[position-1] = "X";
    }
    else
    {
        board[position-1] = "O";
    }
}

void changePlayer()
{
    if (player == 1)
    {
        player ++;
    }
    else
    {
        player --;
    }  
}

void takeTurn()
{
    while (!isWinner() && !boardFilled())
    {
        setPosition();
        updateBoard();
        changePlayer();
        gameBoard();
    }
}


void endGame()
{
    if (isWinner())
    {
        cout << "You win!";
    }
    else
    {
        cout << "It's a draw!";
    }
}