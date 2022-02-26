#include <iostream>
using namespace std;

class CDonThuc {
    private:
    int a,b;
    public:
    friend istream& operator>>(istream&, CDonThuc&);
    friend ostream& operator<<(ostream&, CDonThuc&);
    int operator==(const CDonThuc &);
    int operator!=(const CDonThuc &);
};

istream& operator>>(istream&is, CDonThuc&x){
    cout<<"Nhap co so a: ";
    is>>x.a;
    cout<<"Nhap so mu: ";
    is>>x.b;
    return is;
}

ostream& operator<<(ostream&os,CDonThuc&x){
    os<<x.a<<"x^("<<x.b<<")";
    return os;
}

int CDonThuc::operator==(const CDonThuc &x){
    if(a==x.a && b==x.b )
        return 1;
    else 
        return 0;
}

int CDonThuc::operator!=(const CDonThuc &x){
    if(a!=x.a && b!=x.b )
        return 1;
    else 
        return 0;
}

int main(){
    CDonThuc a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Don thuc a bang don thuc b";
    if(a!=b)
    cout<<"Don thuc a khong bang don thuc b";
    return 0;
}