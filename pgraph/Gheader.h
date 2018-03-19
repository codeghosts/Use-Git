#pragma once




#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX_NUM 20
#define MAX 100
#define TRUE  1
#define FALSE 0
#define OK 1
#define ERROR 0


typedef int VertexType;
typedef int InfoType;
typedef int Status;
typedef struct ArcNode {
	int adjvex;                     //该弧所指向的顶点的位置
	struct ArcNode *nextarc;        //指向下一条弧的指针
	InfoType *info;				   //该弧相关信息的指针

}ArcNode;
typedef struct VNode {
	VertexType data;               //顶点信息
	int weight;                    //权值
	ArcNode *firstarc;             //指向第一条依附该顶点的弧的指针
}VNode, AdjList[MAX_VERTEX_NUM];
typedef struct {
	AdjList vertices;
	int vexnum, arcnum;
	//图的当前顶点数和弧数
	int kind;                      //图的种类
}ALGraph;
typedef struct {
	int adjvex;
	int lowcost;
}Closedge;

void CreatUDG(ALGraph &G);
void PrintG(ALGraph G);
void CreatDG(ALGraph &G);
void DFS(ALGraph G, int i);
void DFSTraverse(ALGraph G);
void Prim(ALGraph &G);

