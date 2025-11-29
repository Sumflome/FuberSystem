#include<bits/stdc++.h>
#include<Windows.h>
#include <random>
using namespace std;


void help(){
    cout<<"help   |查看帮助"<<endl;
    cout<<"timer  |计时器"<<endl;
    cout<<"time   |显示当前时间"<<endl;
    cout<<"comp   |计算器"<<endl;
    cout<<"game   |小游戏"<<endl;
    cout<<"mt     |随机数"<<endl;
    cout<<"take   |插件"<<endl;
    cout<<"exit   |退出"<<endl;
    cout<<"cmd    |命令提示符"<<endl;
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
    double sudo=0,sudf=0;
    string uncle;
    cout<<"输入运算符号:";
    cin>>uncle;
    cout<<endl;
    cout<<"输入2个要计算的数字:";
    cin>>sudo>>sudf;
    if(uncle=="+"){
        cout<<sudo+sudf<<endl;
    }
    else if(uncle=="-"){
        cout<<sudo-sudf<<endl;
    }
    else if(uncle=="/"){
        cout<<sudo/sudf<<endl;
    }
    else if(uncle=="*"){
        cout<<sudo*sudf<<endl;
    }
    else {
        ofstream file ("File.log");
        file<<"错误:不支持此运算符号"<<endl;
        file.close();
    }
    return ;
}

void game(){
    cout<<"输入你想玩的游戏名"<<endl;
			cout<<"takei    |取石子游戏"<<endl;
			cout<<"rock     |人话：石头剪刀布"<<endl;
			string hnr;
			cin>>hnr;
			if(hnr=="takei") {
				cout<<"欢迎来到这里"<<endl;
			cout<<"有几个石子？"<<endl;
			int we;
			cin>>we;
			cout<<"现在场上有"<<we<<"个石子"<<endl;
			cout<<endl;
			cout<<"好了，双人对局开始了"<<endl;
			cout<<"开始游戏:"<<endl;
			int ans=3,bns=we,une=1;
			for(int i=1;i<=we;i++){
				if(ans%2!=0){
					cout<<"你拿了几个:";
					une=1;
				}
				else{
					cout<<"你的朋友拿了几个:";
					une=2;
				}
				int je;
				cin>>je;
				bns=bns-je;
				if(bns==0){
					if(une==1){
						cout<<"你赢了"<<endl;
					}
					else{
						cout<<"你朋友赢了"<<endl;
					}
				}
				ans++;
			} 
			}
			else if(hnr=="rock"){
				int ert,grt;
				cout<<"欢迎来到这里"<<endl;
				cout<<"石头=1,剪刀=2,布=3."<<endl;//1石头，2剪刀
				cout<<"请输入数字:"<<endl;
				cout<<"你:";
				cin>>ert;
				cout<<endl;
				cout<<"你的朋友:";
				cin>>grt;
				cout<<endl;
				if(ert==1&&grt==1){
					cout<<"平手"<<endl; 
				}
				else if(ert==1&&grt==2){
					cout<<"胜利"<<endl;
				}
				else if(ert==1&&grt==3){
					cout<<"输"<<endl;
				}
				else if(ert==2&&grt==1){
					cout<<"输"<<endl;
				}
				else if(ert==2&&grt==2){
					cout<<"平手"<<endl;
				}
				else if(ert==2&&grt==3){
					cout<<"赢了"<<endl;
				}
				else if(ert==3&&grt==1){
					cout<<"赢了"<<endl;
				}
				else if(ert==3&&grt==2){
					cout<<"输"<<endl;
				}
				else if(ert==3&&grt==3){
					cout<<"平手"<<endl;
				}
				else{
					ofstream file ("File.log");
                    file<<"WARE:不支持此数字"<<endl;
                    file.close();
                    cout<<"WARE:不支持此数字"<<endl;
                    cout<<"已将错误记录至File.log文件中"<<endl;
				}
			}
}
void mt(){
    cout<<"这里是随机数生成器:"<<endl;
    int min_val;
    int max_val;
    cout<<"输入较小的数值:";
    cin>>min_val;
    cout<<"输入较大的数值:";
    cin>>max_val;
    // 初始化随机数引擎（用 random_device 获取真随机种子）
    random_device rd;  // 硬件熵源，生成真随机数（如果支持的话）
    mt19937 gen(rd()); // 用种子初始化 mt19937 引擎
    uniform_int_distribution<int> dist(min_val, max_val);

    // 生成随机数
    int random_num = dist(gen);
    cout << "随机数：" << random_num << std::endl;
    return ;
}

void time(){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "当前本地时间和日期:" << dt << endl;
    return ;
}

void boot(){
    cout<<"________________________"<<endl;
    cout<<"|                       |"<<endl;
    cout<<"|----FuberSystem 4.0----|"<<endl;
    cout<<"|_______________________|"<<endl;
    Sleep(100);
    cout<<"版权归属: Sumflome (C)"<<endl;
    Sleep(100);
    for(int i=1;i<=100;i++){
        cout<<"正在加载:";
        cout<<i<<"%"<<"\r";
        Sleep(50);
    }
    cout<<endl;
    cout<<"注意:此“系统”仅在Windows环境下运行"<<endl;
    cout<<"  给予的解释是:Windows.h运行库"<<endl;
    cout<<"总之:输入help可以获取帮助"<<endl;
    return ;
}

void take(){
    cout<<"注意!请输入您的插件名称,并且将插件放置于和FuberSystem同目录下"<<endl;
    cout<<"插件单次只能加载一个,并且插件名称请勿包含空格,我们将使用dir命令来给你查看当前目录下的文件"<<endl;
    cout<<"提示:您的插件务必要包含退出命令否则会锁住"<<endl;
    system("dir");
    cout<<"插件名称:";
    string plugin;
    cin>>plugin;
    system(plugin.c_str());
    return ;
}

int main(void){
    boot();
    for(int i=1;i<=500;i++){
        cout<<"Windows-Fuber:\\>";
        string outlook;
        cin>>outlook;
        if(outlook=="help"){
            help();
        }
        else if(outlook=="mt"){
            mt();
        }
        else if(outlook=="exit"){
            return 0;
        }
        else if(outlook=="time"){
            time();
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
        else if(outlook=="take"){
            take();
        }
        else if(outlook=="game"){
            game();
        }
        else if(outlook=="cmd"){
            system("cmd");
        }
        else{
            cout<<"这个"<<outlook<<"不是FuberSystem系统中的命令"<<endl;
        }
    }
    return 0;
}