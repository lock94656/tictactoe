#include <iostream>
#include <cstdlib>

#include "display.h"
#include "game.h"

int main()
{	
	srand((unsigned) time(NULL));
	int tab[9] = {0,0,0,0,0,0,0,0,0};
	int nbCase;
	
	std::cout<<"Tic Tac Toe"<<std::endl;
	std::cout<<"-----------"<<std::endl;
	std::cout<<"You are the X"<<std::endl;
	std::cout<<std::endl;
	
	printBoard(tab, 9);
	
	while (lookForWinner(tab)!=0 || isAllCaseTaken(tab)!=1)
	{
		do
		{
			std::cout<<"Your turn. Enter a number (0 to 8). ";
			std::cin>>nbCase;
			std::cout<<std::endl;
		}
		while (isCaseTaken(tab, nbCase) != 0);
		tab[nbCase] = 1;
		printBoard(tab, 9);
		
		std::cout<<"Bot's turn."<<std::endl;
		int random = 0;
		do 
		{
			
			random = rand() % 9;
			
		}
		while (isCaseTakenBot(tab, random) != 0);
		
		tab[random] = 2;
		printBoard(tab, 9);
	}
	
	return 0;
}