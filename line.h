#include <bits/stdc++.h>
#include <"point.h">
#include <"edge.h">
#include <"plane.h">
#include <"face.h">
#include <"wireframe.h">
#include <"3dsolid.h">

using namespace std;



class Line{
    ///Used to denote either a line or a vector 
    public:
    
    ///Line in the form of (x-a)/l=(y-b)/m=(z-c)/n
    double m_directionCoseineX;///l
    double m_directionCoseineY;///m
    double m_directionCoseineZ;///n
    
    double m_Xintercept;///a
    double m_Yintercept;///b
    double m_Zintercept;///c
    
    Line(double a=0,double b=0,double c=0,double l=1,double m=1,double n=1){
        
        ///Code to Convert l,m,n to unit vectors
        
        ///Initialize member varibles
        m_directionCoseineX = l;
        m_directionCoseineY = m;
        m_directionCoseineZ = n;
        
        m_Xintercept = a;
        m_Yintercept = b;
        m_Zintercept = c;
    }
    
    void extendEdge(Edge &edge){
        ///extends the edge to a line
    }
    
    bool isIntersecting(Line &line){
        ///checks if both the line intersects
    }
    
    bool isParrallel(Line &line){
        ///checks if the both the line are parrallel
    }
    
    bool isPerpendicular(Line &line){
        ///checks if both the line are perpendicular or not
    }
    
    Point intersectingLineAt(Line &line){
        ///finds the point of intersection between the lines if any
    }
    
    double shortestDist(Line &line){
        ///shortest distance between two lines ,0 if they are intersecting
    }
    
    double dotProduct(Line &line){
        ///calculates dot product of the two lines
    }
    
    Line crossProduct(Line &line){
        ///calculates cross product of two lines
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
    
    Point intersectingPlaneAt(Plane &plane){
        ///returns the point of intersection of the line with the plane if any
    }
    
};


int main() {
    return 0;
}


