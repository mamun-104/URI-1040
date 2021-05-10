#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n1,n2,n3,n4,media1,n5,media2;
    cin>>n1>>n2>>n3>>n4;

    media1 = (n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);

    cout<<"Media: "<<fixed<<setprecision(1)<<media1<<endl;

    if(media1 >= 7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if (media1<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else
    {
        cout<<"Aluno em exame."<<endl;
        cin>>n5;
        cout<<"Nota do exame: "<<n5<<endl;

        media2 = (media1 + n5) / 2.0;

        if(media2 >= 5.0)
        {
            cout<<"Aluno aprovado."<<endl;
            cout<<"Media final: "<<media2<<endl;
        }
        else
        {
            cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<media2<<endl;
        }
    }






    return 0;
}
