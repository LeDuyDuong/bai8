#include <iostream>
#include <math.h>
using namespace std;

class CDiem {
    private:
    int x,y;
    public:
    friend ostream& operator<<(ostream&, CDiem&);
    friend istream& operator>>(istream&, CDiem&);
    int operator==(const CDiem &);
    int operator!=(const CDiem &);
};

class CTamGiac{
    private:
    CDiem A, B, C;
    public:
    /* friend ostream& operator<<(ostream&, CTamGiac&);
    friend istream& operator>>(istream&, CTamGiac&); */
    friend ostream& operator<<(ostream&, CTamGiac&);
    friend istream& operator>>(istream&, CTamGiac&);
    int operator==(const CTamGiac &);
    int operator!=(const CTamGiac &);
};

istream& operator>>(istream &is, CDiem &a){
    cout<<"Nhap x: "<<endl;
    is>>a.x;
    cout<<"Nhap y: "<<endl;
    is>>a.y;
    return is;
}

ostream& operator<<(ostream &os, CDiem &a){
    os<<"("<<a.x<<","<<a.y<<")";
    return os;
}

istream& operator>>(istream&is, CTamGiac&x){
    cout<<"Nhap diem A: "<<endl;
    cin>>x.A;
    cout<<"Nhap diem B: "<<endl;
    cin>>x.B;
    cout<<"Nhap diem C: "<<endl;
    cin>>x.C;
    return is;
}

ostream& operator<<(ostream&os, CTamGiac&x){
    cout<<"Tam giac co diem A "<<endl;
    cout<<x.A;
    cout<<"Tam giac co diem B "<<endl;
    cout<<x.B;
    cout<<"Tam giac co diem C "<<endl;
    cout<<x.C;
    return os;
}

int CDiem::operator==(const CDiem &a){
    if(x==a.x && y==a.y)
       return 1;
    else 
       return 0;
}

int CDiem::operator!=(const CDiem &a){
    if(x!=a.x && y!=a.y)
       return 1;
    else 
       return 0;
}

int CTamGiac::operator==(const CTamGiac &x){
    if(A==x.A && B==x.B && C==x.C)
       return 1;
    else
       return 0;
}

int CTamGiac::operator!=(const CTamGiac &x){
    if(A!=x.A && B!=x.B && C!=x.C)
       return 1;
    else
       return 0;
}

int main(){
    CTamGiac a,b;
    cin>>a>>b;
    if(a==b)
       cout<<"Tam giac a trung tam giac b";
    if(a!=b)
       cout<<"Tam giac a khong trung tam giac b";
    return 0;
}
