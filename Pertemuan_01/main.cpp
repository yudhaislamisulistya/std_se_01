// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int a = 10;
// //     int b = 5;

// //     cout << "Nilai dari a adalah " << a << endl;
// //     cout << "Nilai dari b adalah " << b << endl;
// //     cout << "Alamat Memori dari a adalah " << &a << endl;
// //     cout << "Alamat Memori dari b adalah " << &b << endl;

// //     cout << "--------------------------------" << endl;

// //     cout << "Jumlah byte yang digunakan variabel a adalah : " << sizeof(a) << " byte" << endl;
// //     cout << "Jumlah byte yang digunakan variabel b adalah : " << sizeof(b) << " byte" << endl;

// //     cout << "--------------------------------" << endl;

// //     int *ptrB = nullptr;

// //     cout << "Nilai dari ptrB adalah " << ptrB << endl;
// //     cout << "Alamat Memori dari ptrB adalah " << &ptrB << endl;

// //     cout << "--------------------------------" << endl;

// //     ptrB = &b;

// //     cout << "Nilai dari ptrB adalah " << ptrB << endl;
// //     cout << "Alamat Memori dari ptrB adalah " << &ptrB << endl;
// //     cout << "Nilai yang ditunjuk oleh ptrB adalah " << *ptrB << endl;

// //     cout << "--------------------------------" << endl;
    
// //     *ptrB = a;
// //     cout << "Nilai dari variabel a adalah " << a << endl;
// //     cout << "Nilai dari variabel b adalah " << b << endl;
// // }

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 1;
//     int b = 2;
//     int c = 3;
//     int d = 4;

//     int *ptrA = &a;
//     int *ptrB = &b;
//     int *ptrC = &c;
//     int *ptrD = &d;

//     cout << "Nilai dari a adalah " << a << endl;
//     cout << "Nilai dari b adalah " << b << endl;
//     cout << "Nilai dari c adalah " << c << endl;
//     cout << "Nilai dari d adalah " << d << endl;

//     cout << "Alamat dari a adalah " << &a << endl;
//     cout << "Alamat dari b adalah " << &b << endl;
//     cout << "Alamat dari c adalah " << &c << endl;
//     cout << "Alamat dari d adalah " << &d << endl;

//     cout << "Nilai yang di tunjuk oleh ptrA adalah " << *ptrA << endl;
//     cout << "Nilai yang di tunjuk oleh ptrB adalah " << *ptrB << endl;
//     cout << "Nilai yang di tunjuk oleh ptrC adalah " << *ptrC << endl;
//     cout << "Nilai yang di tunjuk oleh ptrD adalah " << *ptrD << endl;

//     ptrB = ptrA;
//     cout << "Nilai dari ptrB adalah " << ptrB << endl;
//     cout << "Nilai dari yang di tunjuk oleh ptrB adalah " << *ptrB << endl;

//     ptrD = ptrB;
//     cout << "Nilai dari ptrD adalah " << ptrD << endl;
//     cout << "Nilai dari yang di tunjuk oleh ptrD adalah " << *ptrD << endl;


// }

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 15;
    int c = 27;
    int *pA = nullptr;
    int *pB = nullptr;
    int *pC = nullptr;

    cout << "Nilai dari a adalah " << a << endl;
    cout << "Nilai dari b adalah " << b << endl;
    cout << "Nilai dari c adalah " << c << endl;
    cout << "Nilai dari pA adalah " << pA << endl;
    cout << "Nilai dari pB adalah " << pB << endl;
    cout << "Nilai dari pC adalah " << pC << endl;

    cout << "--------------------------------" << endl;
    
    pA = &a;
    cout << "Nilai dari a adalah " << a << endl;
    cout << "Nilai dari b adalah " << b << endl;
    cout << "Nilai dari c adalah " << c << endl;
    cout << "Nilai dari pA adalah " << pA << endl;
    cout << "Nilai dari pB adalah " << pB << endl;
    cout << "Nilai dari pC adalah " << pC << endl;
}