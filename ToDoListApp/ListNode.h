#pragma once
#include "Task.h"
// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// Header File for ListNode functions

typedef struct listnode
{
	TASK nodeData;
	struct listnode* next;
}LISTNODE, *PLISTNODE;

PLISTNODE CreateNode(TASK);

PLISTNODE GetNodeNextNode(PLISTNODE);
void SetNodeNextNode(PLISTNODE, PLISTNODE);

void DisposeNode(PLISTNODE);