/* 
Soal UCP Sorting Type B / Tipe 2 

1.	Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
misal jika n = 3, dan ingin mengurutkan dari kecil ke besar, maka bandingkan elemen pada index 0 dengan elemen pada index 1, 
jika nilai pada index 0 lebih besar dari index 1 maka elemennya akan ditukar.
kemudian akan bergeser untuk membandingkan elemen pada index 1 dan 2, 
jika elemen pada index 1 ternyata lebih kecil dari index 2, berarti tidak perlu ditukar (swap).

2.	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.
Elemen-elemen pada grup akan diberi jarak dan dipisah menjadi beberapa sublist,
kemudian lakukan insertion sort pada setiap sublist, yaitu misal n = 3,
buat temporary (temp) kemudian elemen pada index 1 dipindahkan ke temp,
dan bandingkan dengan elemen index 0, jika elemen index 0 sudah urut,
maka tidak perlu ditukar, kemudian kembalikan elemen dari temp ke index 1 semula, 
lalu taruh elemen index 2 ke temp, bandingkan dengan index 2, apabila elemennya belum urut,
maka elemen index 1 akan bergeser ke index 2, dan begitu juga dengan index 0 kalau belum urut, 
lalu pindahkan elemen pada temp ke index 0.


3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
Insertion sort, karena akan lebih efisien jika datanya sudah ada beberapa yang urut.

4. Konversi algoritma:
1.	Repeat steps 2 and 3 varying j from 0 to n – 2
2.	Find the minimum value in arr[j] to arr[n – 1]:
a.	Set min_index = j
b.	Repeat step c varying i from j + 1 to n – 1
c.	If arr[i] < arr[min_index]:
      i.   min_index = i
3.	Swap arr[j] with arr[min_index]
*/
#include <iostream>
using namespace std;

int Naufal[66];
int n;

void input() {
    while (true) {
        cout << "Masukan jumlah data array : ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 66 Elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> Naufal[i];
    }
}

void sort() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (Naufal[j] > Naufal[j + 1]) {
                int temp = Naufal[j];
                Naufal[j] = Naufal[j + 1];
                Naufal[j + 1] = temp;
            }
        }
    }
}

void display() {
    cout << endl;
    cout << "\n=======================\n";
    cout << "Elemen array telah tersusun\n";
    for (int j = 0; j < n; j++) {
        cout << Naufal[j] << endl;
    }
    cout << endl;
}

int main()
{
    input();
    sort();
    display();
    return 0;
}