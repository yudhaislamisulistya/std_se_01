#include <iostream>
#include <string>
using namespace std;

// Struktur data sesuai deklarasi
struct elmtEdge;
struct elmtNode {
    string info;
    elmtEdge* firstEdge;
    elmtNode* nextNode;
};

struct elmtEdge {
    string info;
    elmtEdge* nextEdge;
};

struct Graph {
    elmtNode* Start;
};

// Alokasi Node
elmtNode* alokasiNode(string infoNode) {
    elmtNode* P = new elmtNode;
    P->info = infoNode;
    P->firstEdge = nullptr;
    P->nextNode = nullptr;
    return P;
}

// Alokasi Edge
elmtEdge* alokasiEdge(string infoEdge) {
    elmtEdge* P = new elmtEdge;
    P->info = infoEdge;
    P->nextEdge = nullptr;
    return P;
}

// Create Graph
void createGraph(Graph& G) {
    G.Start = nullptr;
}

// Add New Node
void addNewNode(Graph& G, elmtNode* P) {
    if (G.Start == nullptr) {
        G.Start = P;
    } else {
        elmtNode* Q = G.Start;
        while (Q->nextNode != nullptr) {
            Q = Q->nextNode;
        }
        Q->nextNode = P;
    }
}

// Find Node
elmtNode* findNode(Graph& G, string data) {
    elmtNode* P = G.Start;
    while (P != nullptr && P->info != data) {
        P = P->nextNode;
    }
    return P;
}

// Insert Last Edge
void insertLastEdge(Graph& G, elmtNode* Pnode, elmtEdge* PEdge) {
    if (Pnode == nullptr) {
        cout << "Node tidak ditemukan\n";
    } else if (Pnode->firstEdge == nullptr) {
        Pnode->firstEdge = PEdge;
    } else {
        elmtEdge* P = Pnode->firstEdge;
        while (P->nextEdge != nullptr) {
            P = P->nextEdge;
        }
        P->nextEdge = PEdge;
    }
}

// Delete Edge
void deleteEdge(Graph& G, elmtNode* Pnode, elmtEdge* Pedge) {
    if (Pnode == nullptr || Pnode->firstEdge == nullptr) {
        cout << "EMPTY\n";
        return;
    }
    if (Pnode->firstEdge == Pedge) { // deleteFirst
        Pnode->firstEdge = Pedge->nextEdge;
        delete Pedge;
    } else {
        elmtEdge* prec = Pnode->firstEdge;
        while (prec->nextEdge != Pedge) {
            prec = prec->nextEdge;
        }
        prec->nextEdge = Pedge->nextEdge;
        delete Pedge;
    }
}

// Disconnecting
void disconnecting(Graph& G, string node1, string node2) {
    elmtNode* N1 = findNode(G, node1);
    elmtNode* N2 = findNode(G, node2);
    if (N1 != nullptr && N2 != nullptr) {
        elmtEdge* E1 = N1->firstEdge;
        elmtEdge* E2 = N2->firstEdge;

        // Cari edge dari N1 ke N2
        elmtEdge* prevE1 = nullptr;
        while (E1 != nullptr && E1->info != node2) {
            prevE1 = E1;
            E1 = E1->nextEdge;
        }

        // Cari edge dari N2 ke N1
        elmtEdge* prevE2 = nullptr;
        while (E2 != nullptr && E2->info != node1) {
            prevE2 = E2;
            E2 = E2->nextEdge;
        }

        if (E1 != nullptr) {
            if (prevE1 == nullptr) { // First edge
                N1->firstEdge = E1->nextEdge;
            } else {
                prevE1->nextEdge = E1->nextEdge;
            }
            delete E1;
        }

        if (E2 != nullptr) {
            if (prevE2 == nullptr) { // First edge
                N2->firstEdge = E2->nextEdge;
            } else {
                prevE2->nextEdge = E2->nextEdge;
            }
            delete E2;
        }

        if (E1 == nullptr || E2 == nullptr) {
            cout << "Edge tidak ditemukan\n";
        }
    } else {
        cout << "Node tidak ditemukan\n";
    }
}

// Show Tetangga
void show(Graph& G) {
    if (G.Start == nullptr) {
        cout << "Graf Kosong\n";
    } else {
        elmtNode* N = G.Start;
        while (N != nullptr) {
            cout << "Node " << N->info << " tetangganya: ";
            elmtEdge* E = N->firstEdge;
            while (E != nullptr) {
                cout << E->info << " ";
                E = E->nextEdge;
            }
            cout << endl;
            N = N->nextNode;
        }
    }
}

int main() {
    Graph G;
    createGraph(G);

    elmtNode* A = alokasiNode("A");
    elmtNode* B = alokasiNode("B");
    elmtNode* C = alokasiNode("C");

    addNewNode(G, A);
    addNewNode(G, B);
    addNewNode(G, C);

    insertLastEdge(G, A, alokasiEdge("B"));
    insertLastEdge(G, A, alokasiEdge("C"));

    insertLastEdge(G, B, alokasiEdge("C"));

    show(G);

    disconnecting(G, "A", "B");

    show(G);

    return 0;
}