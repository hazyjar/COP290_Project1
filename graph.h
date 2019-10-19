#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fe first
#define se second


template<typename T>
class Graph{
    int V;
    
    map< T, vector< pair< T,int> > > adjList;
    
    bool weigthed;
    bool direcected;
    
public:

    map< T, int> shortDist;
    map< T, T> parent;
    map< T, bool> dfsVisited;
    int dfsnum;
    bool connected;
    bool cycleExist;
    
    Graph(int v,bool weigthed,bool direcected){
        V = v;
        adjList = new map< T, vector< pair< T,int> > >[V];
        this.weigthed=weigthed;
        this.direcected=direcected;
    }
    Graph(){
        
    }
    
    void addEdge(T u,T v,bool bidir=true,int weigth=0){
        adjList[u].pb(mp(v,weigth));
        if(bidir){
            adjList[v].pb(mp(u,weigth));
        }
    }
    
    void printAdjList(){
        cout<<"Printing Graph as Adjancecy List:\n";
        
        for(auto row : adjList){
            T key = row.fe;
            cout<<key<<"->";
            for(auto element:row.se){
                cout<<" ("<<element.fe<<", "<<element.se<<")";
            }
            cout<<endl;
        }
        
    }
    
    void bfs(T src){
        queue<T> q;
        map< T, bool> visited;
        
        q.push(src);
        visited[src] = true;
        shortDist[src] = 0;
        parent[src] = src;
        
        while(!q.empty()){
            T node = q.front();
            q.pop();
            
            //Perform operation Here
            //cout<<node<<" ";
            
            for(auto neighbour:adjList[node]){
                T element = neighbour.fe;
                if(!visited[element]){
                    q.push(element);
                    visited[element] = true;
                    shortDist[element] = shortDist[node]+1;
                    parent[element] = node;
                }
            }
        }
    }
    
    void dfs(T node){
        dfsVisited.clear();
        dfsnum = 0;
        connected = false;
        cycleExist = false;
        internal_dfs(node);
        if(dfsnum==V){
            connected = true;
        }
    }
    
    void internal_dfs(T node){
        if(dfsVisited[node]){
            return;
        }
        
        //Perform operation Here
        cout<<node<<" ";
        
        dfsVisited[node] = true;
        dfsnum += 1;
        for(auto neighbour:adjList[node]){
            T element = neighbour.fe;
            if(!dfsVisited[element]){
                internal_dfs(element);
            }
            else{
                cycleExist = true;
            }
        }
    }
    
};

int main(){
    
}

