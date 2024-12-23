#include <iostream>
#include <cstdlib>
#include "game.h"

int lookForWinner(int* array)
{
	int winnerId = 0;
	
	for (int l_row=0; l_row <3; l_row++)
	{
		if (array[3*l_row] == array[3*l_row+1] && array[3*l_row] == array[3*l_row+2])
			winnerId = array[3*l_row];
	}
	
	for (int l_col=0; l_col <3; l_col++)
	{
		if (array[l_col] == array[3+l_col] && array[l_col] == array[6+l_col])
			winnerId = array[l_col];
	}
	
	if (array[0] == array[4] && array[0] == array[8])
		winnerId = array[0];
	
	if (array[2] == array[4] && array[2] == array[6])
		winnerId = array[2];
	
	return winnerId;
}

int isAllCaseTaken(int* array)
{
	
	int tabCase[9] = {0,0,0,0,0,0,0,0,0};
	int allCaseTaken = 0;
	
	for (int l = 0; l<9; l++)
	{
		if (array[l] != 0)
			tabCase[l] = 1;
	}
		
	if (tabCase[0] == tabCase[1] && tabCase[0] == tabCase[2] && tabCase[0] == tabCase[3] && tabCase[0] == tabCase[4] && tabCase[0] == tabCase[5] && tabCase[0] == tabCase[6] && tabCase[0] == tabCase[7] && tabCase[0] == tabCase[8] && tabCase[0] == 1)
		allCaseTaken = 1;
	
	return allCaseTaken;
}

int isCaseTaken(int* array, int nb)
{
	int error = 0;
	if (array[nb] != 0)
	{
		std::cout<<"!!!This case has already been chosen !!!\a\nChoose an other one"<<std::endl;
		error = 1;
	}
	return error;
}

int isCaseTakenBot(int* array, int nb)
{
	int error = 0;
	if (array[nb] != 0)
	{
		error = 1;
	}
	return error;
}


