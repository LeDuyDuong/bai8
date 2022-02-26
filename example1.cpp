#include <iostream>
using namespace std;

class CHocSinh {
    private:
    int toan, van;
    string hoten; 
    float dtb;
    public:
    int operator>(CHocSinh&);
    friend istream& operator>>(istream&, CHocSinh &);
    friend ostream& operator<<(ostream&, CHocSinh &);  
    float dtbinh();
};


int CHocSinh::operator>(
    CHocSinh&x){
    if (this->dtbinh() > x.dtbinh())
       return 1;
    return 0;  
}

istream& operator>>(istream&is, CHocSinh &x){
    cout<<"Enter toan: ";
    is>>x.toan;
    cout<<"Enter van: ";
    is>>x.van;
    return is;
}

ostream& operator<<(ostream&os, CHocSinh &x){
    os<<x.toan<<"--"<<x.van;
    return os;
}  

float CHocSinh::dtbinh(){
    dtb=(toan+van)/2;
    return dtb;
}

int main(){
    CHocSinh a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"DTB a lon hon DTB b";
    else
        cout<<"DTB a khong lon hon b";
    return 0;
}