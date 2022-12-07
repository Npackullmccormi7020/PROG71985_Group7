#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define MAXNAME 25
#define MAXDES 200

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
