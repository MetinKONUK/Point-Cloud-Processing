#include <iostream>
#include<iomanip>
#include <vector>
#include "Point.h"
#include "PointCloud.h"
#include "PassThroughFilter.h"
using namespace std;

void list_point_cloud_points(vector<Point*> points) {
    for (int i = 0; i < points.size(); ++i) {
        cout
        << "Point " << i
        << ": (" << points[i]->x
        << ',' << points[i]->y
        << ',' << points[i]->z 
        << ')' << endl;
    }
};
int main(){
    //FILTERS
    PassThroughFilter ptf(0, -5, 5, -5, 5, -5);
    Point *p1 = new Point(-1, 6, 3);
    Point *p2 = new Point(-2, 2, 3);
    Point* p3 = new Point(-4, 2, 3);

    PointCloud pc1(0);
    pc1.addPoint(p1);
    pc1.addPoint(p2);
    pc1.addPoint(p3);
    ptf.filter(pc1);
    list_point_cloud_points(pc1.givePoints());
}