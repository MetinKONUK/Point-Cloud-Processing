#include "PointCloud.h"
using namespace std;

PointCloud::PointCloud(int pn)
    :pointNumber(pn)
{

};
void PointCloud::addPoint(Point* p) {
    points.push_back(p);
};
vector<Point*> PointCloud::givePoints() {
    return points;
};
void PointCloud::setpn(int n){
    this->pointNumber = n;
}
int PointCloud::getpn() {
    return this->pointNumber;
}