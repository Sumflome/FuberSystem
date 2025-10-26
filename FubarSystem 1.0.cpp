#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;

void help(){
    cout<<"help   |查看帮助"<<endl;
    cout<<"timer  |计时器"<<endl;
    cout<<"comp   |计算器"<<endl;
    cout<<"Box    |沙盒"<<endl;
    return ;
}

void helpwen(){
    cout<<"help   |查看帮助"<<endl;
    cout<<"timer  |计时器"<<endl;
    cout<<"comp   |计算器"<<endl;
    return ;
}

void timer(int time){
    for(int i=1;i<=time;i++){
        Sleep(1000);
    }
    cout<<"计时结束！"<<endl;
    return ;
}
void comp(){
    long double a,b;
    char dou;
    cout<<"请输入两个要计算的值:";
    cin>>a>>b;
    cout<<endl;
    cout<<"请输入计算符号:";
    cin>>dou;
    cout<<endl<<"输出:";
    if(dou=='+'){
        cout<<a+b<<endl;
    }
    else if(dou=='-'){
        cout<<a-b<<endl;
    }
    else if(dou=='/'){
        cout<<a/b<<endl;
    }
    else if(dou=='*'){
        cout<<a*b<<endl;
    }
    else{
        cout<<"运算符号？"<<endl;
    }
    return ;
}

void Box(){
    cout<<"________________________"<<endl;
    cout<<"|                       |"<<endl;
    cout<<"|----FuberSystem 1.0----|"<<endl;
    cout<<"|_______________________|"<<endl;
    cout<<"输入:break可以退出"<<endl;
    cout<<"正在加载:";
    for(int i=1;i<=15;i++){
        cout<<"|";
        Sleep(500);
    }
    cout<<endl;
    cout<<"注意:此“系统”仅在Windows环境下运行"<<endl;
    cout<<"  给予的解释是:Windows.h运行库"<<endl;
    cout<<"总之:输入help可以获取帮助"<<endl;
    for(int i=1;i<=500;i++){
        cout<<"Windows-Fuber:\\>";
        string outlook;
        cin>>outlook;
        if(outlook=="help"){
            helpwen();
        }
        else if(outlook=="timer"){
            int time=0;
            cout<<"输入计时秒数:";
            cin>>time;
            timer(time);
        }
        else if(outlook=="comp"){
            comp();
        }
        else if(outlook=="break"){
            cout<<"已退出沙盒"<<endl;
            return ;
        }
        else{
            cout<<"这个"<<outlook<<"不是FuberSystem系统中的命令"<<endl;
        }
    }
    return ;
}
int main(void){
    cout<<"________________________"<<endl;
    cout<<"|                       |"<<endl;
    cout<<"|----FuberSystem 1.0----|"<<endl;
    cout<<"|_______________________|"<<endl;
    cout<<"正在加载:";
    for(int i=1;i<=15;i++){
        cout<<"|";
        Sleep(500);
    }
    cout<<endl;
    cout<<"注意:此“系统”仅在Windows环境下运行"<<endl;
    cout<<"  给予的解释是:Windows.h运行库"<<endl;
    cout<<"总之:输入help可以获取帮助"<<endl;
    for(int i=1;i<=500;i++){
        cout<<"Windows-Fuber:\\>";
        string outlook;
        cin>>outlook;
        if(outlook=="help"){
            help();
        }
        else if(outlook=="timer"){
            int time=0;
            cout<<"输入计时秒数:";
            cin>>time;
            timer(time);
        }
        else if(outlook=="comp"){
            comp();
        }
        else if(outlook=="Box"||outlook=="box"){
            Box();
        }
        else{
            cout<<"这个"<<outlook<<"不是FuberSystem系统中的命令"<<endl;
        }
    }
    return 0;
}