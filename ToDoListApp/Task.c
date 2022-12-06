#include "Task.h"
#include <String.h>

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

bool UpdateTask(PTASK* source, char* newName, enum Priority newPriority, char* newDes)
{

}


void DisposeStudent(TASK t)
{
	//nothing
}

bool CompareStudent(TASK t1, TASK t2)
{
	return(t1.taskName == t2.taskName);
}