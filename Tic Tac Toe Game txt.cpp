// Building a simple console based TIC TAC TOE GAME that allows two players to play against each other.
#include <iostream>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char token='X';
string n1,n2;
int row,column;
bool tie=false;

void functionOne()
{
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<space[0][0]<<"  |  "<<space[0][1]<<"  | "<<space[0][2]<<"\n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<space[1][0]<<"  |  "<<space[1][1]<<"  | "<<space[1][2]<<"\n";
    cout<<"\t\t_____|_____|_____\n"; 
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<space[2][0]<<"  |  "<<space[2][1]<<"  | "<<space[2][2]<<"\n";
    cout<<"\t\t     |     |     \n";
}
void functionTwo()
{
	int digit;
	bool validInput=false;
	
	while(!validInput)
	{
		if(token=='X')
		{
			cout<<n1<<",please enter your move(1-9):";
		}
		else
		{
			cout<<n2<<",please enter your move(1-9):";
		}
		cin>>digit;
		
		if(digit<1||digit>9)
		{
			cout<<"\t\tINVALID move! Enter a number between 1 to 9.\n";
		}
		else
		{
			if(digit==1){row=0;column=0;}
			if(digit==2){row=0;column=1;}
			if(digit==3){row=0;column=2;}
			if(digit==4){row=1;column=0;}
			if(digit==5){row=1;column=1;}
			if(digit==6){row=1;column=2;}
			if(digit==7){row=2;column=0;}
			if(digit==8){row=2;column=1;}
			if(digit==9){row=2;column=2;}
			
			if(space[row][column]!='X'&&space[row][column]!='O')
			{
				space[row][column]=token;
				token=(token=='X')?'O':'X';
				validInput=true;
			}
			else
			{
				cout<<"The spot is already taken!choose another spot.\n";
			}
		}
	}
}
bool functionThree()
{
	for(int i=0;i<3;i++)
	{
		if (space[i][0]==space[i][1]&&space[i][0]==space[i][2])return true;
		if (space[0][i]==space[1][i]&&space[0][i]==space[2][i])return true;
	}
	if (space[0][0]==space[1][1]&&space[0][0]==space[2][2])return true;
	if (space[0][2]==space[1][1]&&space[0][2]==space[2][0])return true;
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(space[i][j]!='X'&&space[i][j]!='O')
				{
					return false;
				}
			}
		}
		tie=true;
		return true;
}
int main()
{
	cout<<"\t\t************************************************** ";
	cout<<"\n\t\t*\tWELCOME TO TIC TAC TOE GAME              *\n";
	cout<<"\t\t************************************************** ";
	cout<<"\n\nEnter the name of the first player (X):\n";
	getline(cin,n1);
	cout<<"Enter the name of the second player (O):\n";
	getline(cin,n2);
	cout<<n1<<" is player1 (X), and will play first.\n";
	cout<<n2<<" is player2 (O), and will play second.\n";
	
	functionOne();
	while (!functionThree())
	{
		functionTwo();
		functionOne();
	}
	if(token=='X'&&!tie)
	{
		cout<<n2<<"WINS!!\n";
	}
	else if(token=='O'&&!tie)
	{
		cout<<n1<<"WINS!!\n";
	}
	else 
    {
    	cout<<"It's a draw!\n";
	}
	return 0;
}

