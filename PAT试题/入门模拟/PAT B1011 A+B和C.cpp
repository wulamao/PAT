#include <iostream>
//#include <stdio>
using namespace std;

void PAT_1011()
{
	long long a[10],b[10],c[10];
	char t,i=0;
	scanf("%d",&t);

	while(i++<t)
	{
		scanf("%d %d %d\n",&a[i],&b[i],&c[i]);
		//printf("%d %d %d\n",a[i],b[i],c[i]);
	}
	while(i--)
	{
		if((a[t-i]+b[t-i])>c[t-i])
			printf("Case #%d:true\n",t-i);
		else
			printf("Case #%d:false\n",t-i);	
	} 
}

int main(int argc, char** argv) 
{
	//while(1)
	PAT_1011();
	return 0;
}
