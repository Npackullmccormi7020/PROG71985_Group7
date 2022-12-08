#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "ListADT.h"
#include "ListNode.h"
#include <stdio.h>
#include <stdbool.h>
#define MAXNAME 25
#define MAXDES 200

// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// Header File for Task functions

enum Priority {Low, Mid, High};

typedef struct task {
	char* taskName;
	enum Priority taskPriority;
	char* taskDescription;
} TASK, *PTASK;


TASK CreateTask(char* name, enum Priority priority, char* description);
TASK CopyTask(TASK);

void PrintTask(TASK);
char* UpdateTask(PTASK source, char* newName, enum Priority newPriority, char* newDes);

void DisposeTask(TASK ptr);
bool CompareTasks(TASK, TASK);
