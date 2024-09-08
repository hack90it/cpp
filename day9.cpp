#include <iostream>

int main(){
    int x;
    std::cin>>x;
    int *p=&x;
    std::cout<<x<<std::endl;
    std::cout<<*p<<std::endl;
    
    int arr[]={1,45,75,34,2};
    int *ptr1=arr;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        std::cout<<*(ptr1+i)<<" ";
    }
    int num;
    std::cin>>num;
    int *ptr=&num;
    int **ptrtoptr=&ptr;
    std::cout<<"value of num: "<<num<<std::endl;
    std::cout<<"value of num using ptr: "<<*ptr<<std::endl;
    std::cout<<"value of num using ptr to ptr: "<<**ptrtoptr<<std::endl;
}
