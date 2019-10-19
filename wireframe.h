#include <bits/stdc++.h>
#include<"point.h">
#include<"line.h">
#include<"plane.h">
#include<"face.h">
#include<"edge.h">
#include<"graph.h">
#include<"3dsolid.h">

using namespace std;

class wireframe{
    public:
    
    int m_numOfVertices;///Number of Vertices
    int m_numOfEdges;///Number of edges
    
    vector< Points> m_allVertices;///Set of all vertices
    vector< Edges> m_allEdges;///Set of all Edges
    vector< Faces> m_allFaces;///Set of all Faces
    
    map< Points, bool> m_checkHiddenVertices;///Checks if the vertices are hidden or not
    map< Edges, bool> m_checkHiddenEdges;///Checks if the vertices are hidden or not
    map< Faces, bool> m_checkHiddenFaces;///Checks if the vertices are hidden or not
    
    Graph<Points> m_graphOfVertices;
    Graph<Edges> m_graphOfEdges;
    Graph<Faces> m_graphOfFaces;
    
    wireframe(Graph &verticesGraph,vector<Edges>* allEdges){
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
    
    3dobject construct(){
        ///Constructs 3dobject from given wireframe
    }
    
};

int main() {
    return 0;
}


