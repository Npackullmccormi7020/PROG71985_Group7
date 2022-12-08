#include "Task.h"
#include "ListNode.h"
#include <stdio.h>
#include <stdlib.h>
// 	PROG71985F22 - Final Group Project: ToDoList Application
//	Group7 - Nicholas Packull-McCormick, YoungSu Chae, Alex Fridman
//	Due date: Dec 9, 2022

// C File for ListNode functions

PLISTNODE CreateNode(TASK task)
{
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (!newNode)
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	newNode->nodeData = CopyTask(task);
	newNode->next = NULL;

	return newNode;
}

PLISTNODE GetNodeNextNode(PLISTNODE listNode)
{
	return listNode->next;
}


void SetNodeNextNode(PLISTNODE sourceListNode, PLISTNODE newNextNode)
{
	sourceListNode->next = newNextNode;
}

void DisposeNode(PLISTNODE listNode)
{
	DisposeTask(listNode->nodeData);
	free(listNode);
}
