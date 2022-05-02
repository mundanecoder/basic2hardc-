// switch cases to do genric arithmetic calculations


#include<iostream>

using namespace std;

int main(){
    int n1,n2;

    cin>>n1>>n2;

    int add_val,div_val,sub_val,mul_val;

    int button;
    cout<< "1.for add, 2 .for sub, 3,.for multiplication , 4.for division"<<endl;
    cin>>button;

    switch(button){
        case 1:
        add_val = n1 + n2;
        cout<<add_val<<endl;
        break;
        case 2:
        sub_val = n1-n2;
        cout<<sub_val<<endl;
        break;
        case 3:
        mul_val = n1*n2;
        cout<<mul_val<<endl;
        break;
        case 4:
        div_val = n1/n2;
        cout<<div_val<<endl;
        break;

        default:
        cout<<"well this is my limit of knowledge";
        break;
        
    }

    return 0;
}
