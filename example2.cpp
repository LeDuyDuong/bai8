#include <iostream>
using namespace std;

class CPhanSo {
    private:
    int tu;
    int mau;
    public:
    CPhanSo operator-(CPhanSo &);
    int operator>(const CPhanSo &);
    int operator<(const CPhanSo &);
    int operator>=(const CPhanSo &);
    int operator<=(const CPhanSo &);
    int operator!=(const CPhanSo &);
    int operator==(const CPhanSo &);
    friend istream& operator>>(istream&, CPhanSo &);
    friend ostream& operator<<(ostream&, CPhanSo &);
};

CPhanSo CPhanSo::operator-(CPhanSo &x){
    CPhanSo temp;
    temp.tu=tu*x.mau-x.tu*mau;
    temp.mau=mau*x.mau;
    return temp;
}

int CPhanSo::operator>(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator<(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator<=(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<=0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator>=(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>=0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator!=(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)!=0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator==(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)==0)
       return 1;
    else
       return 0;
}

istream& operator>>(istream&is, CPhanSo &x){
    cout<<"Nhap tu so: ";
    is>>x.tu;
    cout<<"Nhap mau so: ";
    is>>x.mau;
    return is;
}

ostream& operator<<(ostream&os, CPhanSo &x){
    os<<x.tu<<"/"<<x.mau;
    return os;
}

int main(){
    CPhanSo a,b;
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


