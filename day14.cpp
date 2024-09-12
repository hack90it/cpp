//1.
#include<iostream>
#include<string>
using namespace std;
class car{
    private:
    string BrandName;
    string Model;
    string Engine;
    int Seats;

    public:
    car(string b,string m,string e,int s){
        BrandName=b;
        Model=m;
        Engine=e;
        Seats=s;
    }
    
void displayInfo(){
    cout<<"Car Information:"<<endl;
    cout<<"BrandName: "<<BrandName<<endl;
    cout<<"Model: "<<Model<<endl;
    cout<<"Engine: "<<Engine<<endl;
    cout<<"Number of seats: "<<Seats<<endl;
}
    
};
int main(){
    car c("BMW","BMW-5","2.5L",4);
    c.displayInfo();
    return 0;
    
}

//2.

#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    Rectangle(const Rectangle &rect){
        length=rect.length;
        breadth=rect.breadth;
        cout<<"copy constructor"<<endl;
    }
    void display(){
        cout<<"length: "<<length<<endl<<"breadth: "<<breadth<<endl;
    }
};
int main(){
    Rectangle rect(10,20);
    rect.display();
    Rectangle rect1=rect;
    rect1.display();
}
