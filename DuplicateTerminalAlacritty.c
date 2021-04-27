#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define FILE1 "temp.txt"
int main() {
	// --working-directory <working-directory>
	pid_t pid;
	pid = fork();
	if (pid == 0)	{
		execlp("alacritty","alacritty", "--working-directory",".", 0);
		exit(1);
	}
	exit(1);
} 
