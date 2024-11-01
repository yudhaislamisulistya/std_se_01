#include<iostream>
using namespace std;

#define MAX 5
int head = - 1;
int tail = - 1;
int antrian[5];

bool isEmpty(){
    if(tail == -1 && head == -1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(tail == MAX - 1){
        return true;
    }else{
        return false;
    }
}

void enqueue(int value){
    if(isFull()){
        cout << "Antrian Penuh" << endl;
        cout << endl;
    }else{
        if(isEmpty()){
            head = 0;
        }
        tail++;
        antrian[tail] = value;
        cout << "Data " << value << " masuk ke antrian" << endl;
        cout << endl;
    }
}

void dequeue(){
    if(isEmpty()){
        cout << "Antrian Kosong" << endl;
        cout << endl;
    }else{
        cout << "Data " << antrian[head] << " keluar dari antrian" << endl;
        cout << endl;
        head++;
        if(head > tail){
            head = tail = -1;
        }
    }
}

void display(){
    if(isEmpty()){
        cout << "Antrian Kosong" << endl;
        cout << endl;
    }else{
        for(int i = head; i <= tail; i++){
            cout << antrian[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    do{
        int pilihan;
        cout << "Menu Antrian" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Keluar" << endl;
        cout << "4. Display" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if(pilihan == 1){
            int value;
            cout << "Masukkan data: ";
            cin >> value;
            enqueue(value);
        }else if(pilihan == 2){
            dequeue();
        }else if(pilihan == 3){
            cout << "Terima Kasih" << endl;
            break;
        }else if(pilihan == 4){
            display();
        }else{
            cout << "Pilihan tidak tersedia" << endl;
        }
    }while(true);
}