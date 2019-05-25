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

std::vector<int> fib_list(int n){ //c++ can't have arrays with unknown starting capacity
    std::vector<int> vec = {1, 1};

    for (int i = 2; i <= n; i++){
        vec.push_back(vec.at(i - 1) + vec.at(i - 2));
    }

    return vec;
}

int main(void){
    cout << fib_recurse(20) << "\n";
    std::vector<int> list = fib_list(20);
    for (std::vector<int>::const_iterator i = list.begin(); i != list.end(); i++)
        cout << *i << ", ";
}
