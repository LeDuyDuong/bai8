#include <iostream>
#include <math.h>
using namespace std;

class CDiem {
    private:
    int x,y;
    int kc;
    public:
    friend istream& operator>>(istream&, CDiem&);
    friend ostream& operator<<(ostream&, CDiem&);
    int operator>(const CDiem &);
    int operator<(const CDiem &);
    int operator==(const CDiem &);
    int operator!=(const CDiem &);
    int operator>=(const CDiem &);
    int operator<=(const CDiem &);
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

int CDiem::operator>(const CDiem &a){
    float kc=sqrt(pow(x,2)+pow(y,2))-sqrt(pow(a.x,2)+pow(a.y,2));
    if(kc>0)
       return 1;
    else 
       return 0;
}

int CDiem::operator<(const CDiem &a){
    float kc=sqrt(pow(x,2)+pow(y,2))-sqrt(pow(a.x,2)+pow(a.y,2));
    if(kc<0)
       return 1;
    else 
       return 0;
}

int CDiem::operator>=(const CDiem &a){
    float kc=sqrt(pow(x,2)+pow(y,2))-sqrt(pow(a.x,2)+pow(a.y,2));
    if(kc>=0)
       return 1;
    else 
       return 0;
}

int CDiem::operator<=(const CDiem &a){
    float kc=sqrt(pow(x,2)+pow(y,2))-sqrt(pow(a.x,2)+pow(a.y,2));
    if(kc<=0)
       return 1;
    else 
       return 0;
}

int CDiem::operator==(const CDiem &a){
    float kc=sqrt(pow(x,2)+pow(y,2))-sqrt(pow(a.x,2)+pow(a.y,2));
    if(kc==0)
       return 1;
    else 
       return 0;
}

int CDiem::operator!=(const CDiem &a){
    float kc=sqrt(pow(x,2)+pow(y,2))-sqrt(pow(a.x,2)+pow(a.y,2));
    if(kc!=0)
       return 1;
    else 
       return 0;
}

int main(){
    CDiem a,b;
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
