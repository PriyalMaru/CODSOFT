#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	cout<<"\n\t\tWelcome to GUESS THE NUMBER game!";
	cout<<"\n\t\t\t\tInstuctions:\n";
	cout<<"You have to guess a number betweem 1 to 100.\n";
	cout<<"You'll have limited choices based on the "
	"level you choose.\n";
	cout<<"GOOD LUCK!\n";
	
	while(true)
	{
		cout<<"\nEnter the difficulty level:\n";
		cout<<"1 for easy!\t";
		cout<<"2 for Medium!\t";
		cout<<"3 for difficult!\t";
		cout<<"0 for ending the game!\n ";
		
		int difficultyChoice;
		cout<<"Enter the number:";
		cin>>difficultyChoice;
		
		srand(time(0));
		int randomNumber = 1+(rand()%100);
		int playerChoice;
		
		if(difficultyChoice ==1)
		{
			cout<<"\nYou have 10 Choices for finding the""random number between 1 and 100";		
			int choicesLeft =10;
			for(int i=1; i<=10;i++)
			{
				cout<<"\n\nEnter the number:";
				cin>>playerChoice;
				if(playerChoice == randomNumber)
				{
					cout<<"Well played!You Won,"<<playerChoice<<"is the random number\n\n";
					cout<<"\t\t\tThanks for playing....\n";
					cout<<"\t\tPlay the game again with us!\n\n";
					break;
				}
				else
				{
					cout<<"nope,"<<playerChoice<<"is not the right number\n";
					if(playerChoice>randomNumber)
					{
						cout<<"the random number is smaller than the number you have chosen";
					}
					else
					{
						cout<<"the random number is greater than the number you have chosen ";
					}
					choicesLeft--;
					cout<<choicesLeft<<" choices left.";
					
					if(choicesLeft == 0)
					{
						cout<<"you couldn't find the random number,it was"<<randomNumber<<",you lose!!\n\n";
						cout<<"play the game again to win!!\n\n";
					}
				}
			}
		}
		else if(difficultyChoice == 2)
		{
				cout<<"\nYou have 7 Choices for finding the ""random number between 1 and 100";		
			int choicesLeft =7;
			for(int i=1; i<=7;i++)
			{
				cout<<"\n\nEnter the number:";
				cin>>playerChoice;
				if(playerChoice == randomNumber)
				{
					cout<<"Well played!You Won,"<<playerChoice<<"is the random number\n\n";
					cout<<"\t\t\tThanks for playing....\n";
					cout<<"\t\tPlay the game again with us!\n\n";
					break;
				}
				else
				{
					cout<<"nope,"<<playerChoice<<"is not the right number\n";
					if(playerChoice>randomNumber)
					{
						cout<<"the random number is smaller than the number you have chosen";
					}
					else
					{
						cout<<"the random number is greater than the number you have chosen";
					}
					choicesLeft--;
					cout<<choicesLeft<<"choices left.";
					
					if(choicesLeft == 0)
					{
						cout<<"you couldn't find the random number,it was"<<randomNumber<<", you lose!!\n\n";
						cout<<"play the game again to win!!\n\n";
					}
		        }
	        }
        }
        else if(difficultyChoice == 3)
        {
        		cout<<"\nYou have 5 Choices for finding the"" random number between 1 and 100";		
			int choicesLeft =5;
			for(int i=1; i<=5;i++)
			{
				cout<<"\n\nEnter the number:";
				cin>>playerChoice;
				if(playerChoice == randomNumber)
				{
					cout<<"Well played!You Won,"<<playerChoice<<"is the random number\n\n";
					cout<<"\t\t\tThanks for playing....\n";
					cout<<"\t\tPlay the game again with us!\n\n";
					break;
				}
				else
				{
					cout<<"nope,"<<playerChoice<<"is not the right number\n";
					if(playerChoice>randomNumber)
					{
						cout<<"the random number is smaller than the number you have chosen";
					}
					else
					{
						cout<<"the random number is greater than the number you have chosen ";
					}
					choicesLeft--;
					cout<<choicesLeft<<" choices left.";
					
					if(choicesLeft == 0)
					{
						cout<<"you couldn't find the random number,it was"<<randomNumber<<",you lose!!\n\n";
						cout<<"play the game again to win!!\n\n";
					}
		        }
	        }
        }
        else if(difficultyChoice == 0)
        {
        	exit(0);
		}
		else 
		{
			cout<<"wrong choice, please enter valid choice to play the game(0,1,2,3)";
		}
	}
	return 0;
}

	

