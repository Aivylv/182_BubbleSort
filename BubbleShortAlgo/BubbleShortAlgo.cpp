#include <iostream>
using namespace std;

int a[20]; //deklarasi arr a dgn uk 20
int n; //deklarasi variabel n utk menyimpan byknya elemen pd arr

void input() { //procedure utk input
	while (true) { //looping
		cout << "Masukkan banyaknya elemen pada array : "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //jika n kurang dari atau sama dengan 20
			break; //keluar dari loop
		else { //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
		}
	}
	cout << endl; //output baris kosong
	cout << "====================" << endl; //output ke layar
	cout << "Masukkan Elemen Array" << endl; //output ke layar
	cout << "====================" << endl; //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke- " << (i + 1) << ": "; //looping dengan i dimulai dari 0 hingga n-1
		cin >> a[1]; //input dari pengguna
	}
}

void display() { //procedure utk menampilkan hasil
	cout << endl; // output baris kosong
	cout << "====================" << endl; //output ke layar
	cout << "Elemen Array yang telah tersusun" << endl; //output ke layar
	cout << "====================" << endl; //output ke layar
	for (int j = 0; j < n; j++) {  //looping dgn j dimulai dari 0 hingga n-1
		cout << "Data Ke- " << j + 1 << ": ";
		cout << a[j] << endl; //output ke layar
	}
	cout << endl; //output baris kosong
}

void bubbleSortArray() {					//prosedur utk mengurutkan array dgn metode bubble
	int pass = 1;							//step 1

	for (pass; pass <= n - 1; pass + 1) {			//looping dgn  i dimulai dari 1 hingga n-1
		for (int j = 0; j <= n - 1 - pass; j++) {	//looping dgn j dimulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {					//jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];					//Simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];					//Assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;					//Assign nilai temp ke a[j+1]
			}
		}
	}
}

int main() {
	input();			//memanggil read()
	bubbleSortArray();  //memanggil bubblesortarray()
	display();			//memanggil display()
	return 0;
}