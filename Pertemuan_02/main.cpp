// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int tab[10] = {1,4,7,12,15,20};
// //     // n -> panjang data
// //     int n = 6;
// //     int x = 10;
// //     int i = 0;
// //     while(i < n && tab[i] < x){
// //         i++;
// //     }

// //     // Perulangan dengan i = 0
// //     // tab[0] = 1 < 10 -> True
// //     // i = 1
// //     // Perulangan dengan i = 1
// //     // tab[1] = 4 < 10 -> True
// //     // i = 2
// //     // Perulangan dengan i = 2
// //     // tab[2] = 7 < 10 -> True
// //     // i = 3
// //     // Perulangan dengan i = 3
// //     // tab[3] = 12 < 10 -> False
    

// //     cout << x << " cocok untuk Index ke-" << i << endl;
// //     for (int j = 0; j < n; j++){
// //         cout << tab[j] << " ";
// //     }

// //     int temp1 = tab[i];
// //     tab[i] = x;

// //     cout << "\nData Temp1 adalah " << temp1 << endl;
// //     for (int j = 0; j < n; j++){
// //         cout << tab[j] << " ";
// //     }

// //     cout << "\n";

// //     for(int j = i+1; j <= n; j++){
// //         int temp2 = tab[j];
// //         tab[j] = temp1;
// //         temp1 = temp2;
// //         for (int k = 0; k < n+1; k++){
// //             cout << tab[k] << " ";
// //         }
// //         cout << "\n";
// //     }

// //     // n++;

// //     // cout << "\nData setelah di Insert" << endl;
// //     // for (int j = 0; j < n; j++){
// //     //     cout << tab[j] << " ";
// //     // }

// // }

// #include<iostream>
// using namespace std;

// struct Node{
//     int info;
//     Node *address;
// };

// int main(){
//     Node* Node1 = new Node();

//     Node1->info = 10;
//     Node1->address = nullptr;

//     cout << "Node1->info = " << Node1->info << endl;
//     cout << "Node1->address = " << Node1->address << endl;

//     Node* Node2 = new Node();
//     Node2->info = 20;
//     Node2->address = nullptr;

//     Node1->address = Node2;
//     cout << "Node2->info = " << Node2->info << endl;
//     cout << "Node2->address = " << Node2->address << endl;

//     cout << "Node1->address->info = " << Node1->address->info << endl;

//     Node* Node3 = new Node();
//     Node3->info = 30;
//     Node3->address = nullptr;

//     Node2->address = node3;
// }

#include<iostream>
using namespace std;

struct DataMahasisswa{
    string nama;
    string nim;
};

struct Node{
    DataMahasisswa info;
    Node* address;
};

int main(){
    // 1. Alokasi Memori untuk Node1 Allocate(Node1)
    Node* node1 = new Node();
    node1->info.nama = "Budi";
    node1->info.nim = "12345";
    // 2. Inisialisasi Pointer atau address dari Next(Node1)
    node1->address = nullptr;

    // 3. Cetak Data untuk Info(Node1) -> info.nama dan info.nim
    cout << "Nama : " << node1->info.nama << endl;
    cout << "NIM : " << node1->info.nim << endl;
    cout << "Address : " << node1->address << endl;

    Node* node2 = new Node();
    node2->info.nama = "Andi";
    node2->info.nim = "54321";
    node2->address = nullptr;

    cout << "Nama : " << node2->info.nama << endl;
    cout << "NIM : " << node2->info.nim << endl;
    cout << "Address : " << node2->address << endl;

    node1->address = node2;
    cout << "Address untuk Node 1 : " << node1->address << endl;
    cout << "Address Node 2 : " << node2 << endl;

    Node* node3 = new Node();
    node3->info.nama = "Caca";
    node3->info.nim = "67890";
    node3->address = nullptr;

    node2->address = node3;
    cout << "Address untuk Node 2 : " << node2->address << endl;
    cout << "Address Node 3 : " << node3 << endl;

    cout << node1->address->info.nama << endl;
}