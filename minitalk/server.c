#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


void sigusr_handler(int signum, siginfo_t *info, void *cont)
{
	static int i = 0;
	static char bin = 0;
	static int	c_pid = 0;

	if (!c_pid)
		c_pid = info->si_pid;
	bin = (bin << 1) + (signum == SIGUSR2);
	if (!(++i % 8))
	{
		i = 0;
		if (!bin)
		{
			kill(c_pid, SIGUSR2);
			c_pid = 0; bin = 0; return ;
		}
		write(1, &bin, 1);
		bin = 0;
		kill(c_pid, SIGUSR1);
	}
}

int main()
{
	struct sigaction action;


	action.sa_sigaction = &sigusr_handler;
	action.sa_flags = SA_SIGINFO;

    printf("server PID: %d\n", getpid());
    while (1){
		if (sigaction(SIGUSR1, &action, NULL) < 0 
			|| sigaction(SIGUSR2, &action, NULL) < 0)
				return(write(2, "ERROR\n" , 6));
		usleep(500);
	}
    return 0;
}
