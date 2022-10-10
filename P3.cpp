#include<iostream>
using namespace std;
class Shape {
    public:
    float L,B,R,H;

};
class circle:public Shape{
    public:
    void getdata(){
        cout<<"Enter Radius of Circle :";
        cin>>R;
    }
    void showarea(){
        cout<<"Area Of Circle :"<<3.14*R*R<<endl;
    }
};
class Triangle : public Shape{
    public:
    void getdata(){
        cout<<"Enter Base and Height :";
        cin>>B>>H;
    }
    void showarea(){
        cout<<"Area Of Triangle :"<<0.5*B*H<<endl;
    }
};
class Rectangle : public Shape{
    public:
    void getdata(){
        cout<<"Enter Length and Breadth :";
        cin>>L>>B;
    }
    void showarea(){
        cout<<"Area Of Rectangle :"<<L*B<<endl;
    }
};
int main()
{
    Rectangle R1;
    R1.getdata();
    R1.showarea();
    Triangle T2;
    T2.getdata();
    T2.showarea();
    circle C3;
    C3.getdata();
    C3.showarea();
    
    return 0;
}
