#pragma once
#include"Task.h"
#include "ListNode.h"
#include <stdbool.h>

// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// Header File for ListADT functions, adapted from 

typedef struct ListADT
{
	PLISTNODE list;
}LIST, * PLIST;

LIST CreateList();
bool AddTaskToList(PLIST, TASK);
void RemoveTaskFromList(PLIST, TASK);

void Display(LIST);
void DisplayRange(LIST, PRIORITY);
PTASK FindTask(LIST, char[]);

void DisposeList(PLIST);
