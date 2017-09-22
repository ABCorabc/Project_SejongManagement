#pragma once
#include <stdio.h>

typedef struct {
	int classCnt;			// ���� ����
	double avgScore;		// ���
	char **allClassName;	// �����
	int *classScore;		// ���� ����
}Score;

typedef struct {
	char *name;			// �̸�
	char stdNum[10];	// �й�
	int scholarshipCnt; // ���б� ���� Ƚ��
	int *sum;			// ���бݾ�
	int *date[2];		// ���б� �������� (�⵵ / �б�)
	char **scholarName; // ���бݸ�
}Scholarship;

typedef struct {
	char *name;			// �̸�
	char stdNum[10];	// �й�
	int status;			// ���� ����
	Score myScore;		// Score
	Scholarship myScholar;
}Student;

typedef struct Node {
	struct Node *prev, *next;
}Node;

typedef struct {
	Node *head, *tail;
}List;