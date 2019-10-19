#include <bits/stdc++.h>
#include<"point.h">
#include<"line.h">
#include<"plane.h">
#include<"face.h">
#include<"edge.h">
#include<"graph.h">
#include<"wireframe.h">
#include<"3dsolid.h">

using namespace std;

class orthographic{
    public:
    
    int m_numOfVerticesXY;///Number of Vertices
    int m_numOfEdgesXY;///Number of edges
    
    vector< Points> m_allVerticesXY;///Set of all vertices
    vector< Edges> m_allEdgesXY;///Set of all Edges
    vector< Faces> m_allFacesXY;///Set of all Faces
    
    map< Points, bool> m_checkHiddenVerticesXY;///Checks if the vertices are hidden or not
    map< Edges, bool> m_checkHiddenEdgesXY;///Checks if the vertices are hidden or not
    map< Faces, bool> m_checkHiddenFacesXY;///Checks if the vertices are hidden or not
    
    Graph<Points> m_graphOfVerticesXY;
    Graph<Edges> m_graphOfEdgesXY;
    Graph<Faces> m_graphOfFacesXY;
    
    int m_numOfVerticesXZ;///Number of Vertices
    int m_numOfEdgesXZ;///Number of edges
    
    vector< Points> m_allVerticesXZ;///Set of all vertices
    vector< Edges> m_allEdgesXZ;///Set of all Edges
    vector< Faces> m_allFacesXZ;///Set of all Faces
    
    map< Points, bool> m_checkHiddenVerticesXZ;///Checks if the vertices are hidden or not
    map< Edges, bool> m_checkHiddenEdgesXZ;///Checks if the vertices are hidden or not
    map< Faces, bool> m_checkHiddenFacesXZ;///Checks if the vertices are hidden or not
    
    Graph<Points> m_graphOfVerticesXZ;
    Graph<Edges> m_graphOfEdgesXZ;
    Graph<Faces> m_graphOfFacesXZ;
    
    int m_numOfVerticesYZ;///Number of Vertices
    int m_numOfEdgesYZ;///Number of edges
    
    vector< Points> m_allVerticesYZ;///Set of all vertices
    vector< Edges> m_allEdgesYZ;///Set of all Edges
    vector< Faces> m_allFacesYZ;///Set of all Faces
    
    map< Points, bool> m_checkHiddenVerticesYZ;///Checks if the vertices are hidden or not
    map< Edges, bool> m_checkHiddenEdgesYZ;///Checks if the vertices are hidden or not
    map< Faces, bool> m_checkHiddenFacesYZ;///Checks if the vertices are hidden or not
    
    Graph<Points> m_graphOfVerticesYZ;
    Graph<Edges> m_graphOfEdgesYZ;
    Graph<Faces> m_graphOfFacesYZ;
    
    orthographic(Graph &verticesGraphXY,vector<Edges>* allEdgesXY,Graph &verticesGraphXZ,vector<Edges>* allEdgesXZ,
                Graph &verticesGraphYZ,vector<Edges>* allEdgesYZ){
        ///Construct all other variables accordingly 
    }

    void trace_faces(){
        ///detects all the faces given set of vertices and edges
    }
    
    void decision_chaining(){
        ///removes all the pseudo elements
    }
    
    void checkHidden(double cameraX,double cameraY,double cameraZ){
        ///detects if the faces,edges and vertices are hidden or not
    }
    
    wireframe construct(){
        ///Constructs 3dobject from given wireframe
    }
    
    void scale(double scale){
        ///scale up or down the figure
    }
    
    vector<Points> reConstructVertices(){
///reconstruct all the vertices
     }

     

      vector<Edges> reConstructEdges(){
///reconstruct all the vertices
     }
};

int main() {
    return 0;
}

