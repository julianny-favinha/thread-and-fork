#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

bool finished = false;
int a = 0;

void executa() {
    sleep(5);

    a = 1;
    cout << "finished executa. a = "<< a << endl;
}

int main(int argc, char **argv) {
    clock_t start = clock();

    int timeout = atoi(argv[1]);

    thread t1(executa);
    t1.detach();

    while ((int) ((clock() - start) / (float)CLOCKS_PER_SEC) < timeout);
    finished = true;

    cout << "timeout. a = " << a << endl;

    return 0;
}
