#include"Task.h"
#include"ListNode.h"
#include"ListADT.h"
#include"Menu.h"
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
	PrintMainMenu();
	int input;
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
			char* nameInput;
			printf("Please Enter a Task Name\n");
			if (scanf_s(" %s", nameInput, MAXNAME) != 1)
			{
				printf("Wrong input");
				break;
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
			break;
		}
		default:
		{
			break;
		}
		}
	}

	return 0;
}

