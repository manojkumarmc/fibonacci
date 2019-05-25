#include <iostream>
using namespace std;
#include <vector>

int fib_recurse(int n){
    if (n == 1 || n == 0){
        return 1;
    }else {
        return fib_recurse(n - 1) + fib_recurse(n - 2);
    }
}

int fib_optimized(int n){
    std::vector<int> vec = {1, 1};

    for (int i = 2; i <= n; i++){
        vec.push_back(vec.at(i - 1) + vec.at(i - 2));
    }

    return vec.at(n);
}

int main(void){
    cout << fib_recurse(20) << "\n" << fib_optimized(20);
}
