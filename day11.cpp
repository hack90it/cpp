#include <iostream>

int findtargetval(int arr[],int size,int target){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}

int findIndex(int arr[],int size,int target){
     for(int i=0;i<size;i++){
         if(arr[i]==target){
             return i;
         }
     }
     return -1;
}
int main(){
    int arr[]={2,4,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    std::cin>>target;
    int result=findtargetval(arr,size,target);
    if(result>0){
        std::cout<<"YES"<<std::endl;
    }
    else{
        std::cout<<"NO"<<std::endl;
    }
    std::cout<<findIndex(arr,size,target)<<std::endl;
}
