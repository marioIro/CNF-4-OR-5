#include <iostream>

using namespace std;


void fct3(int s[32][6]){
{
    int cnt=0;
    while(cnt<32)
    {
        if(s[cnt][5]==1)
        {
            cout<<"(";
            if(s[cnt][0]==0)
                cout<<"!p";
            else cout <<"p";
            cout<<"v";
            if(s[cnt][1]==0)
                cout<<"!q";
            else cout <<"q";
            cout<<"v";
            if(s[cnt][2]==0)
                cout<<"!r";
            else cout <<"r";
            cout<<"v";
            if(s[cnt][3]==0)
                cout<<"!t";
            else cout <<"t";
            if(s[cnt][4]==0)
                cout<<"!u";
            else cout <<"u";
            if(cnt==32||cnt==31)
                cout<<")";
            else cout <<")&";
        }
        cnt++;
    }
}}
void fct4(int s[32][6]){
    {
    int cnt=0;
    while(cnt<32)
    {
        if(s[cnt][5]==0)
        {
            cout <<"v(";
            if(s[cnt][0]==1)
                cout<<"!p";
            else cout <<"p";
            cout<<"&";
            if(s[cnt][1]==1)
                cout<<"!q";
            else cout <<"q";
            cout<<"&";
            if(s[cnt][2]==1)
                cout<<"!r";
            else cout <<"r";
            cout<<"&";
            if(s[cnt][3]==1)
                cout<<"!t";
            else cout <<"t";
            if(s[cnt][4]==1)
                cout<<"!u";
            else cout <<"u";
            if(cnt==32||cnt==31)
                cout<<")";
        }
        cnt++;
    }
}
}
int main()
{
    int TS[32][6]={0};
    int cnt=-1;
    for (int i=0;i<=1;i++)
        for (int j=0;j<=1;j++)
            for (int k=0;k<=1;k++)
                for (int l=0;l<=1;l++)
                    for(int r=0;r<=1;r++)
    {
        cnt++;
        TS[cnt][0]=i;
        TS[cnt][1]=j;
        TS[cnt][2]=k;
        TS[cnt][3]=l;
        TS[cnt][4]=r;
    }
    cout << "Valorile Functiei Pentru Tablelul De Adevar: ";
    for(int variabil=0;variabil<32;variabil++)
    {
        cin>>cit;
        TS[variabil][5]=cit;
    }
    cout << endl<<"p q r t u    F"<<endl<<endl;
    for(cnt=0;cnt<32;cnt++)
        cout<<TS[cnt][0]<<" "<<TS[cnt][1]<<" "<<TS[cnt][2]<<" "<<TS[cnt][3]<<" "<<TS[cnt][4]<<"  | "<<TS[cnt][5]<<endl;

    cout << endl<< endl<< "Output Final"<<endl;
    cout << " FNC:";
    fct3(TS);
    cout << endl<< endl<< " FND:";
    fct4(TS);
    return 0;
}
