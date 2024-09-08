#include <iostream>
int findMax(const int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i+1]>arr[i]){
            max=arr[i+1];
        }
    }
    return max;
}

int main(){
    int arr[]={1,45,75,34,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=findMax(arr,size);
    std::cout<<result<<std::endl;

}
