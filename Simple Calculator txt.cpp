//developing a simple calculator that performs basic arithmetic operation :
#include<iostream>
using namespace std;

int main()
{
char operation;
double num1,num2,result;

cout<<"Enter 1st number:";
cin>>num1;

cout<<"Enter operation(+,-,*,/):";
cin>>operation;

cout<<"Enter 2nd number:";
cin>>num2;

switch(operation)
{
	case'+':
		result = num1+num2;
		break;
		case'-':
			result=num1-num2;
			break;
			case'*':
				result=num1*num2;
				break;
				case'/':
					if(num2!=0)
					{
						result = num1/num2;
					}else
					{
						cout<<"Error: division by zero is not allowed.";
						return 1;
					}
					break;
					default:
						cout<<"Invalid operation!";
						return 1;
}
cout<<"Result:"<<result;
return 0;
}
