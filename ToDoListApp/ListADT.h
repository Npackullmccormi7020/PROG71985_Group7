#pragma once
#include "Task.h"
#include "ListNode.h"
#include <stdbool.h>


typedef struct ListADT
{
	PLISTNODE list;
}LIST, * PLIST;

LIST CreateList();
bool AddTaskToList(PLIST, TASK);
void RemoveTaskFromList(PLIST, TASK);

void Display(LIST);

void DisposeList(PLIST);