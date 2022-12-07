#pragma once
#include "Task.h"


typedef struct listnode
{
	TASK nodeData;
	struct listnode* next;
}LISTNODE, *PLISTNODE;

PLISTNODE CreateNode(TASK);

PLISTNODE GetNodeNextNode(PLISTNODE);
void SetNodeNextNode(PLISTNODE, PLISTNODE);

void DisposeNode(PLISTNODE);