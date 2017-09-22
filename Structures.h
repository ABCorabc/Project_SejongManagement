#pragma once
#include <stdio.h>

typedef struct {
	int classCnt;			// 과목 개수
	double avgScore;		// 평균
	char **allClassName;	// 과목명
	int *classScore;		// 과목 점수
}Score;

typedef struct {
	char *name;			// 이름
	char stdNum[10];	// 학번
	int scholarshipCnt; // 장학금 수여 횟수
	int *sum;			// 장학금액
	int *date[2];		// 장학금 수여일자 (년도 / 학기)
	char **scholarName; // 장학금명
}Scholarship;

typedef struct {
	char *name;			// 이름
	char stdNum[10];	// 학번
	int status;			// 학적 상태
	Score myScore;		// Score
	Scholarship myScholar;
}Student;

typedef struct Node {
	struct Node *prev, *next;
}Node;

typedef struct {
	Node *head, *tail;
}List;