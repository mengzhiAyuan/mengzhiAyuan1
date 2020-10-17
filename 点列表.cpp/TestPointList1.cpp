#include <iostream>
#include "PointList.h"
using namespace std;
void TestPointList()
{
    PointList polygon;
    Point vertex;
    InitPointList(polygon);
    cout << "Enter the polygons vertices(end with eof) :";
        while (cin >> vertex.x >> vertex.y && !isFull(polygon))
            appendPoint(polygon, vertex);
        if (!isEmpty(polygon))
        {
                gotoBeginning(polygon);
            //Go to beginning of list
                do {
                        vertex = getCursor(polygon);
                        cout << "(" << vertex.x << ", " << vertex.y << ")"<< endl;
                } while (gotoNext(polygon));
        }
}
int main()
{
        TestPointList();
        return 0;
}

