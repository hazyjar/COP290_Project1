#include <bits/stdc++.h>
#include <"line.h">
#include <"edge.h">
#include <"plane.h">
#include <"face.h">
#include <"wireframe.h">
#include <"3dsolid.h">

using namespace std;

class Point{
  ///Denotes a point to be displayed
  
  public:
  
  ///Actual Coordinates of 3D world 
  double m_xCordinate;
  double m_yCordinate;
  double m_zCordinate;
  
  ///Value of Coordinates for display on window
  double m_xval;
  double m_yval;
  double m_zval;
  
  ///Properties of point that can be interpolated
  
  ///Normal of the face containing the point
  double m_normalx;
  double m_normaly;
  double m_normalz;
  
  ///Color of the point between 0-255
  double m_colorR;
  double m_colorG;
  double m_colorB;
  
  ///Opacity value between 0-1
  double m_opacity;
  
  ///Point Hidden or not
  bool m_hidden;
  
  ///Constructor with default coordinates of origin, not hidden, 1 as it's opacity and white color
  Point(double xval=0.00,double yval=0.00,double zval=0.00,bool ishidden=false,double opacity=1,
        double R=255.00,double G=255.00,double B=255.00){
     
      m_xCordinate=xval;
      m_yCordinate=yval;
      m_zCordinate=zval;
      
      m_xval=xval;
      m_yval=yval;
      m_zval=zval;
      
      m_hidden=ishidden;
      
      m_opacity=opacity;
      
      m_colorR=R;
      m_colorG=G;
      m_colorB=B;
  }
  
  void setNormal(Plane &plane){
    ///calls an object of class Face and sets the Normal vector of the face to the Point's normal vector 
  }
  
  void projectXY(){
    ///changes (xval,yval,zval) as it's projection on XY plane 
  }
  
  void projectYZ(){
    ///changes (xval,yval,zval) as it's projection on YZ plane 
  }
  
  void projectZX(){
    ///changes (xval,yval,zval) as it's projection on ZX plane 
  }
  
  void projectOnPlane(Plane &plane){
    ///changes (xval,yval,zval) as it's projection on plane specified 
  }
  
  void rotateAbout(Line &line,double angle){
    ///rotates point about line L changing (xval,yval,zval)
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

  void getvertexFromEdge(Edge &edge,int in){
      ///equates the point to the vertex at index in of the edge
  }
  
  void getvertexFromFace(Face &face,int in){
      ///equates the point to the vertex at index in of the face
  }

  bool isPointOnPlane(Plane &plane){
      ///returns if the point is or is not on the plane
  }
  
  bool isPointOnFace(Face &face){
      ///returns if the point is or is not on the face
  }
  
  bool isPointOnLine(Line &line){
      ///returns if the point is or is not on the line
  }
  
  bool isPointOnEdge(Edge &edge){
      ///returns if the point is or is not on the edge
  }
  
  bool isPointon3DObject(3DObject &3dobject){
      ///returns if the point is or not on one of the faces of the 3d object
  }
    
  bool isPointonInside3DObject(3DObject &3dobject){
      ///returns if the point inside or outside of the 3d object
  }
  
  bool isSame(Point &point){
      ///checks if they are the same point
  }
  
  void scaleUpOrDown(double scale){
      ///scales up or down and changes (xval,yval)
  }
  
};


int main() {
    return 0;
}


