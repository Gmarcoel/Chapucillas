#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	pid_t pid;
	pid = fork();
	if (pid == 0)	{
		execlp("alacritty","alacritty", "--working-directory",".", 0);
		exit(1);
	}
	exit(1);
} 
