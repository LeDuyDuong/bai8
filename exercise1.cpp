#include <iostream>
using namespace std;

class CHonSo {
    private:
    int nguyen, tu, mau;
    float dtb;
    public:
    friend istream& operator>>(istream&, CHonSo&);
    friend ostream& operator<<(ostream&, CHonSo&);
    int operator>(const CHonSo &);
    int operator<(const CHonSo &);
    int operator==(const CHonSo &);
    int operator!=(const CHonSo &);
    int operator>=(const CHonSo &);
    int operator<=(const CHonSo &);
};

istream& operator>>(istream&is, CHonSo&x){
    cout<<"Nhap phan nguyen: ";
    is>>x.nguyen;
    cout<<"Nhap phan tu: ";
    is>>x.tu;
    cout<<"Nhap phan mau: ";
    is>>x.mau;
    return is;
}

ostream& operator<<(ostream&os, CHonSo&x){
    os<<x.nguyen<<"x("<<x.tu<<"/"<<x.mau<<")";
    return os;
}

int CHonSo::operator>(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>0 && nguyen>x.nguyen)
       return 1;
    else
       return 0;
}

int CHonSo::operator<(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<0 && nguyen<x.nguyen)
       return 1;
    else
       return 0;
}

int CHonSo::operator>=(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>=0 && nguyen>=x.nguyen)
       return 1;
    else
       return 0;
}

int CHonSo::operator<=(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<=0 && nguyen<=x.nguyen)
       return 1;
    else
       return 0;
}

int CHonSo::operator==(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)==0 && nguyen==x.nguyen)
       return 1;
    else
       return 0;
}

int CHonSo::operator!=(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)!=0 && nguyen!=x.nguyen)
       return 1;
    else
       return 0;
}

int main(){
    CHonSo a,b;
    cin>>a>>b;
    if(a>b)
        cout<<" a lon hon b";
    if(a<b) 
        cout<<" a nho hon b";
    if(a==b)
        cout<<" a bang b";
    if(a!=b)
        cout<<" a khac b";
    if(a>=b)
        cout<<" a lon hon va bang b";
    if(a<=b)
        cout<<" a nho hon va bang b";
    return 0;
}
