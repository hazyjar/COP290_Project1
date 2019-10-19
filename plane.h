#include <bits/stdc++.h>
#include <"point.h">
#include <"line.h">
#include <"edge.h">
#include <"face.h">
#include <"wireframe.h">
#include <"3dsolid.h">

using namespace std;

class Plane{
    ///Used to denote Plane 
    public:
    
    ///Plane in the form ax+by+cz=d
    double m_directionCoseineX;//a
    double m_directionCoseineY;//b
    double m_directionCoseineZ;//c
    
    double m_constant;///d
    
    double m_normal_directionCoseineX;
    double m_normal_directionCoseineY;
    double m_normal_directionCoseineZ;
    
    Line(double a=0,double b=0,double c=0,double d=0){
        
        ///Code to Convert a,b,c to unit vectors
        
        ///Initialize member varibles
        m_directionCoseineX = a;
        m_directionCoseineY = b;
        m_directionCoseineZ = c;
        
        m_constant=d;
    }
    
    void extendFace(Face &face){
        ///extends the face to a plane
    }
    
    double shortestDist(Line &line){
        ///shortest distance between two lines ,0 if they are intersecting
    }
    
    bool isOnPlane(Plane &plane){
        ///returns if the line is on the plane
    }
    
    bool parrallelToPlane(){
        ///returns if the line is parrallel to the Plane or not
    }
    
    bool perpendicularToPlane(){
        ///returns if the line is perpendicular to the Plane or not
    }
    
    Line intersectingPlaneAt(Plane &plane){
        ///returns the line of intersection of the line with the plane if any
    }

};




int main() {
    return 0;
}


