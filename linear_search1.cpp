#include<iostream>

using namespace std;

int ls(int arr[],int n,int key){

    for(int i=0; i<n;i++){
        if(arr[i]== key){
            return i;
        }
    }
    
    return -1;
}


int main(){

    int n;
    cin>>n;
    int i;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;

    cout<<"enter key :"<<endl;
    cin>>key;


    cout<<ls(arr,n,key)<<endl;

    return 0;
}
