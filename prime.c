#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
int main()
{	long long num;
	char ans[99999];
	char buff[100];
	FILE *in;
	extern FILE *popen();
	
		printf("Enter a number within 0 to 10^37");
		scanf("%lld",&num);
		snprintf(buff, sizeof(buff), "factor %lld| grep %lld| cut -d : -f 2 | cut -d ' ' -f 2" ,num);
		in=popen(buff,"r");
		if(fgets(buff,sizeof(buff),in) == num){
			printf("Number is prime");
		}
		else{
			printf("Number is not prime");
		}
		pclose(in);
		return 0;	
}

