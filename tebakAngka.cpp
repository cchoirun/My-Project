#include <iostream>
#include <time.h>

using namespace std;

void menu(){
    cout << "\nSelamat datang di Game tebak angka!. Aturan: ";
    cout << "\n1. Diberikan sebuah angka, kamu harus menebak angka tersebut hingga benar";
    cout << "\n2. Apabila angka memiliki selisih lebih dari 20, maka program akan bilang : Kejauhann";
    cout << "\n3. apabila angka memiliki selisih antara 10-19, program akan bilang: makin dekat";
    cout << "\n4. Apabila angka memiliki selisih kurang dari 10, kamu punya kesempatan menebak 2 kali";
    cout << "\n5. Selamat Bermain!\n";

}


int main(){
    srand(time(NULL));
    int batas = 5, tebak,angka = rand() % 101, ret = 0;
    
    menu();
    while(true){
        cin >> tebak;
        if(angka == tebak){
            printf("Yeyy!. Jawabanmu benar!.\n");
            break;
        }else if(abs(angka-tebak) >= 10 && abs(angka-tebak) < 20){
            printf("Makin dekat!\n");

        }else if(abs(angka-tebak) < 10){
            ret += 1;
            if(ret == 1 || ret == 3){
                printf("Dikiiit lagi!. Sisa %d lagi buat nebak\n",batas-ret);

            }else if(ret == 2 || ret == 4){
                printf("Yook bisa yok!. Sisa %d lagi!\n",batas-ret);
            }
            if(ret == 5){
                printf("Hahaha salah!. Jawaban yang benar adalah %d\n",angka);
                break;
            }
        }else{
            printf("Kejauhann!.\n");
        }
       

    }
    return 0;
}