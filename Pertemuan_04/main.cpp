// #include<iostream>
// using namespace std;

// struct Node{
//     Node* prev;
//     int info;
//     Node* next;
// };

// void insertFirst(Node* &p, Node* newNode){
//     if(p != nullptr){
//         p->next = newNode;
//         newNode->prev = p;
//     }else{
//         p = newNode;
//     }
// }

// void insertLast(Node* &p, Node* newNode){
//     if(p != nullptr){
//         Node* last = p;
//         while(last->next != nullptr){
//             last = last->next;
//         }
//         last->next = newNode;
//         newNode->prev = last;
//     }else{
//         p = newNode;
//     }
// }

// int main(){
//     Node* node1 = new Node();
//     node1->info = 30;
//     node1->prev = nullptr;
//     node1->next = nullptr;

//     Node* node2 = new Node();
//     node2->info = 40;
//     node2->prev = nullptr;
//     node2->next = nullptr;

//     Node* node3 = new Node();

//     insertFirst(node1, node2);
//     insertFirst(node2, node3);

//     Node* newNode = new Node();
//     newNode->info = 15;
//     newNode->prev = nullptr;
//     newNode->next = nullptr;

//     insertFirst(node1, newNode);

//     while(newNode != nullptr){
//         cout << newNode->info << " ";
//         newNode = newNode->next;
//     }

//     // Node* node1 = new Node();
//     // node1->info = 30;
//     // node1->prev = nullptr;
//     // node1->next = nullptr;

//     // Node* node2 = new Node();
//     // node2->info = 40;
//     // node2->prev = nullptr;
//     // node2->next = nullptr;

//     // Node* node3 = new Node();
//     // node3->info = 50;
//     // node3->prev = nullptr;
//     // node3->next = nullptr;

//     // node1->next = node2;
//     // node2->prev = node1;
//     // node2->next = node3;
//     // node3->prev = node2;

//     // cout << node3->prev->info << endl;
//     // cout << node3->prev->prev->info << endl;
//     // cout << node1->next->next->info << endl;

//     // Node* newNode = new Node();
//     // newNode->info = 6;
//     // newNode->prev = nullptr;
//     // newNode->next = nullptr;

//     // newNode->next = node1;
//     // node1->prev = newNode;

//     // cout << node2->prev->prev->info << endl;

//     // while(node1 != nullptr){
//     //     cout << node1->info << " ";
//     //     node1 = node1->next;
//     // }

//     // cout << endl;

//     // while(node3 != nullptr){
//     //     cout << node3->info << " ";
//     //     node3 = node3->prev;
//     // }
// }

#include<iostream>
using namespace std;

struct Node{
    Node* prev;
    int info;
    Node* next;
};

int main(){
    Node* node1 = new Node();
    node1->info = 12;
    node1->prev = nullptr;
    node1->next = nullptr;

    Node* node2 = new Node();
    node2->info = 43;
    node2->prev = nullptr;
    node2->next = nullptr;

    Node* node3 = new Node();
    node3->info = 80;
    node3->prev = nullptr;
    node3->next = nullptr;

    Node* node4 = new Node();
    node4->info = 89;
    node4->prev = nullptr;
    node4->next = nullptr;

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;

    // while(node1 != nullptr){
    //     cout << node1->info << " ";
    //     node1 = node1->next;
    // }

    node1->next = nullptr;
    node2->prev = nullptr;

    while(node2 != nullptr){
        cout << node2->info << " ";
        node2 = node2->next;
    }

    // while(node2 != nullptr){
    //     cout << node2->info << " ";
    //     node2 = node2->next;
    // }
}