#include<iostream>
using namespace std;

const int IDXMAX = 4;

struct InfoBuku{
    string nama;
    string penulis;
};

struct Stack{
    Smartphones T[IDXMAX];
    int top;
};

bool isEmpty(Stack &S){
    if (S.top == -1){
        return true;
    } else {
        return false;
    }
}

bool isFull(Stack &S){
    if(S.top == IDXMAX -1){
        return true;
    } else {
        return false;
    }
}

Stack createStack(){
    Stack S;
    S.top = -1;
    return S;
}

void push(Stack &S, string judul, string penulis){
    if(isFull(S)){
        cout << "Stack Penuh" << endl;
    } else {
        S.top = S.top + 1; // 1 => 2
        S.T[S.top] = P; // S.T[2] = P
        cout << "Data berhasil ditambahkan" << endl;
        cout << "=====================" << endl;
    }
}

void pop(Stack &S, Smartphones P){
    if(isEmpty(S)){
        cout << "Stack Kosong" << endl;
    } else {
        P = S.T[S.top]; // P = S.T[2]
        S.top = S.top - 1; // 2 => 1
        cout << "Data Berhasil Dikeluarkan dari Stack" << endl;
        cout << "=====================" << endl;
    }
}

void printStack(Stack &S){
    cout << "== Isi Stack ==" << endl;
    if(isEmpty(S)){
        cout << "Stack Kosong" << endl;
    } else {
        for(int i = S.top; i >= 0; i--){
            cout << "Stack Index : " << i << endl;
            cout << "Merk : " << S.T[i].merk << endl;
            cout << "Tipe : " << S.T[i].tipe << endl;
            cout << "=====================" << endl;
        }
    }
}

int main(){
    Stack S = createStack();
    cout << "Posisi dari Top : " << S.top << endl;

    cout << "Apakah stack kosong : " << isEmpty(S) << endl;
    cout << "Apakah stack penuh : " << isFull(S) << endl;

    Smartphones P;
    P.merk = "Samsung";
    P.tipe = "Galaxy A52";

    push(S, P.judul, P.penulis);

    printStack(S);

    Smartphones Q;
    Q.merk = "Xiaomi";
    Q.tipe = "Redmi Note 10";

    push(S, Q);
    printStack(S);

    pop(S, Q);
    printStack(S);

    push(S, Q);

    Smartphones R;
    R.merk = "Realme";
    R.tipe = "C25";

    push(S, R);
    printStack(S);

    Smartphones X;
    X.merk = "Oppo";
    X.tipe = "A74";

    push(S, X);
    printStack(S);

    Smartphones Y;
    Y.merk = "Vivo";
    Y.tipe = "Y20";

    push(S, Y);

    cout << "Apakah stack penuh? : " << isFull(S) << endl;
    cout << "Apakah stack kosong : " << isEmpty(S) << endl;

}