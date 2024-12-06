#include<iostream>
using namespace std;

struct Vertex{
    char deskVertexID;
    int weight;
    Vertex* nextVertex;
};

struct Graph{
    Vertex* graph[5];
    Vertex* lastVertex;     
};
// G[A] => G[0]
// G[B] => G[1]

int getIndexVertex(char vertexID){
    return vertexID - 'A'; // A - A = 0, A - B = 1, A - C = 2
}

void initGraph(Graph& G){
    char i = 'A';
    while (i <= 'E'){
        G.graph[getIndexVertex(i)] = NULL;
        i++;
    }
}

int main(){
    cout << "Belajar Graf" << endl;
}