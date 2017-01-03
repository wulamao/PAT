#include <iostream>
//#include <stdio>
using namespace std;

typedef struct
{
	int schSN;
	int score;
}playerInfo;

void PAT_1032()
{
	playerInfo *P;
	int num,max=0,sn;
	int score,schSN;
	
	scanf("%d",&num);//max num
	//if(!num) return;
	P = new playerInfo[num];
	
	for(int i=0;i<num;i++)
	{		
		scanf("%d %d",&schSN,&score);
		P[schSN].score += score;
		if(P[schSN].score > max)
		{
			max = P[schSN].score;
			sn = schSN;
		}	
	}
	
	printf("%d %d",sn,max);
	
//	for(int i=0;i<num;i++)
//	{		
//		printf("\n%d-%d",P[i].schSN,P[i].score);
//	}
		
}

int main(int argc, char** argv) 
{
	//while(1)
	PAT_1032();
	return 0;
}

