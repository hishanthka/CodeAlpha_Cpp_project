#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

float calcGPA(vector<float>& points, vector<float>& credits){
    int n;
    cout<<"Enter no. of subjects:"<<endl;
    cin>>n;

    points.resize(n);
    credits.resize(n);

    for(int i=0; i<n; i++){
        cout<<"Enter the points scored for "<<i+1<<" subject:"<<endl;
        cin>>points[i];
        cout<<endl;
        cout<<"Enter the credits for the "<<i+1<<" subject:"<<endl;
        cin>>credits[i];
        cout<<endl;
    }

    float sum=0;
    float tot;
    for(int i=0; i<n; i++){
        tot=credits[i]*points[i];
        sum=sum+tot;
    }

    float totCrd=0;
    for(int i=0; i<n; i++){
        totCrd=totCrd+credits[i];
    }

    cout<<"Total points:"<<sum<<" .Total credits:"<<totCrd<<" .Total GPA:"<<sum/totCrd<<"."<<endl;
    cout<<"\n";
    
}

float calcCGPA(vector<float>& sems){
    int n;
    cout<<"Enter no. of semesters for result generation:"<<endl;
    cin>>n;

    sems.resize(n);

    for(int i=0; i<n; i++){
        cout<<"enter GPA of "<<i+1<<" semester:"<<endl;
        cin>>sems[i];
        cout<<endl;
    }

    float semtot=0;
    for(int i=0; i<n; i++){
        semtot=semtot+sems[i];
    }

    cout<<"CGPA result for "<<n<<" semesters:"<<semtot/n<<endl;
}

int main(){
    vector<float> points;
    vector<float> credits;
    vector<float> sems;

    calcGPA(points,credits);
    calcCGPA(sems);

    return 0;
}