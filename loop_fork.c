#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

int main(int argc,int argv[])
{
 
	for(int i=0;i<5;i++){
		
	          

		if(fork()==0)
		{
			break;

		}
		printf("I'm %d\n",i+1);	

	}
}

