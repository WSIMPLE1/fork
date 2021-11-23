
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
#include<sys/wait.h>

int main(int argc,int argv[])
{
	pid_t pid,wpid;
       int i;
	for(i=0;i<5;i++){
		
	          

		if(fork()==0)
		{
		if(i==2)
	         {
			 pid=getpid();		
		 }
			break;

		}
		
	         		
	

	}
	

	

	if(i==5)
	{
		sleep(5);
	     wpid =waitpid(pid,NULL,WNOHANG);
	     if(wpid==-1)
	     {
		     perror("waitpid error");
		     exit(1);
	     }
	     printf("I'm parent,wait a child finish:%d\n",wpid);


	}
	else {
		sleep(i);
		printf("I'm %d\n",i+1);	
	}


}

