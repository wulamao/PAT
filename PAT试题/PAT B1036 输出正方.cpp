#include <iostream>

using namespace std;

void PAT_1036()
{	
	int num,num_i,ch;
	scanf("%d %c",&num,&ch);
	//if(!num) return;
	if(num%2==0) num_i = num/2;
	else num_i = num/2+1; 
	for(int i=0;i<num_i;i++)
		for(int j=0;j<num;j++)
		{
			if(i==0||i==num_i-1)printf("%c",ch);			
			else
			{
				if(j==0||j==num-1)printf("%c",ch);
				else printf("%c",' ');
			}	
			if(j==num-1)
			{
				printf("\n");
			}	
		}
}

int main(int argc, char** argv) 
{
	//while(1)
	PAT_1036();
	return 0;
}

