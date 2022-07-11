#include <iostream>

#define PARAM 2

void process(int n, int k){
    using namespace std;
    long pascal[n+1][k+1];

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < k+1; j++){
            pascal[i][j] = 0;
        }
    }

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < k+1; j++){
            if (i == j) pascal[i][j] = 1;
            else if (j == 0) pascal[i][j] = 1;
            else if (j < i) pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            else pascal[i][j] = 0;
        }
    }

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < k+1 ; j++){
            cout << pascal[i][j] << '\t';
        }
        cout << endl;
    }

    cout << "Answer : " << pascal[n][k] << endl; 
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n k" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]), atoi(argv[2]));
}
