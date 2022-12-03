#include "Task.h"

void TodoHead(void)
{
	puts("==================================================");		// 50 of '='
	printf("%*s", TEMPLATE, "To Do List\n");
	puts("==================================================");
}

void Todolist(PTASK t)
{
	for (int i = 0; i < /*Number of tasks*/; i++)
	{
		printf("________________________________________________  ");
		printf("%5d. %-*s -%-s", i + 1, MAXNAME, t->taskName, t->checking ? "Finished" : "Unfinished");
	}
}

TASK CreateTask()
{

}

bool UpdateTask(PTASK* source, char* newName, enum Priority newPriority, char* newDes)
{

}