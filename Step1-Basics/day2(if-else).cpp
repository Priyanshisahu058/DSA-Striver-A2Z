/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age>=18){
        cout<< "you are an adult"<<endl;
    }
    else{
        cout<< "you are not an adult"<<endl;
    }
    return 0;
}
    */
//    School grading system
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if (marks<=25){
        cout<< "F";
    }
    if (marks>=24 && marks<=49){
        cout<< "E";
    }
    if (marks>=50 && marks<=59){
        cout<< "D";
    }
    if (marks>=60 && marks<=79){
        cout<< "C";
    }
    if (marks>=80 && marks<=89){
        cout<< "B";
    }
    if (marks>=90){
        cout<< "A";
    }
    return 0;
}