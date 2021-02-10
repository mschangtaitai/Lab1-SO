#include <stdio.h>
#include <unistd.h>

int main(){
	int f = (int)fork();

	if (f = 0){
		execl("main", (char*)NULL);
	}
	else{
		printf("%d\n", (int)getpid());
		execl("main", (char*)NULL);
	}
}
