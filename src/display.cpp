#include <iostream>
#include "display.h"

void printCase(int tab)
{
	switch (tab)
	{
		case 0 :
			std::cout<<" ";
			break;
		
		case 1 :
			std::cout<<"X";
			break;
		
		case 2 :
			std::cout<<"O";
			break;
		
		default :
			std::cout<<" ";
			break;
	}
}

void printBoard(int* array, int nbElements)
{
	for (int l = 0; l<nbElements; l++)
	{
		printCase(array[l]);
		
		if (l%3 == 0 || l%3 == 1)
			std::cout<<"|";
		
		else
		{
			std::cout<<std::endl;
		}
	}
}

