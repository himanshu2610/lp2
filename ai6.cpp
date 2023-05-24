#include<iostream>
using namespace std;
int main(){
    string name,gender,domain;
    cout<<"Enter the name of the Employee : ";
    cin>>name;
    cout<<"Enter the domain of the Employee (web/testing/design) : ";
    cin>>domain;
    cout<<"Enter the gender of the domain : ";
    cin>>gender;

    int n1,n2,n3,n4,n5,n6,n7,n8;
    cout<<"Lets evaluate the performance of the employee " + name <<endl;
    cout<<endl;

    cout<<"Enter the number of tasks completed by the employee (out of 10) : ";
    cin>>n1;
    cout<<endl;

    cout<< "Enter the number hours the employee has worked each week : ";
    cin>>n2;
    cout<<endl;

    cout<<"Enter the salary of the employee : ";
    cin>>n3;
    cout<<endl;

    cout<<"Enter the previous rating of the employee (out of 5) : ";
    cin>>n4;
    cout<<endl;

    cout<<"Enter the number of presentations of the employee : ";
    cin>>n5;
    cout<<endl;

    cout<<"Enter the age of the employee : ";
    cin>>n6;
    cout<<endl;

    cout<< "Enter the experience of the employee (in years) : ";
    cin>>n7;
    cout<<endl;

    cout<< "Enter the number of leaves taken by the employee last year : ";
    cin>>n8;
    cout<<endl;

    int rat = 0;
    if(n1>8){
        rat+=2;
    }
    if(n5>10){
        rat++;
    }
    if(n8<20){
        rat++;
    }
    if(n1>=6 && n1<=8){
        rat++;
    }
    if(n2>40){
        rat++;
    }

    cout<<"The rating of " + name + " : "<<rat <<endl;

    if(gender == "M"){
        if(domain == "web"){
            if(n2>=37 && n1>=7){
                if(n3<=800000){
                    cout<<"According to performance of " + name + " the salary should be incremented by 100000"<<endl;
                }
                else{
                    cout<<"According to performance of " + name + " the salary should remain same"<<endl;
                }
                }
                else{
                    if(n3>=1200000){
                        cout<<"According to performance of " + name + " the salary should be decremented by 100000"<<endl;
                }
                    else{
                        cout<<"According to performance of " + name + " the salary should remain same"<<endl;
                    }

                }
                }
            else if(domain == "testing"){
                if(n2>=40 && n1>8){
                if(n3<=600000){
                    cout<<"According to performance of " + name + " the salary should be incremented by 100000"<<endl;
                }
                else{
                    cout<<"According to performance of " + name + " the salary should remain same"<<endl;
                }
                }
                else{
                    if(n3>=1000000){
                        cout<<"According to performance of " + name + " the salary should be decremented by 100000"<<endl;
                }
                    else{
                        cout<<"According to performance of " + name + " the salary should remain same"<<endl;
                    }

                }
            }
            else if(domain == "design"){
                if(n2>=37 && n1>6){
                if(n3<=500000){
                    cout<<"According to performance of " + name + " the salary should be incremented by 100000"<<endl;
                }
                else{
                    cout<<"According to performance of " + name + " the salary should remain same"<<endl;
                }
                }
                else{
                    if(n3>=800000){
                        cout<<"According to performance of " + name + " the salary should be decremented by 100000"<<endl;
                }
                    else{
                        cout<<"According to performance of " + name + " the salary should remain same"<<endl;
                    }

                }
            }

        if(rat > n4){
            cout << "The rating of " << name << " has increased. He has performed well this year" << endl;
        }
                else if (rat < n4 && n6 < 25)
        {
            cout << "The employee has underperformed but can be trained for effective performance" << endl;
        }
        else if (rat < n4 && n6 > 25)
        {
            cout << "The employee has underperformed and proved to be unproductive for the company" << endl;
        }
                else
        {
            cout << "The performance of the employee is maintained" << endl;
        }
        if (n7 > 8 && n4 == 5)
        {
            cout << name << " should get a promotion in the company" << endl;
        }
            }

               if (gender == "F")
    {
        if (domain == " web")
        {
            if (n2 >= 30 && n1 > 7)
            {
                if (n3 <= 800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (n3 >= 1500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == " testing")
        {
            if (n2 >= 35 && n1 > 8)
            {
                if (n3 <= 500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (n3 >= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == " design")
        {
            if (n2 >= 32 && n1 > 6)
            {
                if (n3 <= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (n3 > 1800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        if (rat > n4)
        {
            cout << "The rating of " << name << " has increased. He has performed well this year" << endl;
        }
        else if (rat < n4 && n6 < 25)
        {
            cout << "The employee has underperformed but can be trained for effective performance" << endl;
        }
        else if (rat < n4 && n6 > 25)
        {
            cout << "The employee has underperformed and proved to be unproductive for the company" << endl;
        }
        else
        {
            cout << "The performance of the employee is maintained" << endl;
        }
        if (n7 > 8 && n4 == 5)
        {
            cout << name << " should get a promotion in the company" << endl;
        }
        }
    }

