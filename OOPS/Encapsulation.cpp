#include <iostream>
using namespace std ;

class thief{
    private :
    string name , addr;
    int mob ;
    
    public :
    void input(){
        name="raj";
        addr="main road";
        mob=123456789;
    }
    void output (){
        cout<<name<<endl;
        cout<<addr<<endl;
        cout<<mob<<endl;
    }
    
};

class police:public thief {
    

};

int main() {
 police p;
//  p.output();
 
 thief a ;
 p.input();
 p.output();
 
 
 
    return 0;
}