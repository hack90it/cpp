#include<iostream>
using namespace std;
int main(){
    int *ptr=new int;
    *ptr=4;
    cout<<"value of dynamic variable: "<<*ptr<<endl;
    
    int size=7;
    int* arr=new int [size];
    for(int i=0;i<size;i++){
        arr[i]=i;
    }
    cout<<"values stored in dynamic array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}
