#include<iostream>
#include<string>
using namespace std;

class Print{
public:
void show(int x){
    cout<<"int :"<<x<<endl;
}
void show(string str)
{
    cout<<"string :"<<str<<endl;
}
};

int main(){
Print obj1;
    obj1.show(25);
    obj1.show(45);
    obj1.show("Chintamani Kharat");
    obj1.show("Gayatri Kharat");
    return 0;

}