#include<iostream>
using namespace std;
extern double calc(double a,char x,double b);
int main(){
    while(true){     
        string x;
        cin>>x; 
        if(x=="exit"){
            return 0;
        }
        else if(x=="ver"){
            printf("DTF1.0.0 by hello-nb-arm\n");
        }
        else if(x=="calc"){
            double a,b;
            char c;
            printf("第一个数:");
            scanf("%lf",&a);
            printf("运算符号:");
            std::cin>>c;
            printf("第二个数:");
            scanf("%lf",&b);
            printf("%lf\n",calc(a,c,b));
        }
        else{
            std::cout<<x<<"不是一个命令或程序\n";
        }
    }
}