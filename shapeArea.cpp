#include <iostream>
#include <iomanip>
using namespace std;

void findMarks(int t_marks1,int t_marks2,float &t_CA1,float &t_CA2){
    
    t_CA1 = t_marks1 * 0.2;
    t_CA2 = t_marks2 * 0.3;
}

int main (){
    
    int marks1,marks2;
    float CA1,CA2;
    
    cout << "Mark1  Mark2  CA1  CA2";
    
    for (int i = 1; i<=5; i++){
        
        cout << i << "/t";
        cin >> marks1 >> marks2;
        
        findMarks(marks1, marks2, CA1, CA2);
        
        cout << setw(8) << marks1 << setw(8) << marks2;
        cout << fixed << setprecision(2) << CA1 << setw(8) << CA2 << setw(8) << endl;
    }
    
    return 0;
}
