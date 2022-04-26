#include <stdio.h>

#define SIZE 15

void printBoard(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Return 1 if there is a winner
// Return 0 if no winner
int checkWinner(int row, int column, char board[SIZE][SIZE])
{
    int count = 1;
    char player = board[row][column];

    // check left
    int checkColumn = column - 1;
    while (checkColumn >= 0)
    {
        if (board[row][checkColumn] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkColumn--;
    }

    // check right
    checkColumn = column + 1;
    while (checkColumn < SIZE)
    {
        if (board[row][checkColumn] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkColumn++;
    }

    // check up
    int checkRow = row - 1;
    while (checkRow >= 0)
    {
        if (board[column][checkRow] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow--;
    }

    // check down
    checkRow = row + 1;
    while (checkRow < SIZE)
    {
        if (board[column][checkRow] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow++;
    }

    // check up right
    int checkRowColumn = row - 1 && column + 1;
    while (checkRowColumn >= 0)
    {
        if (board[column][row] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRowColumn++;
    }

    return count >= 5;
}

int main(void)
{
    // make a 2D array
    char board[SIZE][SIZE];

    // initialize the array
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = '.';
        }
    }

    // print the array
    printBoard(board);

    int turn = 1;
    while (1)
    {
        // ask user where to go
        char player = (turn % 2 == 0) ? 'O' : 'X';
        printf("Where does %c want to go? ", player);

        int column;
        int row;
        scanf("%i %i", &column, &row);
        column--;
        row--;
        printf("column: %d, row: %d\n", column, row);

        // put the x in the board
        board[row][column] = player;

        // print board again with the x
        printBoard(board);

        // check if there is a winner
        if (checkWinner(row, column, board))
        {
            printf("\nThe winner is %c!!!\n", player);
            break;
        }

        turn++;
    }

    return 0;
}
