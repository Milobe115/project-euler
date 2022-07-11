#include <iostream>
#include <list>

#define PARAM 1

void process(int limit){
    using namespace std;
    
    bool array[limit + 1] = {false};
    
    for(int i = 2; i < limit; i++){
        array[i] = true;
    }

    long long sum = 0;

    for (int i = 2; i < limit; i++){
        if (array[i]){
            sum += i;
            int k = 2;
            while(k*i < limit){
                array[k*i] = false;
                k++;
            }
        }

        if (i % 10000 == 9999) cout << "On a atteint " << i+1 << endl;
    }

    cout << sum << endl;

}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
