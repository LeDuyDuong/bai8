#include <iostream>
using namespace std;

class CSoPhuc {
    private:
    int thuc,ao;
    public:
    friend istream& operator>>(istream&, CSoPhuc&);
    friend ostream& operator<<(ostream&, CSoPhuc&);
    int operator==(const CSoPhuc &);
    int operator!=(const CSoPhuc &);
};

istream& operator>>(istream&is, CSoPhuc&x){
    cout<<"Nhap phan thuc: ";
    is>>x.thuc;
    cout<<"Nhap phan ao: ";
    is>>x.ao;
    return is;
}

ostream& operator<<(ostream&os,CSoPhuc&x){
    os<<x.thuc<<"+("<<x.ao<<")i";
    return os;
}

int CSoPhuc::operator==(const CSoPhuc &x){
    if(thuc==x.thuc && ao==x.ao)
       return 1;
    else
       return 0;
};

int CSoPhuc::operator!=(const CSoPhuc &x){
    if(thuc!=x.thuc && ao!=x.ao)
       return 1;
    else
       return 0;
};


int main(){
    CSoPhuc a,b;
    cin>>a>>b;
    if(a==b)
    cout<<"so thuc a bang so thuc b";
    if(a!=b)
    cout<<"so thuc a khong bang so thuc b";
    return 0;
};