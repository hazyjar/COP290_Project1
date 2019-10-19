#include <bits/stdc++.h>
#include <"point.h">
#include <"line.h">
#include <"plane.h">
#include <"face.h">
#include <"wireframe.h">
#include <"3dsolid.h">

using namespace std;

class Edge{
    ///Used to denote an edge to be displayed
    
    public:
    ///Points that define the edge
    Point m_vertex1;
    Point m_vertex2;
    
    ///All the points on the Edge
    vector<Point> m_verticesOnEdge;
    
    ///Actual variables of the Edge (Line in the form (x-x1)/l=(y-y1)/m=(z-z1)/n)
    double m_Xintercept;///x1
    double m_Yintercept;///y1
    double m_Zintercept;///z1
    
    double m_directionCoseineX;///l
    double m_directionCoseineY;///m
    double m_directionCoseineZ;///n
    
    ///End Points of the edge
    double m_x1,m_x2;
    double m_y1,m_y2;
    double m_z1,m_z2;
    
    ///Variables that has to be changed dring display (Line in the form (x-x1)/l=(y-y1)/m=(z-z1)/n)
    double m_xval;///x1
    double m_yval;///y1
    double m_zval;///z1
    
    double m_dcXval;///l
    double m_dcYval;///m
    double m_dcZval;///n
    
    ///End Points of the edge
    double m_x1_val,m_x2_val;
    double m_y1_val,m_y2_val;
    double m_z1_val,m_z2_val;
    
    ///Properties of the line interpolated from the points early on
    double m_thickness;
    
    double m_colorR;
    double m_colorG;
    double m_colorB;
    
    double m_opacity;
    
    double m_normalx;
    double m_normaly;
    double m_normalz;
    
    bool m_hidden;
    
    ///Extended Line of the edge
    Line m_line;
    
    ///Constructor of the edge
    Edge(Point v1,Pointv2){
        ///Extract variables from points and interpolatete them to assign variables of edge
    }
    
    void setNormal(Plane &plane){
        ///calls an object of class Face and sets the Normal vector of the face to the Point's normal vector 
    }
  
    void projectXY(){
        ///changes display variables as it's projection on XY plane 
    }
  
    void projectYZ(){
        ///changes display variables as it's projection on YZ plane 
    }
  
    void projectZX(){
        ///changes display variables as it's projection on ZX plane 
    }
  
    void projectOnPlane(Plane &plane){
        ///changes display variables as it's projection on plane specified 
    }
  
    void rotateAbout(Line &line,double angle){
        ///rotates point about line L changing display variables
    }
  
    double distFromPoint(Point &point){
        ///calculates distance from a different point
    }
  
    double distFromLine(Line &line){
        ///calculates distance from a line
    }
  
    double distFromPlane(Plane &plane){
        ///calculates distance from a plane
    }

    void getEdgeFromFace(Face &face,int in){
        ///gets edge at index in of the face
    }
  
    bool isSame(Edge &edge){
        ///checks if they are the same point
    }
  
    void scaleUpOrDown(double scale){
        ///scales up or down and changes display variables
    }
    
    void extendEdge(Point &point){
        ///extend the edge to fit the new point
    }
    
};



int main() {
    return 0;
}


