#include <bits/stdc++.h>
#include <"point.h">
#include <"line.h">
#include <"plane.h">
#include <"edge.h">
#include <"wireframe.h">
#include <"3dsolid.h">

using namespace std;

class Face{
    public:
    
    int m_numOfSides;///no. of sides
    vector<Point> m_allVertices;///Vertices of the face in their respective order
    vector<Edge> m_allEdges;///Edges of the face in their respective order
    
    ///Normal vectors of the plane
    double m_normalx;
    double m_normaly;
    double m_normalz;
    
    double m_colorR;
    double m_colorG;
    double m_colorB;
    
    double m_opacity;
    
    bool m_hidden;
    
    ///Extended Plane of the Face
    Plane m_plane;
    
    Face(vector<Edge> *allEdges,int n){
        ///Constructor where paramters are pointer to vector of all Edges of the face and the number of sides
    }
    
    void rotateAboutAxis(Line &line,double angle){
        ///Rotate the plane about some axis with some angle
    }
    
    void addEdge(Edge &edge,Edge &edge2, Edge &edge3){
        ///adds a new edge between edge1 and edge2
    }
    
    Edge getEdgeFromFace(int in){
        ///gets edge at index in of the face
    }
  
    bool isSame(Face &face){
        ///checks if they are the same point
    }
  
    void scaleUpOrDown(double scale){
        ///scales up or down and changes display variables
    }
    
};

int main() {
    return 0;
}


