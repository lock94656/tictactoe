#include <iostream>
#include <cstdlib>

#include "opencv2/opencv.hpp"

#include "display.h"
#include "game.h"

int main()
{	
	cv::Mat frame(600,600, CV_8UC3, cv::Scalar(0,0,0));
	cv::imshow("Game board", frame);
	
	cv::waitKey(0);
	
	srand((unsigned) time(NULL));
	int tab[9] = {0,0,0,0,0,0,0,0,0};
	int nbCase;
	
	std::cout<<std::endl;
	std::cout<<"Tic Tac Toe"<<std::endl;
	std::cout<<"-----------"<<std::endl;
	std::cout<<"You are the X"<<std::endl;
	std::cout<<std::endl;
	
	printBoard(tab, 9);
	
	while (1) //lookForWinner(tab) == 0 || isAllCaseTaken(tab) != 1
	{
		do
		{
			std::cout<<"Your turn. Enter a number (0 to 8). ";
			std::cin>>nbCase;
			std::cout<<std::endl;
		}while (isCaseTaken(tab, nbCase) != 0);
		
		
		tab[nbCase] = 1;
		printBoard(tab, 9);
		
		if(lookForWinner(tab) == 1)
		{
			std::cout<<"You win !!!"<<std::endl;
			return 0;
		}
		if (isAllCaseTaken(tab) == 1)
		{
			std::cout<<"Equality"<<std::endl;
			return 0;
		}
		std::cout<<"Bot's turn."<<std::endl;
		int random = 0;
	
		do 
		{
			random = rand() % 9;
		}while (isCaseTakenBot(tab, random) != 0);
		
		tab[random] = 2;
		printBoard(tab, 9);
		
		if(lookForWinner(tab) == 2)
		{
			std::cout<<"You lose !!!"<<std::endl;
			return 0;
		}
	}
	return 1;
}