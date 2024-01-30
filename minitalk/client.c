#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void	send_sig(char n, pid_t receiver_pid)
{
	int i = 7;
	while (i >= 0)
	{
		if ((n >> i--) & 1)
		{kill(receiver_pid, SIGUSR2); usleep(500);}
		else 
		{kill(receiver_pid, SIGUSR1); usleep(500);}
	}
}

void sigusr_handler(int signum)
{
	static int n;

    if (signum == SIGUSR1) 
		n++;
    else if (signum == SIGUSR2)
        {printf("Message received.\nNumber of characters sent : %d\n",n); n = 0; exit(0);}
	else
		printf("number of characters sent : %d\n",n);
}

int main(int c, char **v)
{
	if (c < 3)
		return (0);
	signal(SIGUSR1, sigusr_handler);
	signal(SIGUSR2, sigusr_handler);
    pid_t receiver_pid;
	receiver_pid = atoi(v[1]);
    
	printf("client PID: %d\n", getpid());
	int i = 0;
	while (v[2][i])
		send_sig(v[2][i++], receiver_pid);
	send_sig(v[2][i], receiver_pid);

	while (1){
		if (kill(receiver_pid, 0))
			write(2, "ERROR\n" , 6); exit(0);
		pause();
	}
    return 0;
}
