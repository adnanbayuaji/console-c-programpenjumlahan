	#include<stdio.h>
	
main ()
{
	/*DEKLARASI*/
	int		Hasil, i, A[100];												//Hasil adalah perhitungan akhir dalam proses penjumlahan
	char	J;																//i adalah variabel bantuan untuk proses looping
																			//A adalah array dalam proses looping
																			//J adalah opsi untuk kembali
	/*DESKRIPSI*/
	
	do
	{
		system("cls");																												
		printf("\n\nPROGRAM PENJUMLAHAN");																						//Judul Program
		printf("\n\n\n\n\tNB:	Program akan berhenti melakukan penjumlahan \n\t\tjika nilai yang diinputkan bernilai 100");	//NB untuk user
		printf("\n\n\n\n\n\t\t\t\tTekan Enter Untuk Memulai");																	//NB untuk user
		getch();
		Hasil=0;																												//hasil=0 di awal program
		system("cls");
		i = 0;																													//i=0 di awal program
		do																		//melakukan perulangan untuk memasukkan nilai
		{
			printf("\n\nMasukkan Bilangan 	: " ); scanf("%i",&A[i]);
			i++;
		}
		while(A[i-1]!=100);														//program berhenti jika user menginputkan nilai 100
		
		i=0;																	//i=0 mengembalikan nilai i
		do																		//melakukan perulangan untuk proses penjumlahan
		{
			if(A[i]!=100)
			{
				Hasil=Hasil+A[i];												
			}
			i++;
		}
		while(A[i-1]!=100);														//perulangan berhenti jika nilai inputan adalah 100
		
		printf("\n\n========Hasil Penjumlahan========\n\n");					//kolom untuk hasil
		printf("Hasil perhitungan dari " ); 
		i=0;																	//nilai i kembali menjadi 0
		do																		//perulangan untuk menampilkan deret bilangan penjumlahan 
		{
			if(A[i]!=100)
			{
				printf("%i", A[i]);
				if(A[i+1]!=100)
				{
					printf("+");
				}
			}
			i++;
		}																		//perulangan akan berhenti jika inputan bernilai 100
		while(A[i-1]!=100);
		printf(" = %i", Hasil);													//menampilkan nilai hasil
		fflush(stdin);
		printf("\n\nUlangi [Y/T] = "); scanf("%c",&J);							//opsi untuk memulai kembali program atau tidak
	}
	while (J=='Y' || J=='y');
}
