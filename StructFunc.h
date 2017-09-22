#pragma once
#include "Structures.h"

int createList(List *lp);	/* ���� ����Ʈ �ʱ�ȭ */
void destroyList(List *lp);
int addLast(List *lp, void *data, size_t size, void(*memcpy)(void *, void *));/* tail node �տ� node �߰�(���� ����) */
void displayList(List *lp, void(*dataPrint)(void*));		/* ����Ʈ ���� ��� ������ ��� */
Node * searchNode(List *lp, void* data, int(*dataCompare)(void*, void*));
int removeNode(List *lp, void* data, int(*dataCompare)(void *, void *));
void sortList(List *lp, int(*compare1)(void *, void *), int(*compare2)(void *, void *), void(*memcpy)(void *, void *));

void studentMemcpy(void *s1, void *s2);
void studentPrint(void *s);

void scoreMemcpy(Score *s1, Score *s2);
void scorePrint(Score *s);

//void scholarship(List *lp, int(*compare)(void *,void *), void(*memcpy)(void *,void *));

void scholarshipMemcpy(void *s1, void *s2);
void scholarshipPrint(void *s);
//void scholarPrint(void *s);

