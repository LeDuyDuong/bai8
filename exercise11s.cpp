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
    friend ostream& operator<<(ostream& , CTamGiac& );
    friend istream& operator>>(istream& , CTamGiac& );
    int operator==(const CTamGiac &);
    int operator!=(const CTamGiac &);
};

istream& operator>>(istream& is, CDiem&a){
        cout<<"Nhap x: ";
        is>>a.x;
        cout<<"Nhap y: ";
        is>>a.y;
        return is;
    }

ostream& operator<<(ostream& os, CDiem&a){
    os<<"("<<a.x<<","<<a.y<<")";
    return os;
}

ostream& operator<<(ostream& os, CTamGiac& a){
    cout<<"Toa do 3 dinh: ";
    cout<<a.A;
    cout<<a.B;
    cout<<a.C;
    return os;
}

istream& operator>>(istream& is, CTamGiac& a){
    cout<<"Toa do dinh 1: "<<endl;
    cin>>a.A;
    cout<<"Toa do dinh 2: "<<endl;
    cin>>a.B;
    cout<<"Toa do dinh 3: "<<endl;
    cin>>a.C;
    return is;
}

/*istream& operator<<(istream &is, CDiem &a){
    cout<<"Nhap x: "<<endl;
    is>>a.x;
    cout<<"Nhap y: "<<endl;
    is>>a.y;
    return is;
}

ostream& operator>>(ostream &os, CDiem &a){
    os<<"("<<a.x<<","<<a.y<<")";
    return os;
}*/

/*void CTamGiac::Nhapt(){
    cout<<"Nhap diem A: "<<endl;
    cin>>A;
    cout<<"Nhap diem B: "<<endl;
    cin>>B;
    cout<<"Nhap diem C: "<<endl;
    cin>>C;
}

/*void CTamGiac::Xuatt(){
    cout<<"Tam giac co diem A "<<endl;
    cout<<A;
    cout<<"Tam giac co diem B "<<endl;
    cout<<B;
    cout<<"Tam giac co diem C "<<endl;
    cout<<C;
}*/

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