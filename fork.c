#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

int main(int argc,int argv[])
{
	pid_t pid=fork();
	if(pid==-1)
	{
		perror("fork error");
		exit(1);
	}
	else if(pid==0)
		{
			printf("---chilrend is created ,pid=%d\n,father pid=%d",getpid(),getppid());
		}
	else if (pid>0){
		printf("--my chirld is %d,mypid %d\n,myparentpid %d",pid,getpid(),getppid());
	}



	return 0 ;

}

