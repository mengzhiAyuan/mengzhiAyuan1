#include<iostream>
using namespace std;
#include"PointList.h"
void initPoint(float x0, float y0) {
    x0 = 0; y0 = 0;
}
void InitPointList(PointList& L) {
    L.size = 0;
    L.cursor = 0;
    L.points = new Point[maxListSize];
    //成员是结构体如何初始化
}
void appendPoint(PointList &L, Point newPoint) {
    if (isFull(L)) {
        printf("fail inserting!!!");
        return;
    }
    L.points[++(L.cursor)] = newPoint;
    L.size++;
}
// Append point to list
void clear(PointList &L) {
    L.size = 0;
    L.cursor = 0;
    delete[] L.points;
}
// Clear list
bool isEmpty(PointList L) {

    if (L.size == 0)return true;
    else return false;
}
// List is empty
bool isFull(PointList L)
{
    if (L.cursor == maxListSize)return true;
    else return false;
}
// List is full
void gotoBeginning(PointList &L)
{   
    if (isEmpty(L)) {
        return;
    }
    L.cursor = 0;
}
// Go to beginning
void gotoEnd(PointList &L) {
    if (isEmpty(L)) {
        return;
    }
    L.cursor = L.size-1;
}
// Go to end
bool gotoNext(PointList &L) {
    if (isEmpty(L)) {
        return false;
    }
    else if (L.cursor != (L.size-1)) {
        L.cursor++; L.size++;
        return true;
    }
    else return false;
}
// Go to next point
bool gotoPrior(PointList &L) {
    if (isEmpty(L)) {
        return false;
    }
    else if (L.cursor != 0) {
        L.cursor--; L.size--;
        return true;
    }
    else return false;
}
// Go to prior point
Point getCursor(PointList &L) {
    return L.points[L.cursor];
}