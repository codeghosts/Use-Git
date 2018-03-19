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
	int adjvex;                     //�û���ָ��Ķ����λ��
	struct ArcNode *nextarc;        //ָ����һ������ָ��
	InfoType *info;				   //�û������Ϣ��ָ��

}ArcNode;
typedef struct VNode {
	VertexType data;               //������Ϣ
	int weight;                    //Ȩֵ
	ArcNode *firstarc;             //ָ���һ�������ö���Ļ���ָ��
}VNode, AdjList[MAX_VERTEX_NUM];
typedef struct {
	AdjList vertices;
	int vexnum, arcnum;
	//ͼ�ĵ�ǰ�������ͻ���
	int kind;                      //ͼ������
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

