#pragma once
#include<iostream>
using namespace std;
const int maxListSize = 100;
struct Point {
        float x, y;
};
void initPoint(float x0, float y0);
struct PointList {
        int size;
        int cursor;
        Point *points;
};
void InitPointList(PointList &L);
void appendPoint(PointList &L, Point newPoint);
// Append point to list
void clear(PointList &L);
// Clear list
bool isEmpty(PointList L);
// List is empty
bool isFull(PointList L);
// List is full
void gotoBeginning(PointList &L);
void gotoEnd(PointList& L);
// Go to end
bool gotoNext(PointList &L);
// Go to next point
bool gotoPrior(PointList& L);
Point getCursor(PointList& L);
//void showStructure(PointList &L);
