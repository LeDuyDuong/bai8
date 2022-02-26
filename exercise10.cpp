#include <iostream>
using namespace std;

class CDuongTron {
    private:
    int a,b,R;
    public:
    friend istream& operator>>(istream&, CDuongTron&);
    friend ostream& operator<<(ostream&, CDuongTron&);
    int operator==(const CDuongTron &);
    int operator!=(const CDuongTron &);
};

istream& operator>>(istream&is, CDuongTron&x){
    cout<<"Nhap hoanh do x: ";
    is>>x.a;
    cout<<"Nhap tung do y: ";
    is>>x.b;
    cout<<"Nhap R: ";
    is>>x.R;
    return is;
}

ostream& operator<<(ostream&os,CDuongTron&x){
    os<<"Duong tron co tam I("<<x.a<<","<<x.b<<") va co ban kinh R="<<x.R;
    return os;
}

int CDuongTron::operator==(const CDuongTron &x){
    if(a==x.a && b==x.b && R==x.R)
       return 1;
    else
       return 0;
};

int CDuongTron::operator!=(const CDuongTron &x){
    if(a!=x.a && b!=x.b && R!=x.R)
       return 1;
    else
       return 0;
};


int main(){
    CDuongTron a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Duong tron a va b trung nhau";
    if(a!=b)
    cout<<"Duong tron a va b khong trung nhau";
    return 0;
};