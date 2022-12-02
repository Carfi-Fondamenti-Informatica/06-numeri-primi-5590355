#include <iostream>

int main() {
    int n,k;
    bool f;

    do {
        cout<<"inserisci un numero strettamente positivo"<<endl;
        cin>>n;
    }while (n<=0);

    k=n-1;
    f=numeriprimi (n,k);

    if (f==true) {
        cout<<"il numero e primo";
    }
    else if (f==false) {
        cout<<"il numero non e primo";
    }

    return 0;
}
