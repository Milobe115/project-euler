#include <iostream>

#define PARAM 1

void process(int limit){
    int a = 1, b = 2;

    int sum = 0;

    while (b < limit){
        int val = a + b;
        a = b;
        b = val;

        if (!(a%2)) sum += a;
    }

    std::cout << sum << std::endl;

}

void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
