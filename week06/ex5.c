#include <stdio.h>
#include <sys/types.h>
#include <sys/signal.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
    int fork_check = fork();

    if (fork_check != 0)
    {
	{
        sleep(10);
        kill(fork_check, SIGTERM);
    	}
       
    }
    else
    while (1)
        {
            printf("I'm alive\n");
            sleep(1);
        }

}
