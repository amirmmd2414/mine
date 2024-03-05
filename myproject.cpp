#include <iostream>
using namespace std;
void swap(int* a,int * b){

}
int main(){
    int a = 1;
    int b = 2;
    swap(&a,&b);
    cout << "this does exist" << endl;
    cout << a << endl << b << endl; 
    return 0;
}
