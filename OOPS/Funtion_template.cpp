
#include <iostream>
using namespace std ;

template <class A>
void print(A x, A y){
    cout<<x<<ends<<y<<endl;
    
}

int main() {
    
    print(10,20);
    print('a','b');
    print(23.33,333.44);

    return 0;
}