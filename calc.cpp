#include<bits/stdc++.h>
double calc(double a,char x,double b){
    double t;
    if(x=='+'){
        t=a+b;
    }
    else if(x=='-'){
        t=a-b;
    }
    else if(x=='*'){
        t=a*b;
    }
    else if(x=='/'){
        t=a/b;
    }
    return t;
}