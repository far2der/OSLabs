#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main() {
    	int pid = fork();
    	if (pid != 0) {
		sleep(10);
		kill(pid, SIGTERM);
    	} else {
        	while (1) {
            		printf("I'm alive\n");
            		sleep(1);
        	}
	}

	return 0;
}