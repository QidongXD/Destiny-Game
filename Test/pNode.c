/**
 * Program Name: pNode.c
 * Discussion:   Struct PNode Definition
 * Written By:   Zhiying Li
 * Date:         2017/04/02
 */

#include <stdio.h>
#include "pNode.h"

P* newPoint(int x, int y) {
	P* p = (P*)malloc(sizeof(P));

	p->x = x;
	p->y = y;

	return p;
}

P* newPointP(P* p) {
	P* myP = (P*)malloc(sizeof(P));

	myP->x = p->x;
	myP->y = p->y;

	return myP;
};

void displayPoint(P* p) {
	if (p != NULL)
		printf("(%d, %d)", p->x, p->y);
}

PNode* newPNode(P* p) {
	PNode* pNodePtr = (PNode*)malloc(sizeof(PNode));
	pNodePtr->ptr = newPointP(p);
	pNodePtr->next = NULL;

	return pNodePtr;
}