#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const float p = 3.1415912;

int circle(int x1, int y1, float r1)
{printf("circle1(%d %d, %.3f)\n", x1, y1, r1);
float s1, p1;
   p1 = 2 * p * r1;
s1 = p * r1 * r1;
printf("perimetr = %.3f\n", p1);
printf("area = %.3f\n", s1);
return 0;
}


int main()
{int x1, y1;
	   float r1;
cout << "Enter parametr of 1st circle(WKT)" << endl;
   scanf("%d%d%f", &x1, &y1, &r1);
   if (r1 <= 0) {
       cout << "Error:Circle can't have negative radius\n" << endl;
    }
int x2, y2;
float r2;
cout << "Enter parametr of 2nd circle(WKT)" << endl;
scanf("%d%d%f", &x2, &y2, &r2);
    if (r2 <= 0) {
    cout << "Error:Circle can't have negative radius\n" << endl;
    }
circle(x1, y1, r1);
   circle(x2, y2, r2);
}
