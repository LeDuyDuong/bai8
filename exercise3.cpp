#include <iostream>
using namespace std;

class CDiem {
    private:
    int x,y;
    public:
    friend istream& operator>>(istream&, CDiem&);
    friend ostream& operator<<(ostream&, CDiem&);
    int operator==(const CDiem &);
    int operator!=(const CDiem &);
};

istream& operator>>(istream&is, CDiem&a){
    cout<<"Nhap x: ";
    is>>a.x;
    cout<<"Nhap y: ";
    is>>a.y;
    return is;
}

ostream& operator<<(ostream&os, CDiem&a){
    os<<"("<<a.x<<","<<a.y<<")";
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

int main(){
    CDiem a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Diem a va b trung nhau";
    if(a!=b)
    cout<<"Diem a va b khong trung nhau";
    return 0;
}