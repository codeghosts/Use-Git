#include "Gheader.h"


using namespace std;







int main()
{
	ALGraph G;
	ArcNode *p;
	
	
	


	p = (ArcNode*)malloc(sizeof(ArcNode));
	printf("����������Ҫ��ͼ\n");
	printf("1.����ͼ 2.����ͼ 3.������ 4.������ȱ���\n");
	scanf("%d", &G.kind);
	switch (G.kind) {
	case 1:CreatUDG(G);
		   PrintG(G);
		   break;
	case 2:CreatDG(G);
		   PrintG(G);
		   break;
	case 4:CreatUDG(G);
		   printf("��ȱ������Ϊ\n");
		   DFSTraverse(G);
		  break;

	}
	

	return 0;


}