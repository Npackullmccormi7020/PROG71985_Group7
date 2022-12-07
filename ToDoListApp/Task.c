#include "Task.h"
#include"ListNode.h"
#include <String.h>
#include<stdio.h>
#include<stdlib.h>

TASK CreateTask(char* name, enum Priority priority, char* description)
{
	TASK t;
	strncpy(t.taskName, name, MAXNAME);
	t.taskPriority = priority;
	strncpy(t.taskDescription, description, MAXDES);
	return t;
}


TASK CopyTask(TASK srcTask)
{
	return CreateTask(srcTask.taskName, srcTask.taskPriority, srcTask.taskDescription);
}

void PrintTask(TASK t)
{
	//printf("Task: %s, Priority: %d Description: %s\n", t.taskName, t.taskPriority, t.taskDescription);
}

char* UpdateTask(PTASK source, char* newName, enum Priority newPriority, char* newDes) //copies input replaces it new destination 
{
	char** ptr; // pointer to a pointer
	ptr = &source->taskName;
	if (ptr == NULL) // if empty do not run
		exit(1);
	else
		free(ptr); // frees space for updated task
	    strcpy(newDes, newName); // copies string to pointer
		return newDes;
}


void DisposeTask(TASK ptr)
{

}

bool CompareTasks(TASK t1, TASK t2)
{
	return(t1.taskName == t2.taskName);
}