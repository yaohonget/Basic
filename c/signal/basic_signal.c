#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void signalHandler(int);

int main()
{
	// void (*signal(int sig, void (*func)(int)))(int)
	
	// sid
	// SIGABRT
	// SIGFPE
	// SIGILL
	// SIGINT : Ctrl + c
	// SIGSEGV
	// SIGTERM

	// func
	// SIG_DFL
	// SIG_IGN
	signal(SIGINT, signalHandler);

	while(1)
	{
		printf("sleep 1 second...\n");
		sleep(1);
	}

	return 0;

}

void signalHandler(int signum)
{
	printf("catch signal %d.\n", signum);
	exit(1);
}