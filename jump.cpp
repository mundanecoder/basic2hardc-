//using continue to skip items.

#include<iostream>


using namespace std;

int main(){


int n =100;


    for(int i=0;i<=n;i++)
    {
        if(i%3==0){
            continue;
        }

    cout<<i<<endl;
    }
}
