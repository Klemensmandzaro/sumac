#include <iostream>
#include <string>
using namespace std;
int main() {
    string a="";
    cin>>a;
    int b=0;
    b=a.length();
    int suma=0;
    for (int i=0; i<b; i++)
    {
        suma+=(int(a[i]-48));
    }
    cout<<suma;
    return 0;
}
