
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>


//Function Prototype
void draw_line(int n, char ch);
int play_dice(int &score);


int main()
{
	//Variables
	int p1 = 0, p2 = 0;
	char player1name[80], player2name[80]; 
	system("cls");
	srand(time(0));

	//Title Set Up
	draw_line(50, '=');
	std::cout << "\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n";
	draw_line(50, '=');
	std::cout << "\n\n\nEnter Name of player 1 :";
	std::cin >> player1name;
	std::cout << "\n\n\Enter Name of player 2 :";
	std::cin >> player2name;
	std::cout << "\n";
	std::cin.clear();
	std::cin.get();

	// while the score for both player is less than 100 keeping gettin input and rolling the dice.
	while (p1 < 100 && p2 <100)
	{
		std::cout << player1name << " it is your turn to press any key to play " << "\n";
		std::cin.get();
		play_dice(p1);
		std::cout << "\n";
		std::cout << player1name << " Your Score is: " << p1 << "\n\n";

		std::cin.get();
		std::cout << player2name << " it is your turn to press any key to play" << "\n";
		std::cin.get();
		play_dice(p2);
		std::cout << "\n";
		std::cout << player2name << " Your Score is: " << p2 << "\n\n";
	
	}
	//Checks who won and outputs the result
	if (p1 > p2) {

		std::cout << player1name << " YOU HAVE WON\n\n";

	}
	 if (p2 > p1)
	{
		std::cout << player2name << " YOU HAVE WON\n\n";

	}
	 if (p1 == p2)
	 {
		 std::cout << "Match is Draw\n";
	 }

	

}
// this fuction just create a line of ch of my pick.
void draw_line(int n, char ch)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << ch;
	}

}

// This function takes care of the dice rolled and checks to see if the player has landed on a snak or later 
int play_dice(int &score)
{

	int random = rand() % 6 +1 ;
	std::cout << "Your number is: " << random;
	score = random + score;

	switch (score)
	{
	case 98:score = 28;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 95:score = 24;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 92:score = 51;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 83:score = 19;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 73:score = 1;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 69:score = 33;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 64:score = 36;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 59:score = 17;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 55:score = 7;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 52:score = 11;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 48:score = 9;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 46:score = 5;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 44:score = 22;
		std::cout << " you ran into a snake!" << "\n";

		break;
	case 8:score = 26;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 21:score = 82;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 43:score = 77;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 50:score = 91;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 54:score = 93;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 62:score = 96;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 66:score = 87;
		std::cout << " luckyyy boy u got ladder" << "\n";

		break;
	case 80:score = 100;
		std::cout << " luckyyy boy u got ladder" << "\n";

	}
	return score;
	
}
