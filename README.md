# Small programs to test threads and fork

## Threads

Run `g++ -pthread thread.cpp -o thread`
And `./thread <number in seconds to timeout>`

## Fork

Run `g++ fork.cpp -o fork`
And `./fork <number in seconds to timeout>`


Try to test with:
- Number < 5
- Number > 5
And see what happens to `a` variable 😆
