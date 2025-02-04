//Building a simple console based TO DO List manager that allows user to add , view, and delete tasks.
#include<iostream>
#include<string>
using namespace std;

void print_tasks(string tasks[],int task_count)
{
	cout<<"\nTasks To Do:\n";
	if(task_count==0)
	{
		cout<<"No task available.\n";
		return;
	}
	for(int i=0; i<task_count;i++)
	{
		cout<<i+1<<"."<<tasks[i]<<"\n";
	}
}
int main()
{
	string tasks[10]={""};
	int task_count = 0;
	int option=-1;
	
	system("color 3");
	cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-\n";
	cout<<"\n\t\t\t----TO-DO List----\n";
	cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-\n";
	
	while(option!=0)
	{
		cout<<"\n1-Add a new task\n";
		cout<<"\n2-View tasks\n";
		cout<<"\n3-Delete a task\n";
		cout<<"\n0-Terminate your choice:\n";
		cout<<"\nEnter your choice:";
		cin>>option;
		
		switch(option)
		{
			case 1:
				{
					system("color 5");
					if(task_count>=10)
					{
						cout<<"\nTask list is full!\n\n";
					}
					else
					{
						cout<<"\nEnter a new task:";
						cin.ignore();
						getline(cin,tasks[task_count]);
						task_count++;
						cout<<"\nTask added successfully!\n";
					}
					break;
				}
				case 2:
					{
						system("cls");
						system("color 6");
						print_tasks(tasks,task_count);
						break;
					}
					case 3:
						{
							system("cls");
							system("color 4");
							if(task_count==0)
							{
								cout<<"\nNo tasks to delete!\n";
							}
							else 
							{
								print_tasks(tasks,task_count);
								cout<<"\nEnter the task number to delete:\n";
								int del_task;
								cin>>del_task;
								
								if(del_task<1||del_task>task_count)
								{
									cout<<"\nInvalid task number!\n";
								}
								else
								{
									for(int i=del_task-1;i<task_count-1;i++)
									{
										tasks[i]=tasks[i+1];
									}
									
									tasks[task_count-1].clear();
									task_count--;
									cout<<"\nTask deleted successfully!\n";
								}
							}
							break;
						}
						case 0:
							{
								system("color 8");
								cout<<"\nterminating the program.Have a Nice Day!\n";
								break;
							}
							default:
								{
									cout<<"\nYou entered an invalid value! Please try again.\n";
								}
				
	   	}
	}
	return 0;
}

