# Algoritma-BackTracking-TUBES-Strategi-Algoritma
Tubes STIGMA

	SPESIFIKASI PERMASALAHAN
	
	|1 2 3|
	|4 5 6|
	|7 8 9|


Permainan Kejar Tikus
 
Permainan ini adalah permainan seekor kucing (Komputer) yang mengejar tikus (Manusia) sebagai mangsanya. Ku-
cing akan berlari mengejar tikus pada sebuah labirin yang berbentuk segi empat (ukuran 3x3 seperti contoh di atas).

Adapun aturan permainannya adalah sebagai berikut:
a. Kucing dan tikus hanya dapat berjalan 1 langkah melalui sisi yang bersisian dengan simpul tempatnya berada saat
ini.
b. Posisi awal tikus berada di 1 dan kucing berada di 9 (seperti pada gambar).
c. Kucing dan tikus dapat mengetahui keberadaan posisi lawannya masing-masing.
d. Permainan akan berakhir jika kucing dan tikus bertemu pada simpul yang sama.
e. Tugas anda adalah, membuat Pemain Komputer (AI) dapat memenangkan permainan melawan Pemain Manusia
dengan menerapkan konsep Strategi Algoritma yang pernah dipelajari sebelumnya. 

	ALGORITMA BACKTRACKING
	
	contoh Matrix:
	|1 2 3|
	|4 5 6|
	|7 8 9|

Algoritma Backtracking  pertama kali diperkenalkan oleh D.H Lehmer pada tahun 1950. Dalam perkembanganya beberapa ahli seperti RJ Walker, Golomb dan Baumert menyajikan uraian umum tentang Backtracking dan penerapannya dalam berbagai persoalan dan aplikasi. Algoritma runut-balik (Bactracking Algorithm) adalah algoritma yang berbasis pada DFS (Depth First Search). Algoritma ini merupakan perbaikan dari algoritma brute force yang memeriksa semua kemungkinan solusi yang ada. Dengan algoritma backtracking, tidak perlu memeriksa semua kemungkinan solusi yang ada. Hanya pencarian yang mengarah ke solusi yang akan dipertimbangkan. Simpul-simpul yang tidak mengarah ke solusi akan dipangkas. akibatnya, waktu pencarian solusi dapat dihemat.
Oleh karena itu dengan di terapkannya algoritma backtracking pada permasalahan pada bab 1 akan di ibaratkan seperti matriks 3x3, dimana tikus  berada di angka 1 dan kucing berada di angka 9, contoh matriks seperti diatas
Jadi pada program yang akan di buat nantinya akan menghasilkan output, dimana pada output pertama user sebagai tikus akan menginputkan pilihan dimana pilihan itu adalah arah jalan misalnya atas, bawah, kiri, kanan pada matriks 3x3. Misalnya dengan contoh matriks diatas yaitu 3x4 dimana jika user menginputkan arah kanan maka tikus yang awalnya ada di nomor 1 akan pindah ke nomor 2, atau jika user meng-inputkan arah atas yang semula tikus berada pada nomor 1 maka dia tidak bergerak karena jalan buntu. Setelah di inputkan kemudian selanjutnya kucing yang berada di angka 9 juga akan bergerak secara random/A.I (computer) dan cuman bisa bergerak 1 langkah saja melalui sisi yang bersisian. Output program akan terus meminta inputan user sebagai tikus, hingga permainan berakhir jika posisi tikus dan kucing sama, contoh permainan akan berakhir jika posisi tikus berada di nomor 5 dan posisi kucing berada di nomor 5 juga. 
