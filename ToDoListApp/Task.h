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


TASK CreateTask(char*, enum Priority, char*);
TASK CopyTask(TASK);

void PrintTask(TASK);
bool UpdateTask(PTASK*, char*, enum Priority, char* );


void DisposeTask(TASK);
bool CompareTasks(TASK, TASK);
