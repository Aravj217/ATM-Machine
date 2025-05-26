#include<iostream>
using namespace std;
int main()
{

    int bal=100000,button,withdraw,deposit,amount,bank;
    cout<<"Choose your Desired Bank:";
    cout<<"\n1.)SBI BANK";
    cout<<"\n2.)HDFC BANK";
    cout<<"\n3.)AXIS BANK";
    cout<<"\nPress the Button:";
    cin>>bank;
    cout<<"\n";
    if(bank==1)
    {
    cout<<"\t**Welcome to SBI BANK ATM MACHINE**";
    cout<<"\n";
    cout<<"\n";
    }
    else if(bank==2)
    {
    cout<<"\t**Welcome to HDFC BANK ATM MACHINE**";
    cout<<"\n";
    cout<<"\n";
    }
    else if(bank==3)
    {
    cout<<"\t**Welcome to AXIS BANK ATM MACHINE**";
    cout<<"\n";
    cout<<"\n";
    }
    else
    {
    cout<<"Try Again";
    }
    cout<<"Choose your Desired option:";
    cout<<"\n1.)Check Balance";
    cout<<"\n2.)Withdraw Money";
    cout<<"\n3.)Deposit Money";
    cout<<"\nPress the Button:";
    cin>>button;
    cout<<"\n";
    if(button==1)
    {
    cout<<"\tChecking Balance....";
    cout<<"\n";
    cout<<"\n";
    cout<<"Current Balance in your Account is="<<bal<<"RS";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t**Thanks For Visiting**";
    cout<<"\n";
    }
    else if(button==2)
    {
    cout<<"Enter amount to be Withdraw=";
    cin>>withdraw;
    amount=bal-withdraw;
    cout<<"\n";
    cout<<"\tWithdrawing Money....";
    cout<<"\n";
    cout<<"\n";
    cout<<withdraw<<" RS Amount is Succesfully Withdrawed";
    cout<<"\n";
    cout<<"\n";
    cout<<"Now the Balance is="<<amount<<"RS";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t**Thanks For Visiting**";
    cout<<"\n";
    }
    else if(button==3)
    {
    cout<<"Enter amount to be Deposit=";
    cin>>deposit;
    amount=bal+deposit;
    cout<<"\n";
    cout<<"\n";
    cout<<"\tDepositing Money....";
    cout<<"\n";
    cout<<"\n";
    cout<<deposit<<" RS Amount is Succesfully Deposited";
    cout<<"\n";
    cout<<"\n";
    cout<<"Now the Balance is="<<amount<<"RS";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t**Thanks For Visiting**";
    cout<<"\n";
    }
    else
    {
    cout<<"TRY AGAIN";
    }
    return 0;
    }
