#include <iostream>
//#include <Stack>
using namespace std;

void PAT_1022()
{
	int A,B,C,D,scale; 
	int sum[31],i=0;
	//stack<int> S; 
	scanf("%d %d %d",&A,&B,&scale);
	//if(!num) return;
	C=A+B;
	
	for(;C/scale!=0;C=C/scale)
	{
		D=C%scale;
		sum[i++]=D;
		//S.push(D);	
	}
	D=C%scale;
	sum[i++]=D;	
	//S.push(D);
	while(i)
	{
		printf("%d",sum[--i]);		
	}
//	while(!S.empty())
//	{
//		printf("%d",S.top());
//		S.pop();//no return value		
//	}
	
}

int main(int argc, char** argv) 
{
	//while(1)
	PAT_1022();
	return 0;
}


