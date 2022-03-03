/**
 * @file personal dairy.h
 * @author Yechan Park  
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef PERSONAL_H
#define PERSONAL_H
//#define size 5
#include "math.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct NODE
{
	int time;
	int duration;
	int age;
	char name[20];
	char destination[20];
	struct NODE *next;
} node;

node* deq();
void create();
void Edit();
void View();
void Write();
void Delete();


node *start;
node *front;
node *rear;
int count=0;
int num=0;

#endif 