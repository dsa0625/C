#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
using namespace std;
class pharmacy
{
private:
    string drug,druga[100],chinea[100];
    int account,password,reserve,price,remaining,pricea[100],accounta[100],passworda[100],money[100],reservea[100];

public:
    void setnewaccount()
    void adddrug()
    void deletedrug()
};
void menu(int io,int t,pharmacy a)
{
    int input;
    cout<<"****************主畫面****************"<<endl;
    cout<<"輸入數字1-----新增藥物品項             "<<endl;
    cout<<"輸入數字2-----刪減藥物品項              "<<endl;
    cout<<"輸入數字3-----查詢藥物品項             "<<endl;
    cout<<"輸入數字4-----更改藥物品項             "<<endl;
    cout<<"輸入數字5-----列出本藥房所有藥物品項    "<<endl;
    cout<<"輸入數字6-----購買藥物品項             "<<endl;
    cin>>input;
    if(input==1)
    {
        cout<<"請輸入欲新增的藥物品項"<<endl;
        cin>>a.drug;
        fstream fileout;
        fileout.open("drug.txt");
        for(int i=0; i<(io+1); i++)
        {
            fileout<<a.druga[i]<<endl;
        }
        cout<<"New drug finish"<<endl;
    }
    if(input==2)
    {
        cout<<"請輸入欲刪除的藥物品項"<<endl;
        for(int i=0; i<(io+1); i++)
        {
            cin>>a.druga[i];
        }
    }
    if(input==3)        //yo
    {
        string w;
        cout<<"請輸入藥物名稱"<<endl;
        cin>>w;
        for(int i=0; i<t; i++)
        {
            if(w==a.druga[i])
            {
                cout<<"藥物庫存:";
                cout<<a.reservea[i]<<endl;
                cout<<"藥物價錢:";
                cout<<a.pricea[i]<<endl;
            }
        }
    }
    if(input==4)
    {

    }
    if(input==5)       //yo
    {
        for(int i=0; i<t; i++)
        {
            for(int j=0; j<t-1; j++)
            {
                if(a.druga[i]>a.druga[i+1])
                {
                    string temp,temp2;
                    int temp3,temp4;
                    temp=a.druga[i];
                    a.druga[i]=a.druga[i +1];
                    a.druga[i]=temp;
                    temp2=a.chinea[i];
                    a.chinea[i]=a.chinea[i+1];
                    a.chinea[i+1]=temp2;
                    temp3=a.reservea[i];
                    a.reservea[i]=a.reservea[i+1];
                    a.reservea[i+1]=temp3;
                    temp4=a.pricea[i];
                    a.pricea[i]=a.pricea[i+1];
                    a.pricea[i+1]=temp4;
                }
            }
        }
        for(int i=0; i<t; i++)
        {
            cout<<a.druga[i]<<a.chinea[i]<<a.reservea[i]<<a.pricea[i]<<endl;
        }
    }
    if(input==6)
    {
        cout<<"請輸入欲購買的藥物品項"<<endl;
        for(int i=0; i<t; i++)
        {
            cin>>a.drug[i];
        }
    }
}
int main()
{
    fstream file,file2;
    int t=0,u=0,goin=0;       //t計算藥物數目  u計算帳號筆數
    pharmacy a;
    file.open("drug.txt",ios::in);  //讀入藥物資料庫
    while(file>>a.druga[t]>>a.chinea[t]>>a.reservea[t]>>a.pricea[t])
    {
        t+=1;
    }
    file.close();
    file2.open("user.txt",ios::in); //讀入使用者帳號密碼
    while(file2>>a.accounta[u]>>a.passworda[u]>>a.money[u])
    {
        u+=1;
    }
    file2.close();
    cout<<"⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼⥼歡迎使用藥房管理系統⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽⥽"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕請輸入帳號密碼⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"帳號:";
    cin>>a.account;
    cout<<"密碼:";
    cin>>a.password;
    cout<<endl;
    for(int i=0; i<u; i++)
    {
        if(a.account==a.accounta[i])              //帳號與密碼核對
        {
            if(a.password==a.passworda[i])
            {
                cout<<"登入成功(login success)"<<endl;
                goin=1;
            }
        }
        else if(a.account!=a.accounta[i])        //新帳號創立
        {
            int a;
            cout<<"⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕此帳戶尚未申請⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕⁕"<<endl;
            cout<<"-------------------是否成立新帳戶-------------------"<<endl;
            cout<<"是(請按1)"<<endl;
            cout<<"否(請按2)"<<endl;
            cin>>a;
            if(a==1)
            {
                setnewaccount();
            }
            if(a==2)
            {
                cout<<"❃❃❃❃❃❃❃歡迎再次使用藥物管理系統❃❃❃❃❃❃❃"<<endl;
            }
        }
    }
    if(goin==1)
    {
        menu(t,a);
    }
    cout<<"fhgaSFGSDHFGHSK"<<endl;
}
