#include "Task.h"
#include "ListNode.h"
#include <stdio.h>
#include <stdlib.h>


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
