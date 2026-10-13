#include<iostream>
using namespace std;
class student{
    void add(int a){
        cout<<"value of a is"<<a<<endl;
    };
 void add(int a,int b){
    cout<<"value of a and b is"<<a+b<<end;
 };
 void add(int a,int b,int c){
    cout<<"value of a and b and c is"<<a+b+c
<<endl; 
};
int main(){
    student obj;
    obj.add(10);
     obj.add(10,20);
     obj.add(10,20,30);
    

}
}
