1.	#include <iostream>
2.	using namespace std;
3.	 
4.	main(){
5.		int tikus = 1, kucing = 9,pilihan = 1;
6.		
7.		cout<<"SELAMAT DATANG DI PERMAINAN KEJAR TIKUS\n";
8.		cout<<"MATRIKS 3x3 ATAU MAP PERMAINAN\n\n";
9.		cout<<"|1	2	3|\n|4	5	6|\n|7	8	9|\n\nPosisi Tikus mula-mula berada di nomor 1 dan kucing berada di nomor 9\n";
10.		while(tikus != kucing){
11.		
12.		cout<<"_________\n";
13.		cout<<"1.atas\n2.bawah\n3.kiri\n4.kanan"<<endl;
14.		cout<<"_________\n";
15.			cout<<"Masukan gerak tikus:";
16.			cin>>pilihan;
17.			if (pilihan == 1){
18.			if (tikus!=1 && tikus !=2 && tikus!=3){
19.				tikus=tikus-3;
20.				}else{
21.	cout<<"Jalan buntu, masukan sembarang angka untuk mengulang:";
22.				cin>>pilihan;
23.				}
24.			}
25.			else if (pilihan == 2){
26.			if (tikus!=7 && tikus !=8 && tikus!=9){
27.				tikus=tikus+3;
28.				}else{
29.	cout<<"Jalan buntu, masukan sembarang angka untuk mengulang:";
30.				cin>>pilihan;
31.				}
32.			}
33.			else if (pilihan == 3){
34.			if (tikus!=1 && tikus !=4 && tikus!=7){
35.				tikus=tikus-1;
36.				}else{
37.	cout<<"Jalan buntu, masukan sembarang angka untuk mengulang:";
38.				cin>>pilihan;
39.				}
40.			}
41.			else if (pilihan == 4){
42.			if (tikus!=3 && tikus!=6 && tikus !=9){
43.				tikus=tikus+1;
44.				}else{
45.	cout<<"Jalan buntu, masukan sembarang angka untuk mengulang:\n";
46.				cin>>pilihan;
47.				}
48.			}
49.			else{
50.	cout<<"SALAH INPUT TIKUS TIDAK AKAN BERGERAK...Masukan tombol jalan [1-4]\n";
51.		}
52.	cout<<"\nPosisi tikus sekarang di nomor:"<<tikus<<endl;
53.		cout<<"KUCING JALAN...."<<endl;
54.					
55.		if(kucing==9){
56.			if((kucing-1)-tikus==4){
57.			    kucing--;}
58.			else if(((kucing-3)-tikus) < ((kucing-1)-tikus)){
59.			    kucing=kucing-3;}
60.		}else if(kucing==6){
61.			if(tikus==3 ){
62.			    kucing=kucing-3;
63.			}else if(tikus==5 || (kucing-3)-tikus < (kucing-1)-tikus){
64.			    kucing--;}
65.		}else if (kucing==3){
66.			if(tikus<8){
67.			    kucing--;
68.			}else{
69.			    kucing=kucing+3;
70.			}
71.		}else if(kucing==8){
72.			if(tikus<7){
73.			    kucing=kucing-3;
74.			}else if(tikus==7){
75.			    kucing--;
76.			}else if(tikus==9){
77.			    kucing++;
78.			}		
79.		}else if(kucing==5){
80.			if(tikus==2){
81.				kucing=kucing-3;
82.			}else if(tikus<5&&tikus!=3){
83.				kucing--;
84.			}else if(tikus==6 || tikus==3){
85.				kucing++;
86.			}else if(tikus>6){
87.				kucing=kucing+3;
88.			}
89.		}else if(kucing==2){
90.			if(tikus==1){
91.				kucing--;
92.			}else if(tikus==3){
93.				kucing++;
94.			}else if(kucing>3){
95.				kucing=kucing+3;
96.			}
97.		}else if(kucing==7){
98.			if(tikus==4 || tikus==1 || tikus==2){
99.			kucing=kucing-3;
100.		}else{
101.			kucing++;
102.		}
103.	}else if(kucing==4){
104.		if(tikus==1){
105.			kucing=kucing-3;
106.		}else if(tikus==7){
107.			kucing=kucing+3;
108.		}else if(tikus>1&&tikus!=4){
109.			kucing++;
110.		}
111.	}else if(kucing==1){
112.		if(tikus==2 || tikus==3){
113.			kucing++;
114.		}else if(tikus>4){
115.			kucing=kucing+3;
116.		}
117.		} cout<<"Posisi kucing sekarang di nomor:"<<kucing<<endl;
118.		} cout<<"Kucing berhasil menangkap tikus..";
119.	}
