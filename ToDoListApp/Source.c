#include"Task.h"
#include"ListNode.h"
#include"ListADT.h"
#include"Menu.h"
#include "ClearBuffer.h"
#include<stdio.h>
#include<stdlib.h>

//	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022
// 
// The ToDoList program must have the following mandatory features:\
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
// 2022-12-03: 


int main(void)
{
	bool RunProgram = true;
	LIST ToDoList = CreateList();

	while(RunProgram)
	{
		int input;
		PrintMainMenu();
		if (scanf_s(" %d", &input) != 1)
		{
			printf("Wrong input");
			//ClearBuffer();		// To prevent errors that occur when a user entered a char, simbol, or space (etc.)
		}
		else
		{
			switch (input) {

			case 1:
			{
				//ClearBuffer();
				char nameInput[MAXNAME];
				enum Priority pri = Low;
				char description[MAXDES];

				printf("Please Enter a Task Name\n");
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					//ClearBuffer();
					break;
				}


				printf("Please Enter a task Priority\n 0) Low\n 1) Mid\n 2) High\n");
				if (scanf_s(" %d", &pri) != 1)
				{
					printf("Wrong input");
					//ClearBuffer();
					break;
				}

				printf("Please Enter a Task Description\n");
				if (scanf_s(" %[^\n]s", &description, MAXDES) != 1)		// %[^\n]s mean it will take input until newline doesn’t get encountered. 
				{														// which means it will get a line of input with space
					printf("Wrong input");
					//ClearBuffer();
					break;
				}
				
				if (AddTaskToList(&ToDoList, CreateTask(*nameInput, pri, *description)))
				{
					printf("Task Added Sucessfully\n");
				}
				break;
			}
			case 2:
			{
				char nameInput[MAXNAME];
				printf("Please Enter the Name of the desired Task to Delete\n");
				if (scanf_s(" %[^\n]s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					//ClearBuffer();
					break;
				}

				// Find task by name

				// RemoveTaskFromList(&ToDoList, Task);
				
				
				break;
			}
			case 3:
			{
				//3.	update an existing task
				// Find task by name
				// Enter New Info
				// UpdateTask();
				break;
			}
			case 4:
			{
				//4.	display single task
				// DisplayTask();
				break;
			}
			case 5:
			{
				//5.	display range task
				// DisplayListByPriority(ToDoList, Priority);
				break;
			}
			case 6:
			{
				//6.	display all task

				Display(ToDoList);
				break;
			}
			case 7:
			{
				//7.	search for task
				// Find task by name
				// Print Task
				break;
			}
			case 8:
			{
				puts("Shutting down the program.");
				RunProgram = false;
				break;
			}
			default:
			{
				break;
			}
			}// End of Switch
		}// End of Main Menu Loop						
	} // End of While Function
	
	return 0;
}

