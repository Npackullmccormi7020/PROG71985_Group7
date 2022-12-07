#include"Task.h"
#include"ListNode.h"
#include"ListADT.h"
#include"Menu.h"
#include "ClearBuffer.h"
#include<stdio.h>

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
	int input;
	do
	{
		PrintMainMenu();
		if (scanf_s(" %d", &input) != 1)
		{
			printf("Wrong input");
			ClearBuffer();		// To prevent errors that occur when a user entered a char, simbol, or space (etc.)
		}
		else
		{
			switch (input) {

			case 1:
			{
				char* nameInput = "";		// before I put = "", it gives me an error that said it is uninitialized.
				char* description = "";

				printf("Please Enter a Task Name\n");
				if (scanf_s("%s", nameInput, MAXNAME) != 1)
				{
					printf("Wrong input");
					ClearBuffer();
					break;
				}
				else {
					if (scanf_s("%[^\n]s", description, MAXDES) != 1)		// %[^\n]s mean it will take input until newline doesn’t get encountered. 
					{														// which means it will get a line of input with space
						printf("Wrong input");
						ClearBuffer();
						break;
					}
					else {	// we might have to make a loop to ask again when the user entered invalid input
						CreateTask()
					}
				}
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				break;
			}
			case 7:
			{
				break;
			}
			case 8:
			{
				puts("Shutting down the program.");
				break;
			}
			default:
			{
				break;
			}
			}
		}						
	} while (input != 8);		// I just used a magic num 8 for now, but it can be changed
	
	return 0;
}

