#include <iostream>
using namespace std;
void modifyElement1(int b[]);
void modifyElement2( int *c);

void switchnum(int *m, int *n );
void addingtwo(int*z,int *x);

void switchnumref(int &x, int &i);
void addingtworef(int &r, int &t);

int main() {
    int a[5] = {0, 2, 4, 6, 8};
    /*modifyElement1(a);
    cout<<"a[2]"<<a[2]<<endl;
    modifyElement2(&a[2]);
    cout<<"a[2]:"<<a[2]<<endl;*/
    for (int x = 0; x < 5; x++) {
        cout << a[x] << " ";

    }
    cout<<endl;
    /*switchnum(&a[1],&a[2]);
    cout<<"\nSwitching two elements"<<endl;
     for(int x=0; x<5;x++){
         cout<<a[x]<<" ";
     }*/
    /*switchnumref(a[1], a[2]);
    cout << "\nSwitching two elements pass by reference" << endl;
    for (int x = 0; x < 5; x++) {
        cout << a[x] << " ";


    }*/
    addingtworef(a[1],a[2]);
    for(int x=0;x<5;x++){
        cout<<a[x]<< " ";
    }
}
void modifyElement1(int b[]){
    b[2]=b[2]*2;
}
//cant print 8 with pointers
//fixed: didn't use pointer when multiplying
void modifyElement2(int *c){
    c[2]= c[2]*2;
}
void switchnum(int *m,int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;

}
void switchnumref(int & x, int & i){
    int temp=x;
    x=i;
    i=temp;
}
void addingtwo(int *z, int *x){
    *z= *z+*x;
}
void addingtworef(int &r,int &t){
    r=r+t;
}



