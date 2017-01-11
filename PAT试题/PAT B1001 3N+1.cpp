#include <iostream>
//#include <stdio>
using namespace std;

void PAT_1001()
{
	int n,num=0;
	scanf("%d",&n);
	if(!n) return;
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;	
		}
		else
		{
			n=(3*n+1)/2;//lack of '/2' 
		}
		num++;
		//printf("%d %d\n",num,n);
	}
	
	printf("%d\n",num);
	//printf("%d\n",n);
}

int main(int argc, char** argv) 
{
	//while(1)
	PAT_1001();
	return 0;
}
