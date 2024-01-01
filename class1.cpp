/*Using classes and objects*/
/*Adding one instance to another copies all fields*/

#include<iostream>
using namespace std;

class Point {
public: 
    double x,y;
};

class Vector {
public:
    Point start,end;
};

int main(){
    Vector vec1;
    vec1.start.x = 3.0;
    vec1.start.y = 4.0;
    vec1.end.x = 5.0;
    vec1.end.y = 6.0;
    Vector vec2;
    vec2.start = vec1.start;
    vec2.start.x = 7.0;
    cout << vec1.start.x << endl;
}