#include <iostream>
using namespace std;

class CThoiGian{
    private:
    int h,m,s;
    public:
    friend istream& operator>>(istream&, CThoiGian&);
    friend ostream& operator<<(ostream&, CThoiGian&);
    int operator==(const CThoiGian &);
    int operator!=(const CThoiGian &);
};

istream& operator>>(istream&is, CThoiGian&x){
    cout<<"Nhap ngay: ";
    is>>x.h;
    cout<<"Nhap thang: ";
    is>>x.m;
    cout<<"Nhap nam: ";
    is>>x.s;
    return is;
}

ostream& operator<<(ostream&os, CThoiGian&x){
    os<<x.h<<":"<<x.m<<":"<<x.s;
    return os;
}

int CThoiGian::operator==(const CThoiGian &x){
    if(h==x.h && m==x.m && s==x.s)
       return 1;
    else
       return 0;
}

int CThoiGian::operator!=(const CThoiGian &x){
    if(h!=x.h && m!=x.m && s!=x.s)
       return 1;
    else
       return 0;
}

int main(){
    CThoiGian a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Thoi gian a bang thoi gian b";
    if(a!=b)
    cout<<"Thoi gian a khac thoi gian b";
    return 0;
}