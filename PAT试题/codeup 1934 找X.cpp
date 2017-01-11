#include <iostream>
#include <cstring>
#include <cstdio>
//#include <Stack>
using namespace std;

void codeup_1934()
{
	int n,s[210]; 
	int i=0,x,flag=0;
	/*notice:return value of scanf()*/
	/*notice:gets() can read string with ' '*/
	//while(scanf("%c",&s[i++])!=EOF){break;};
	
	//scanf("%d",&n);
	//int *s=new int[n];
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
 			scanf("%d",&s[i]);
 			
 		scanf("%d",&x);
		for(i=0;i<n;i++)
		{
			if(s[i]==x)
 			{
				printf("%d\n",i);//notice:\n 
				//flag=1;
				break;
			}
		}	
		//if(!flag)
		if(i==n)
			printf("-1\n");	//notice:\n 
		//break;
	}
}

int main(int argc, char** argv) 
{
	//while(1)
	codeup_1934();
	return 0;
}


