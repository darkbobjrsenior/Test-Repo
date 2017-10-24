#include <iostream>

int double(int num);

int main(int argc, char *argv[]){
    int x = 5;
    x += 27;
    int y = double(x);
    std::cout << "The answer is: " << x << std::endl;
    
    return 0;
}


int double(int num){
    return num * 2;
}
