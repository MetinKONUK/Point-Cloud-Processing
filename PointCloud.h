#pragma once
#include "Point.h"
using namespace std;

class PointCloud {
private:
    vector<Point*> points;
    int pointNumber;
public:
    PointCloud(int);
    void addPoint(Point*);
    vector<Point*> givePoints();
    void setpn(int);
    int getpn();
};