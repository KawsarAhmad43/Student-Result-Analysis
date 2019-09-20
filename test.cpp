#include<iostream>
using namespace std;

class result{
public:
    int i,n,batch,mark,total=0;
    int id;
    float avg;
    string s;
    string dept;
    string sub;
    void getresult();
};
void result::getresult(){

    cout<<"want to include data and check result?... press 1 here : ";
    cin>>n;

    while(n==1)
    {
        for(i=0;i<5;i++)
        {
            cout<<"Enter Student's name: ";
            cin>>s;

            cout<<"Enter ID: ";
            cin>>id;

            cout<<"Dept: ";
            cin>>dept;

            for(i=0;i<4;i++)
            {
                string sname;
                cout<<"Subject:";
                cin>>sname;
                cout<<"Enter Mark:";
                cin>>mark;
                if(mark>=80)
                    cout<<"Subject wise GPA: A+ "<<endl;
                else if(mark<=70)
                    cout<<"Subject wise GPA: A"<<endl;
               else if(mark<=60)
                    cout<<"Subject wise GPA : B"<<endl;
                else if(mark<=50)
                    cout<<"Subject wise GPA: C"<<endl;
               else if(mark<=40)
                cout<<"Subject wise GPA: D"<<endl;
                else
                    cout<<"Subject wise GPA: F"<<endl;



                total=total+mark;
                avg=total/4;

            }

            cout<<" Student Named ";
            cout<< s;
            cout<<" ID:  ";
            cout<< id;
            cout<<"  Dept. of ";
            cout<<  dept;
            cout<<" Obtained Total Number Of: ";
             cout<<total;
            cout<<" His Obtained Average Number is: " <<avg <<endl<<endl;


                            if(total>=320)
                    cout<<"Total GPA: A+ "<<endl;
                else if(total<=280)
                    cout<<"Total GPA: A"<<endl;
                else if(total<=240)
                    cout<<"Total GPA: B"<<endl;
                else if(total<=200)
                    cout<<"Total GPA: C"<<endl;
                else if(total<=160)
                    cout<<"Total GPA: D"<<endl;
                else
                    cout<<"Total GPA: fail"<<endl;


        }
        cout<<"Again want to include data and discover Result? press 1 : ";
        cin>>n;
    }






}
int main()

{

    result s;
    s.getresult();

    return 0;

}
