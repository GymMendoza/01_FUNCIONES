#include <iostream>

using namespace std;
int factorial(int);
int main(){
    int n,fact=0;
    cin>>n;
    fact=factorial(n);
    cout<<"el factorial es: "<<fact<<endl;
}

int factorial(int n){
    if(n==1){
        return 1;
    } else{
        return n*factorial(n-1);
    }

}