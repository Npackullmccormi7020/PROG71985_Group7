#pragma once
#include <stdio.h>
#include <stdbool.h>
#define MAXNAME 50
#define MAXDES 200

enum Priority {Low, Mid, High};

typedef struct task {
	char* taskName[MAXNAME];
	enum Priority taskPriority;
	char* taskDescription[MAXDES];
} TASK, *PTASK;

TASK CreateTask();

bool UpdateTask(PTASK*, char*, enum Priority, char* );
