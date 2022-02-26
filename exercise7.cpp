#include <iostream>
using namespace std;

class CDiemKhongGian {
    private:
    int x,y,z;
    public:
    friend istream& operator>>(istream&, CDiemKhongGian&);
    friend ostream& operator<<(ostream&, CDiemKhongGian&);
    int operator==(const CDiemKhongGian &);
    int operator!=(const CDiemKhongGian &);
};

istream& operator>>(istream&is, CDiemKhongGian&a){
    cout<<"Nhap x: ";
    is>>a.x;
    cout<<"Nhap y: ";
    is>>a.y;
    cout<<"Nhap z: ";
    is>>a.z;
    return is;
}

ostream& operator<<(ostream&os, CDiemKhongGian&a){
    os<<"("<<a.x<<","<<a.y<<","<<a.z<<")";
    return os;
}

int CDiemKhongGian::operator==(const CDiemKhongGian &a){
    if(x==a.x && y==a.y && z==a.z)
        return 1;
    else 
        return 0;
}

int CDiemKhongGian::operator!=(const CDiemKhongGian &a){
    if(x!=a.x && y!=a.y && z!=a.z)
        return 1;
    else 
        return 0;
}

int main(){
    CDiemKhongGian a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"Diem a va b trung nhau";
    if(a!=b)
    cout<<"Diem a va b khong trung nhau";
    return 0;
}
