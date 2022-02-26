#include <iostream>
using namespace std;

class CDuongThang {
    private:
    int a,b;
    public:
    friend istream& operator>>(istream&, CDuongThang&);
    friend ostream& operator<<(ostream&, CDuongThang&);
    int operator==(const CDuongThang &);
    int operator!=(const CDuongThang &);
};

istream& operator>>(istream&is, CDuongThang&x){
    cout<<"Nhap co so a: ";
    is>>x.a;
    cout<<"Nhap co so b: ";
    is>>x.b;
    return is;
}

ostream& operator<<(ostream&os,CDuongThang&x){
    os<<x.a<<"x+("<<x.b<<")";
    return os;
}

int CDuongThang::operator==(const CDuongThang &x){
    if(a==x.a && b==x.b)
        return 1;
    else 
        return 0;
}

int CDuongThang::operator!=(const CDuongThang &x){
    if(a!=x.a && b!=x.b)
        return 1;
    else 
        return 0;
}

int main(){
    CDuongThang a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Duong thang a trung duong thang b";
    if(a!=b)
    cout<<"Duong thang a khong trung duong thang b";
    return 0;
}