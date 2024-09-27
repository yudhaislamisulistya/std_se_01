#include<iostream>
using namespace std;

int main(){
    int tab[10] = {1,4,7,12,15,20};
    // n -> panjang data
    int n = 6;
    int x = 10;
    int i = 0;
    while(i < n && tab[i] < x){
        i++;
    }

    // Perulangan dengan i = 0
    // tab[0] = 1 < 10 -> True
    // i = 1
    // Perulangan dengan i = 1
    // tab[1] = 4 < 10 -> True
    // i = 2
    // Perulangan dengan i = 2
    // tab[2] = 7 < 10 -> True
    // i = 3
    // Perulangan dengan i = 3
    // tab[3] = 12 < 10 -> False
    

    cout << x << " cocok untuk Index ke-" << i << endl;
    for (int j = 0; j < n; j++){
        cout << tab[j] << " ";
    }

    int temp1 = tab[i];
    tab[i] = x;

    cout << "\nData Temp1 adalah " << temp1 << endl;
    for (int j = 0; j < n; j++){
        cout << tab[j] << " ";
    }

    cout << "\n";

    for(int j = i+1; j <= n; j++){
        int temp2 = tab[j];
        tab[j] = temp1;
        temp1 = temp2;
        for (int k = 0; k < n+1; k++){
            cout << tab[k] << " ";
        }
        cout << "\n";
    }

    // n++;

    // cout << "\nData setelah di Insert" << endl;
    // for (int j = 0; j < n; j++){
    //     cout << tab[j] << " ";
    // }


}