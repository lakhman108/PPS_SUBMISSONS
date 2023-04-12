#include<iostream>

using namespace std;

class bonus
{
    private:
    int salary[100];
    char c;
    string name[100];
    int bouns_e=0;
    int bonus_t=0;
    int bonus_m=0;
    public:
   int member=0;
    void initialize(int salary,char c,string name)
    {
        this->salary[member]=salary;
        this->c=c;
        this->name[member]=name;
        member++;
        if (this->c=='E')
        {
            bouns_e+=salary*0.25;
        }
        else if (this->c=='T')
        {
            bonus_t+=salary*0.28;
        }
        else if (this->c=='M')
        {
            bonus_m+=salary*0.3;
        }
     
    }
void print(){
    for(int i=0;i<member;i++){
        cout<<name[i]<<" "<<salary[i]<<endl;
    }
    cout<<bouns_e<<" ";    
    cout<<bonus_t<<" ";
    cout<<bonus_m<<endl;
}
    

};

int main()
{bonus A;
int t;
cin>>t;
   for (int i = 0; i < t; i++)
   {
     char c;
    int salary;
    string name;
    cin>>c>>salary>>name;
 A.initialize(salary,c,name);
   }
   A.print();

    return 0;
}