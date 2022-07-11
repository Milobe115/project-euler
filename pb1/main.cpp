#include <iostream>

#define PARAM 1

void process(int bound){
    int sum = 0;
    for (int i = 1; i < bound; i++){
        if (!(i % 3 && i % 5)) sum += i;
    }

    std::cout << sum << std::endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process( atoi(argv[1]) );
}