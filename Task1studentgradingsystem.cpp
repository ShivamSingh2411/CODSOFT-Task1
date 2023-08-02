#include<iostream>
using namespace std;
int main()
{
    int i;

    float Marks, Approx , sum=0;

    cout<<" Enter your marks which you got in your 5 subjects here= ";

    for(i=0; i<5; i++)
    {

        cin>>Marks;
        sum = sum+Marks;

    }

    Approx = sum/5;

    cout<<"\nYou got Grade = ";

    if(Approx>=91 && Approx<=100)

        cout<<"A1";

    else if(Approx>=81 && Approx<91)

        cout<<"A2";

    else if(Approx>=71 && Approx<81)

        cout<<"B1";

    else if(Approx>=61 && Approx<71)

        cout<<"B2";

    else if(Approx>=51 && Approx<61)

        cout<<"C1";

    else if(Approx>=41 && Approx<51)

        cout<<"C2";

    else if(Approx>=33 && Approx<41)

        cout<<"D";

    else if(Approx>=21 && Approx<33)

        cout<<"E1";

    else if(Approx>=0 && Approx<21)

        cout<<"E2";

    else

        cout<<"Sorry you Failed! Better luck next time....";

    cout<<endl;

    return 0;
}
