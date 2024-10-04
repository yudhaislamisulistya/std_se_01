// // #include<iostream>
// // using namespace std;

// // struct Gerbong{
// //     int kapasitas;
// //     int nomorGerbong;
// //     string kelas;
// //     bool isTV;
// //     bool isAC;
// // };

// // struct Node{
// //     // Info
// //     Gerbong info;
// //     // Address
// //     Node* next;
// // };

// // int main(){
// //     Node* gerbong1 = new Node();
// //     cout << "Alamat Memori Gerbong 1 " << gerbong1 << endl;
// //     gerbong1->info.kapasitas = 20;
// //     gerbong1->info.nomorGerbong = 1;
// //     gerbong1->info.kelas = "Premium";
// //     gerbong1->info.isTV = true;
// //     gerbong1->info.isAC = true;
// //     gerbong1->next = nullptr;
// //     cout << "Address dari Gerbong1->Next (Penghubung antar gerbong) " << gerbong1->next << endl;
    

// //     Node* gerbong2 = new Node();
// //     cout << "Alamat Memorii Gerbong 2 " << gerbong2 << endl;
// //     gerbong2->info.kapasitas = 40;
// //     gerbong2->info.nomorGerbong = 2;
// //     gerbong2->info.kelas = "Ekonomi";
// //     gerbong2->info.isTV = false;
// //     gerbong2->info.isAC = false;
// //     gerbong2->next = nullptr;
// //     cout << "Address dari Gerbong2->Next (Penghubung antar gerbong) " << gerbong2->next << endl;
// //     gerbong1->next = gerbong2;
// //     // Gerbong 1 -> next (address penghubung) itu di isi dengan alamat dari gerbong 2


// //     Node* gerbong3 = new Node();
// //     cout << "Alamat Memori Gerbong 3 " << gerbong3 << endl;
// //     gerbong3->info.kapasitas = 30;
// //     gerbong3->info.nomorGerbong = 3;
// //     gerbong3->info.kelas = "Premium";
// //     gerbong3->info.isTV = true;
// //     gerbong3->info.isAC = true;
// //     gerbong3->next = nullptr;
// //     cout << "Address dari Gerbong3->Next (Penghubung antar gerbong) " << gerbong3->next << endl;
// //     gerbong2->next = gerbong3;
// //     // Gerbong 2 -> next (address penghubung) itu di isi dengan alamat dari gerbong 3

   
    
// //     cout << endl;
// //     cout << endl;
// //     cout << "Alamat Memori Gerbong 1 " << gerbong1 << endl;
// //     cout << "Gerbong 1 -> Next (Penhubung antar gerbong) " << gerbong1->next << endl;
// //     cout << "Alamat Memori Gerbong 2 " << gerbong2 << endl;
// //     cout << "Gerbong 2 -> Next (Penhubung antar gerbong) " << gerbong2->next << endl;
// //     cout << "Alamat Memori Gerbong 3 " << gerbong3 << endl;
// //     cout << "Gerbong 3 -> Next (Penhubung antar gerbong) " << gerbong3->next << endl;

// //     cout << gerbong1->next->next->info.nomorGerbong << endl;
// // }

// #include<iostream>
// using namespace std;

// struct Student{
//     string name;
//     string nim;
// };

// struct Node{
//     Student info;
//     // Node* next;
// };

// int main(){
//     Node student1;
//     student1.info.name = "Fikri";
//     cout << "Student 1 Name " << student1.info.name << endl;
//     cout << "Alamat Memori Student 1 " << &student1 << endl;
    
//     // cout << "Alamat Memori Student 1 " << student1 << endl;
//     // cout << "Alamat Memori Student 1 pake & " << &student1 << endl;
// }

#include<iostream>
using namespace std;

struct Node{
    int info;
    Node* next;
};

int main(){
    Node* node1 = new Node();
    node1->info = 30;
    node1->next = nullptr;

    Node* node2 = new Node();
    node2->info = 40;
    node2->next = nullptr;

    Node* node3 = new Node();
    node3->info = 50;
    node3->next = nullptr;

    node1->next = node2;
    node2->next = node3;

    // while(node1 != nullptr){
    //     cout << node1->info << " ";
    //     node1 = node1->next;
    // }

    Node* newNode = new Node();
    newNode->info = 15;
    newNode->next = nullptr;

    newNode->next = node1;

    while(newNode != nullptr){
        cout << newNode->info << " ";
        newNode = newNode->next;
    }

}