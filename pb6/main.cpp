#include <iostream>

#define PARAM 1

void process(int val){
    using namespace std;

    long n = val;

    cout << n*n*(n+1)*(n+1)/4 - n*(n+1)*(2*n+1)/6 << endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
