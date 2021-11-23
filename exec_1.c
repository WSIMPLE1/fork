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
			execlp("ls","ls","-l","-d","-h",NULL);
			perror("exec error");
			exit(1);
		}
	else if (pid>0){
		sleep(1);
		printf("-----I'm father,mypid is%d",getpid());
	}



	return 0 ;

}


