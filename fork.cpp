#include <iostream>
#include <unistd.h>

using namespace std;

int main(int argc, char **argv) {
    clock_t start = clock();
    int a = 0;

    int timeout = atoi(argv[1]);

    pid_t pid = fork();

    if (pid == 0) {
        // child process
        sleep(5);
        a = 3;
        cout << "finished child. a = " << a << endl;
    } else if (pid > 0) {
        // parent process
    	while ((int) ((clock() - start) / (float)CLOCKS_PER_SEC) < timeout);
    	cout << "finished parent. a = " << a << endl;
    }

    return 0;
}
