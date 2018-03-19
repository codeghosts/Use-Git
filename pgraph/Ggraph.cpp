#include "Gheader.h"







void CreatUDG(ALGraph &G)
{

	int n, m, x, k,y;
	int i, q;
	ArcNode *p;
	printf("�����붥������ͻ��ĸ���\n");
	scanf("%d %d", &n, &m);
	G.vexnum = n;
	G.arcnum = m;

	printf("�����붥��ı��\n");
	for (i = 1; i <= n; ++i) {
		scanf("%d", &q);
		G.vertices[i].data = q;
		G.vertices[i].firstarc = NULL;
	}
	printf("�������\n");
	for (k = 1; k <= m; ++k) {
		scanf("%d %d", &x, &y);
		p = (ArcNode*)malloc(sizeof(ArcNode));
		p->adjvex = y;
		p->nextarc = G.vertices[x].firstarc;
		G.vertices[x].firstarc = p;

		p = (ArcNode*)malloc(sizeof(ArcNode));
		p->adjvex = x;
		p->nextarc = G.vertices[y].firstarc;
		G.vertices[y].firstarc = p;
	}






}
void PrintG(ALGraph G)
{
	int i;
	ArcNode *p;
	printf("����ڽӱ�����:\n");
	for (i = 1; i <= G.vexnum; ++i) {
		printf("%d", G.vertices[i].data);
		p = G.vertices[i].firstarc;
		
		while (p != NULL) {
			printf("->%d", p->adjvex);
			p = p->nextarc;
		}
		printf("\n");
	}
}



void CreatDG(ALGraph &G)
{
	int n, m, x, k, y;
	int i, q;
	ArcNode *p;
	printf("�����붥������ͻ��ĸ���\n");
	scanf("%d %d", &n, &m);
	G.vexnum = n;
	G.arcnum = m;

	printf("�����붥��ı��\n");
	for (i = 1; i <= n; ++i) {
		scanf("%d", &q);
		G.vertices[i].data = q;
		G.vertices[i].firstarc = NULL;
	}
	printf("������ߣ����밴�ջ�ͷ��β����,���绡ͷΪ1,��βΪ2,���������Ϊ1 2\n");
	for (k = 1; k <= m; ++k) {
		scanf("%d %d", &x, &y);
		p = (ArcNode*)malloc(sizeof(ArcNode));
		p->adjvex = y;
		p->nextarc = G.vertices[x].firstarc;
		G.vertices[x].firstarc = p;

	}
}


void CreatUDN(ALGraph &G)
{
	int n, m, x, k, y;
	int i, q;
	int cost;
	ArcNode *p;
	printf("�����붥������ͻ��ĸ���\n");
	scanf("%d %d", &n, &m);
	G.vexnum = n;
	G.arcnum = m;

	printf("�����붥��ı��\n");
	for (i = 1; i <= n; ++i) {
		scanf("%d", &q);
		G.vertices[i].data = q;
		G.vertices[i].firstarc = NULL;
	}
	printf("�������\n");
	for (k = 1; k <= m; ++k) {
		scanf("%d %d", &x, &y);
		p = (ArcNode*)malloc(sizeof(ArcNode));
		p->adjvex = y;
		p->nextarc = G.vertices[x].firstarc;
		G.vertices[x].firstarc = p;

		p = (ArcNode*)malloc(sizeof(ArcNode));
		p->adjvex = x;
		p->nextarc = G.vertices[y].firstarc;
		G.vertices[y].firstarc = p;
	}
}


void DFS(ALGraph G, int i)
{
	int visited[MAX];
	ArcNode *p;
	int s;
	visited[i] = TRUE;
	printf("%d", G.vertices[i].data);
	for (p = G.vertices[i].firstarc; p; p = p->nextarc) {
		s = p->adjvex;
		if (visited[s] != TRUE) {
			DFS(G, s);
		}
	}

	


	

}

void DFSTraverse(ALGraph G)
{
	int visited[MAX];
	int t;
	for (t = 1; t <= G.vexnum; t++) {
		visited[t] = FALSE;
	}
	for (t = 1; t <= G.vexnum; t++) {
		if (visited[t] != TRUE)
			DFS(G, t);
	}
}



