#include <iostream>
using namespace std;

int main (){
	int penerima, pengajar, kuota_pengajar1, kuota_pengajar2, siswa, kuota_siswa1, kuota_siswa2, kuota_siswa3;
	
	//nama, kelas,NIM, dan judul
	cout << "Nama \t= Syaikul Azhar Muhammad" << endl;
	cout << "Kelas \t= IF-C" << endl;
	cout << "NIM \t= 123210081" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Program menghitung bantuan kuota akses internet" << endl;
	cout << "-----------------------------------------------" << endl;
	
	cout << "\nBantuan kuota akses internet oleh pemerintah untuk pengajar dan siswa" <<endl;
	cout << "Pilih jenis penerima bantuan kuota :" <<endl;
	cout << "1. Pengajar" <<endl;
	cout << "2. Siswa" <<endl;
	cout << "Input penerima bantuan kuota (1/2) = ";
	cin >> penerima;
	
	if (penerima == 1) {
		cout << "\nPilih jenis tingkat pengajar penerima bantuan kuota :" <<endl;
		cout << "1. tingkat Sekolah Dasar hingga Menengah" <<endl;
		cout << "2. tingkat Pendidikan Tinggi" <<endl;
		cout << "Input penerima bantuan kuota (1/2) = ";
		cin >> pengajar;
		if (pengajar == 1) {
			kuota_pengajar1 = 42 * 6000;
			cout << "\nBiaya yang harus dikeluarkan adalah 42gb x Rp.6000 = Rp"<< kuota_pengajar1;
		} else if (pengajar == 2) {
			kuota_pengajar2 = 50 * 6000;
			cout << "\nBiaya yang harus dikeluarkan adalah 50gb x Rp6000 = Rp"<< kuota_pengajar2;
		} else {
			cout << "\nInput tidak ditemukan. Pastikan mengisi data dengan benar dan sesuai instruksi.";
		}
	} else if (penerima == 2) {
		cout << "\nPilih jenis tingkat siswa penerima bantuan kuota :" <<endl;
		cout << "1. tingkat PAUD" <<endl;
		cout << "2. tingkat SD" <<endl;
		cout << "3. tingkat SMP" <<endl;
		cout << "4. tingkat SMA" <<endl;
		cout << "5. tingkat Mahasiswa" <<endl;
		cout << "Input penerima bantuan kuota (1/2/3/4/5) = ";
		cin >> siswa;
		if (siswa == 1){
			kuota_siswa1 = 20 * 6000;
			cout << "\nBiaya yang harus dikeluarkan adalah 20gb x Rp.6000 = Rp"<< kuota_siswa1;
		} else if (siswa >= 2 && siswa <= 4) {
			kuota_siswa2 = 35 * 6000;
			cout << "\nBiaya yang harus dikeluarkan adalah 35gb x Rp.6000 = Rp"<< kuota_siswa2;
		} else if (siswa == 5){
			kuota_siswa3 = 50 * 6000;
			cout << "\nBiaya yang harus dikeluarkan adalah 50gb x Rp.6000 = Rp"<< kuota_siswa3;
		} else {
			cout << "\nInput tidak ditemukan. Pastikan mengisi data dengan benar dan sesuai instruksi.";
		}
	} else {
		cout << "\nInput tidak ditemukan. Pastikan mengisi data dengan benar dan sesuai instruksi.";
	}
}
