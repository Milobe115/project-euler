#include <iostream>
#include <cstring>

#define PARAM 1

void process(char *number){
    using namespace std;

    size_t len = strlen(number);
    size_t biggest = 1;

    for (int i = 0; i < len - 12; i++){
        size_t arr[13];

        size_t val = 1;

        cout << " >>> ";

        for (int k = 0; k < 13; k++){
            arr[k] = number[i+k] - '0';
            cout << arr[k];
            val *= arr[k];
        }

        cout << endl;

        biggest = max(biggest, val);
    }

    cout << biggest << endl;

}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(argv[1]);
}
