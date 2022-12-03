#pragma once
#include <stdio.h>
#include <stdbool.h>
#define MAXNAME 25		// I think 25 is fine.
#define MAXDES 200
#define TEMPLATE 30		// can be changed later


enum Priority {Low, Mid, High};

typedef struct task {
	char* taskName[MAXNAME];
	enum Priority taskPriority;
	char* taskDescription[MAXDES];
	bool checking;						// if the user checks the task, checking = true, other wise = false
} TASK, *PTASK;


void TodoHead(void);

TASK CreateTask();

bool UpdateTask(PTASK*, char*, enum Priority, char* );
