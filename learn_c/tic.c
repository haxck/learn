#include "stdio.h"
int main(int argc, char const *argv[])
{
	int player = 0;
	int winner = 0;
	int choice = 0;
	int row = 0;
	int columu = 0;

	char board[3][3] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};
	int j=9;
	int i=0;
	// ‘for’ loop initial declarations are only allowed in C99 mode
	//  for (int i = 0; i<int j=9 && winner == 0; i++)

			int line = 0;
			int line2 = 2;
	for (; i<j && winner == 0; i++)
	{
		printf("\n\n");
		printf(" %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
		player = i%2+1;

		do
		{
			printf("\nPlayer %d,please enter the number of the square\n"
				"where you want to place your %c:",
				player,(player==1)?'X':'O'
				);
			scanf("%d",&choice);
			row = --choice/3;
			columu = choice%3;
				
		} while (choice<0||choice>9||board[row][columu]>'9');

		board[row][columu] = (player==1)?'X':'O';

		if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
			(board[0][2] == board[1][1] && board[0][2] == board[2][0]))
			winner = player;
		else
			for (; line < line2; line++)
			{				
			if ((board[line][0] == board[line][1] && board[line][0] == board[line][2]) ||
				(board[0][line] == board[1][line] && board[0][line] == board[2][line]))
				winner = player;
			}

	}
		printf("\n\n");
		printf(" %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
		if (winner == 0)
			printf("Contiune!\n");
		else
			printf("You win:%d\n",winner );


	return 0;
}