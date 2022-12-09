#include "Task.h"
#include"ListNode.h"
#include <String.h>
#include<stdio.h>
#include<stdlib.h>

// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// C File for Task functions

TASK CreateTask(char* name, PRIORITY priority, char* description)
{
	TASK t;
	t.taskPriority = priority;
	strncpy(t.taskName, name, MAXNAME);
	strncpy(t.taskDescription, description, MAXDES);
	return t;
}


TASK CopyTask(TASK srcTask)
{
	return CreateTask(srcTask.taskName, srcTask.taskPriority, srcTask.taskDescription);
}

void PrintTask(TASK t)
{
	printf("Task Name: %s\n", t.taskName);
	printf("Task Priority: %d\n", t.taskPriority);
	printf("Task Description: %s\n", t.taskDescription);
	printf("----------------------------------------------------\n");
}

void UpdateTask(PTASK source, char* newName, PRIORITY newPriority, char* newDes)
{
	source->taskPriority = newPriority;
	strncpy(source->taskName, newName, MAXNAME);
	strncpy(source->taskDescription, newDes, MAXDES);
}

void DisposeTask(TASK t)
{
	// Do Nothing, it's on the stack
}

bool CompareTasks(TASK t1, TASK t2)
{
	if (strcmp(t1.taskName, t2.taskName) == 0)
	{
		return true;
	}
	return false;
}