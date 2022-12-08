#include "ListADT.h"
#include "Task.h"
#include <stdlib.h>
#include <string.h>

// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// C File for ListADT functions

LIST CreateList()
{
	LIST newlist = { 0 };
	return newlist;
}

bool AddTaskToList(PLIST thisList, TASK thisTask)
{
	PLISTNODE newNode = CreateNode(thisTask);

	if (thisList->list == NULL)  //empty list.  
	{
		SetNodeNextNode(newNode, thisList->list);
		thisList->list = newNode;
	}
	else
	{
		PLISTNODE current = thisList->list;

		while (GetNodeNextNode(current) != NULL)
		{
			current = GetNodeNextNode(current);
		}

		SetNodeNextNode(current, newNode);
	}
	return true;
}

void RemoveTaskFromList(PLIST thisList, TASK taskToBeDeleted)
{
	PLISTNODE current = thisList->list;

	if (CompareTasks(current->nodeData, taskToBeDeleted))
	{
		if (GetNodeNextNode(current) != NULL)
		{
			thisList->list = GetNodeNextNode(current);
		}	
		else
		{
			thisList->list = NULL;
		}
		DisposeNode(current);
		return;
	}
	PLISTNODE prev = NULL;
	while (current != NULL && !CompareTasks(current->nodeData, taskToBeDeleted))
	{
		prev = current;
		current = GetNodeNextNode(current);
	}

	if (current == NULL)
	{
		return;
	}	

	SetNodeNextNode(prev, GetNodeNextNode(current));  //unlink the node from the list

	DisposeNode(current);  // Free memory 
}

void Display(LIST thisList)
{
	if (thisList.list == NULL)
		return;
	else
	{
		PLISTNODE current = thisList.list;
		do
		{
			PrintTask(current->nodeData);
			current = GetNodeNextNode(current);
		} while (current != NULL);
	}
}


void DisposeList(PLIST thisList)
{
	PLISTNODE tmp;

	PLISTNODE current = thisList->list;
	while (current != NULL)
	{
		tmp = current;
		current = GetNodeNextNode(current);
		DisposeNode(tmp);
	}
}