#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    float water1, cost1;
    cin>>water1;
    cost1 = problemSolution1(water1);
    cout<<cost1<<endl;
    cout<<endl;

    cout << "Problem 2\n";
    float a2,b2,c2, ans;
    cin>>a2>>b2>>c2;
    ans = problemSolution2(a2,b2,c2);
    cout<<ans<<endl;
    cout<<endl;

    cout << "Problem 3\n";
    float height;
    char gender;
    string text3;
    cin>>gender>>height;
    text3 = problemSolution3(height,gender);
    cout<<text3<<endl;
    cout<<endl;

    cout << "Problem 4\n";
    string text4, res4;
    cin>>text4;
    res4 = problemSolution4(text4);
    cout<<res4<<endl;
    cout<<endl;

    cout << "Problem 5\n";
    int x, y, result5;
    char op;
    cout<<"Enter two numbers you want to calculate: ";
    cin>>x>>y;
    cout<<"Enter operator: ";
    cin>>op;
    result5 = problemSolution5(x, y, op);
    cout<<result5<<endl;
    return 0;
}