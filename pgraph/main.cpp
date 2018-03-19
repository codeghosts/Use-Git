#include "Gheader.h"


using namespace std;







int main()
{
	ALGraph G;
	ArcNode *p;
	
	
	


	p = (ArcNode*)malloc(sizeof(ArcNode));
	printf("请输入您需要的图\n");
	printf("1.无向图 2.有向图 3.无向网 4.深度优先遍历\n");
	scanf("%d", &G.kind);
	switch (G.kind) {
	case 1:CreatUDG(G);
		   PrintG(G);
		   break;
	case 2:CreatDG(G);
		   PrintG(G);
		   break;
	case 4:CreatUDG(G);
		   printf("深度遍历结果为\n");
		   DFSTraverse(G);
		  break;

	}
	

	return 0;


}