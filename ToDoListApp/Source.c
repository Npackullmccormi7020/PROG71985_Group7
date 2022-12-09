#include"Task.h"
#include"ListNode.h"
#include"ListADT.h"
#include"Menu.h"
#include "ClearBuffer.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FILELINE 600
//	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022
// 
// The ToDoList program must have the following mandatory features:
// 
//			1.	add a new task 
//			2.	delete an existing task
//			3.	update an existing task
//			4.	display single task
//			5.	display range task
//			6.	display all task
//			7.	search for task
//			8.	friendly / easy to use UI(or menu system)
//			9.	save accumulated data to disk
//			10. load accumulated data from disk
//			11. you may add additional features, increasing your group’s overall mark to a maximum of 100 % .
//
// Revision History:
// 2022-11-09: Created


int main(void)
{
	bool RunProgram = true;
	LIST ToDoList = CreateList();

	while(RunProgram)
	{
		int input;
		PrintMainMenu();
		ClearBuffer();
		if (scanf_s(" %d", &input) != 1)
		{
			printf("Wrong input");
		}
		else
		{
			switch (input) 
			{
			case 1:
			{
				// 1.	add a new task
				// Initilize variables
				char nameInput[MAXNAME];
				PRIORITY pri = Low;
				char description[MAXDES];

				// Get user input for name
				printf("Please Enter a Task Name\n");
				ClearBuffer();
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Get user input for Priority
				printf("Please Enter a Task Priority\n 0) Low\n 1) Mid\n 2) High\n");
				ClearBuffer();
				if (scanf_s(" %d", &pri) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Get user input for Description
				printf("Please Enter a Task Description\n");
				ClearBuffer();
				if (scanf_s(" %[^\n]s", &description, MAXDES) != 1)
				{
					printf("Wrong input");
					break;
				}
				
				// Add task to the list based on user input
				if (AddTaskToList(&ToDoList, CreateTask(nameInput, pri, description)))
				{
					printf("Task Added Sucessfully\n");
				}
				break;
			}
			case 2:
			{
				// 2.	Delete an existing task
				// Initilize Variables
				char nameInput[MAXNAME];

				// Get user input for name 
				printf("Please Enter the Name of the desired Task to Delete\n");
				ClearBuffer();
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Find task by name
				PTASK temp = FindTask(ToDoList, &nameInput);
				if (temp->taskName == NULL)
				{
					// If the task is not found, do nothing
					printf("Task was not found\n");
					break;
				}
				else
				{
					// Remvoe the task from list
					TASK temp2 = *temp;
					RemoveTaskFromList(&ToDoList, temp2);
				}
				break;
			}
			case 3:
			{
				//3.	update an existing task
				// Initilize Variables
				char nameInput[MAXNAME];

				// Get user input for name 
				printf("Please Enter the Name of the desired Task to Delete\n");
				ClearBuffer();
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Find task by name
				PTASK temp = FindTask(ToDoList, &nameInput);
				if (temp->taskName == NULL)
				{
					// If the task is not found, do nothing
					printf("Task was not found\n");
					break;
				}
				else
				{
					// Enter New Info
					PRIORITY pri = Low;
					char description[MAXDES];

					// Get user input for name 
					printf("Please Enter a New Task Name\n");
					ClearBuffer();
					if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
					{
						printf("Wrong input");
						break;
					}

					// Get user input for priority
					printf("Please Enter a New Task Priority\n 0) Low\n 1) Mid\n 2) High\n");
					ClearBuffer();
					if (scanf_s(" %d", &pri) != 1)
					{
						printf("Wrong input");
						break;
					}

					// Get user input for description
					printf("Please Enter a New Task Description\n");
					ClearBuffer();
					if (scanf_s(" %[^\n]s", &description, MAXDES) != 1)
					{
						printf("Wrong input");
						break;
					}

					// UpdateTask
					UpdateTask(temp, nameInput, pri, description);
				}
				break;
			}
			case 4:
			{
				//4.	display single task
				char nameInput[MAXNAME];

				// Get user input for name 
				printf("Please Enter the Name of the desired Task to Search\n");
				ClearBuffer();
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Find task by name
				PTASK temp = FindTask(ToDoList, &nameInput);
				if (temp->taskName == NULL)
				{
					// If the task is not found, do nothing
					printf("Task was not found\n");
					break;
				}
				else
				{
					// Print task
					TASK temp2 = *temp;
					PrintTask(temp2);
				}
				break;
			}
			case 5:
			{
				//5.	display range task
				PRIORITY pri = Low;

				// Get user input for priority
				printf("Please Enter a task Priority\n 0) Low\n 1) Mid\n 2) High\n");
				ClearBuffer();
				if (scanf_s(" %d", &pri) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Display tasks with the selected priority
				DisplayRange(ToDoList, pri);
				break;
			}
			case 6:
			{
				//6.	display all task

				// Display the entire list
				Display(ToDoList);
				break;
			}
			case 7:
			{
				//7.	search for task
				char nameInput[MAXNAME];

				// Get user input for name 
				printf("Please Enter the Name of the desired Task to Search\n");
				ClearBuffer();
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					break;
				}

				// Find task by name
				PTASK temp = FindTask(ToDoList, &nameInput);
				if (temp->taskName == NULL)
				{
					// If the task is not found, do nothing
					printf("Task was not found\n");
					break;
				}
				else
				{
					// Print task
					TASK temp2 = *temp;
					PrintTask(temp2);
				}
				break;
			}
			case 8:
			{
				// Quit
				puts("Shutting down the program.");

				RunProgram = false;
				break;
			}
			default:
			{
				printf("You did not enter a value that coresponds with an operation.\n");
				break;
			}
			}// End of Switch
		}// End of Main Menu Loop						
	} // End of While Function
	
	return 0;
}

