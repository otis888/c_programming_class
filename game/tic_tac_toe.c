#include <stdio.h>

#define SIZE 15

void printBoard(char board[SIZE][SIZE])
{
    printf("  ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", (i + 1) % 10);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", (i + 1) % 10);
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

/* Return 1 if there is a winner
   Return 0 if no winner */
int checkLeftRight(int row, int column, char board[SIZE][SIZE])
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

    return count >= 5;
}

int checkUpDown(int row, int column, char board[SIZE][SIZE])
{
    int count = 1;
    char player = board[row][column];

    // check up
    int checkRow = row - 1;
    while (checkRow >= 0)
    {
        if (board[checkRow][column] == player)
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
        if (board[checkRow][column] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow++;
    }

    return count >= 5;
}

int checkUpRight(int row, int column, char board[SIZE][SIZE])
{
    int count = 1;
    char player = board[row][column];

    // check up right
    int checkRow = row - 1;
    int checkColumn = column + 1;
    while (checkRow >= 0 && checkColumn < SIZE)
    {
        if (board[checkRow][checkColumn] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow--;
        checkColumn++;
    }

    // check down left
    checkRow = row + 1;
    checkColumn = column - 1;
    while (checkRow < SIZE && checkColumn >= 0)
    {
        if (board[checkRow][checkColumn] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow++;
        checkColumn--;
    }

    return count >= 5;
}

int checkDownRight(int row, int column, char board[SIZE][SIZE])
{
    int count = 1;
    char player = board[row][column];

    // check down right
    int checkRow = row + 1;
    int checkColumn = column + 1;
    while (checkRow < SIZE && checkColumn < SIZE)
    {
        if (board[checkRow][checkColumn] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow++;
        checkColumn++;
    }

    // check up left
    checkRow = row - 1;
    checkColumn = column - 1;
    while (checkRow >= 0 && checkColumn >= 0)
    {
        if (board[checkRow][checkColumn] == player)
        {
            count++;
        }
        else
        {
            break;
        }
        checkRow--;
        checkColumn--;
    }

    return count >= 5;
}

/* Return 1 if there is a winner
   Return 0 if no winner */
int checkWinner(int row, int column, char board[SIZE][SIZE])
{
    return checkLeftRight(row, column, board) || checkUpDown(row, column, board) || checkUpRight(row, column, board) || checkDownRight(row, column, board);
}

/* Return 1 if the location is bad
   Return 0 if it is ok */
int checkBadLocation(int row, int column, char board[SIZE][SIZE])
{
    char character = board[row][column];
    return row < 0 || column < 0 || row >= SIZE || column >= SIZE || character != '.';
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

        // Is this location OK?
        if (checkBadLocation(row, column, board))
        {
            printf("Wrong location!\n");
            continue;
        }

        // put the X/O in the board
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
