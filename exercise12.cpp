#include <iostream>
using namespace std;

class CHinhCau {
    private:
    int a,b,R;
    public:
    friend istream& operator>>(istream&, CHinhCau&);
    friend ostream& operator<<(ostream&, CHinhCau&);
    int operator==(const CHinhCau &);
    int operator!=(const CHinhCau &);
};

istream& operator>>(istream&is, CHinhCau&x){
    cout<<"Nhap hoanh do x: ";
    is>>x.a;
    cout<<"Nhap tung do y: ";
    is>>x.b;
    cout<<"Nhap R: ";
    is>>x.R;
    return is;
}

ostream& operator<<(ostream&os,CHinhCau&x){
    os<<"Hinh cau co tam I("<<x.a<<","<<x.b<<") va co ban kinh R="<<x.R;
    return os;
}

int CHinhCau::operator==(const CHinhCau &x){
    if(a==x.a && b==x.b && R==x.R)
       return 1;
    else
       return 0;
};

int CHinhCau::operator!=(const CHinhCau &x){
    if(a!=x.a && b!=x.b && R!=x.R)
       return 1;
    else
       return 0;
};


int main(){
    CHinhCau a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Hinh cau a va b trung nhau";
    if(a!=b)
    cout<<"Hinh cau a va b khong trung nhau";
    return 0;
};