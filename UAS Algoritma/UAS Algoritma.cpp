#include <iostream> 
#include <string> 

using namespace std;
class Node {
public:
    Node* next;
};  class ManajemenProduk {
private:
    Node* head;
public:
    ManajemenProduk() {
        head = NULL;
    }

    void tambahProduk() {
        string nama;  	 	int jumlah;
        string tipe;
        cout << "========== TAMBAH PRODUK ==========" << endl;
        cout << "Nama Produk : ";  	 	getline(cin, nama);
        cout << "Jumlah Produk : ";  	 	cin >> jumlah;
        cin.ignore(); // Membersihkan buffer input 
        cout << "Tipe Produk : ";
        getline(cin, tipe);
        
        Node* newNode = new Node(nama, tipe, jumlah);
        if (head == NULL) {
            head = newNode;
        }
       
         

        cout << "Produk berhasil ditambahkan!" << endl;
    }

    void tampilkanSemuaProduk() {
        cout << "========== SEMUA DATA PRODUK ==========" << endl;  	 	if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            Node* current = head;
            //isi disini 
        }
    }

    void cariProdukByNama() {
        cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
        if (head == NULL) {
            cout << "Belum ada data produk yang tersimpan." << endl;
        }
        else {
            string targetNama;
            cout << "Nama Produk yang dicari: ";
            getline(cin, targetNama);

            Node* current = head;

            int posisi = 0;
            while (current != NULL) {

                posisi++;

                //isi disini 
            }
            if (current == NULL) {

                 	 		 	
                cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" << endl;


            }

        }
    }

    void algorithmaSortByJumlahProduk() {
        if (head == NULL || head->next == NULL) {
            return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node 
        }

        Node* current;
        Node* last = NULL;

        current = head;

        //isi disini 

    }
};
int main() {
    ManajemenProduk manajemenProduk;

    int pilihan;
    do {
        cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
        cout << "1. Tambah Produk" << endl;  	 	cout << "2. Tampilkan Semua Produk" << endl;  	 	cout << "3. Cari Produk berdasarkan Nama" << endl;  	 	cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
        cout << "5. Keluar" << endl;  	 	cout << "Pilihan: ";  	 	cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
        case 1:

        break;  	 	case 2:

        break;  	 	case 3:

        break;  	 	case 4:


        break;  	 	case 5:
            cout << "Terima kasih! Program selesai." << endl;
        break;  	 	default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);

    return 0;
}

// 2.BubbleSort, Linked list.
// 3.Menetapkan elemen yang pertama masuk sebagai Front dan menetapkan elemen terakhir dengan Rear.
//   Setelah itu elemen Front akan KELUAR terlebih dahulu.
// 4.
// (A) 5
// (B) Preorder 
// langkah pertama yaitu mengunjungi semua root terlebih dahulu.
// Langkah kedua yaitu telusuri Subtree sebelah kiri.
// Langkah ketiga yaitu telusuri Subtree sebelah kanan.
// Urutan nya yaitu 50,48,30,20,15,32,25,32,31,35,65,67,66,69,94,70,90,98,99