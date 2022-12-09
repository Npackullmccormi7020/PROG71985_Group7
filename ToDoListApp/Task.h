#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define MAXNAME 50
#define MAXDES 200

// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// Header File for Task functions

typedef enum Priority {Low, Mid, High} PRIORITY;

typedef struct task {
	char taskName[MAXNAME];
	PRIORITY taskPriority;
	char taskDescription[MAXDES];
} TASK, *PTASK;


TASK CreateTask(char* name, PRIORITY priority, char* description);
TASK CopyTask(TASK);

void PrintTask(TASK);
void UpdateTask(PTASK source, char* newName, PRIORITY newPriority, char* newDes);

void DisposeTask(TASK);
bool CompareTasks(TASK, TASK);
