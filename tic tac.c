/*
Program Tic Tac Toe.
Cara main :
1. Permainan terdiri dari 2 pemain, pemain 1 sebagai X dan pemain 2 sebagai O
2. Pemain menginputkan int n m, dimana n sebagai baris dan m sebagai kolom.
3. Apabila pemain menginputkan baris dan kolom yang sama dengan sebelumnya maka input dianggap batal
   dan pemain harus menginputkan ulang
4. Pemain dianggap menang apabila mampu membuat tiga tanda yang sama (baik X mauoun O) membentuk garis
   baik vertikal, horizontal, maupun diagonal.
5. Apabila tidak terbentuk garis dan semua papan telah terisi maka permainan dianggap draw atau seri.

Ni'am,2022.

*/


#include <stdio.h>
#include <string.h>

char titik[3][3] = {"...","...","..."};
int baris, kolom, temp = 0;
char cek;

int cek_menang();
void ubah(int player);
int input1();
int input2();

int main()
{
	int x,y,p = 1;
	
		for(int i = 0 ; i < 3; i++){ // Untuk memunculkan papan pertama kali
			printf("%c %c %c\n",titik[i][0],titik[i][1],titik[i][2]);
		}

	while(temp < 9){
		input1();
		if(cek_menang() == 1 && cek == 'X'){
		printf("Player 1 menang.");
		temp = 100;
	}else input2();
	if(cek_menang() == 1 && cek == 'O'){
		printf("Player 2 menang.");
		temp = 100;
	}
}
	if(temp != 100 && cek_menang != 1  ){
		printf("Draw");
	}

	return 0;
}


int cek_menang() //Untuk mengecek apakah pemain menang
{
    if (titik[0][0] == titik[0][1] && titik[0][1] == titik[0][2]){
        cek = titik[0][0];
        return 1;
        }
    else if (titik[1][0] == titik[1][1] && titik[1][1] == titik[1][2]){
        cek = titik[1][0];
        return 1;
        }
    else if (titik[2][0] == titik[2][1] && titik[2][1] == titik[2][2]){
        cek = titik[2][0];
        return 1;
        }
    else if (titik[0][0] == titik[1][0] && titik[1][0] == titik[2][0]){
        cek = titik[0][0];
        return 1;
        }
    else if (titik[0][1] == titik[1][1] && titik[1][1] == titik[2][1]){
        cek = titik[0][1];
        return 1;
        }
    else if (titik[0][2] == titik[1][2] && titik[1][2] == titik[2][2]){
        cek = titik[0][2];
        return 1;
        }
    else if (titik[0][0] == titik[1][1] && titik[1][1] == titik[2][2]){
        cek = titik[0][0];
        return 1;
        }
    else if (titik[0][2] == titik[1][1] && titik[1][1] == titik[2][0]){
        cek = titik[0][2];
        return 1;
        }
    else if (titik[0][0] != '.' && titik[0][1] != '.' && titik[0][2] != '.' &&
        titik[1][0] != '.' && titik[1][1] != '.' && titik[1][2] != '.' && titik[2][0] 
        != '.' && titik[2][1] != '.' && titik[2][2] != '.'){
        return 0;}
    else{
        return  - 1;}
}



void ubah(int player){ // Untuk menginputkan nilai X atau O kedalam papan
	for(int i = 0; i < 3; i++){
		if(baris == i){
		for(int j = 0; j < 3; j++){
			if(kolom == j){
				if(player == 1 ) titik[i][j] = 'X';
				else if(player == 2)titik[i][j] = 'O';
			}
		}}
		printf("%c %c %c\n",titik[i][0],titik[i][1],titik[i][2]);
	}
}

int input1(){ // Untuk menginputkan baris dan kolom pemain pertama
	
	printf("Player 1 move : ");
	scanf("%d%d",&baris,&kolom);
	if(titik[baris][kolom] == '.'){
		ubah(1);
		temp++;
	}else input1();

}

int input2(){ // Untuk menginputkan baris dan kolom pemain kedua

	if(temp > 8) return;
	printf("Player 2 move : ");
	scanf("%d%d",&baris,&kolom);
	 if(titik[baris][kolom] == '.'){
		ubah(2);temp++;
	}else input2();
}


