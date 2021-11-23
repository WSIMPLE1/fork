#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
#include<sys/wait.h>

int main(void)
{
	pid_t pid,wpid;
	pid=fork();
	int status;
	if(pid==-1)
	{
		perror("fork error");
		exit(1);
	}
	else if(pid==0)
		{
			printf("---chilrend is created ,pid=%d\n,father pid=%d\n",getpid(),getppid());
			sleep(10);
			printf("----child die---");
			return 165;
		}
	else if (pid>0){
		wpid=wait(&status);
		if(wpid==-1)
		{
		perror("wait error");
		exit(1);
		}
		if(WIFEXITED(status))
		{
			printf("child exit with %d\n",WEXITSTATUS(status));
		}
		if(WIFEXITED(status))
		{
			printf("child kill with single %d\n",WTERMSIG(status));
		}


		printf("---parent wait finish\n");

	}

	return 0 ;

}


