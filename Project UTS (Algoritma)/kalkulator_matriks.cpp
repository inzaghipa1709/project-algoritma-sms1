#include <iostream>
#include <conio.h>

int main(){
    int i,j,M,N,r,p; int A[10][10],B[10][10],C[10][10];
    char jawab;
    jawab='Y';
    for (;jawab=='y'||jawab=='Y';){
        std::cout<<"========Progam Menghitung Matriks======="<<std::endl;
        std::cout<<"==============KETERANGAN :=============="<<std::endl;
        std::cout<<"==1. Jumlah Baris dan Kolom harus sama=="<<std::endl;
        std::cout<<"==2. Maksimal Ordo 10x10              =="<<std::endl;
        std::cout<<"========================================"<<std::endl;
        std::cout<<"                                        "<<std::endl;
        std::cout<<"Masukkan Ordo Matriks :"<<std::endl;
        std::cout<<"Banyaknya Baris:";
        std::cin>>M;
        std::cout<<"Banyaknya Kolom:";
        std::cin>>N;
        std::cout<<std::endl;
        {
            if(M==N){
                std::cout<<"Masukkan Elemen Matriks A:"<<std::endl;
            for(i=0;i<M;i++) for(j=0;j<N;j++){
                std::cout<<"Masukkan Elemen ["<<i+1<<","<<j+1<<"]: ";
                std::cin>>A[i][j];
            }
            std::cout<<"Masukkan Elemen Matriks B:"<<std::endl;
                for (i=0;i<M;i++) for(j=0;j<N;j++){
                std::cout<<"Masukkan Elemen ["<<i+1<<","<<j+1<<"]: ";
                std::cin>>B[i][j];
                }
            {
            std::cout<<"--------------------------------------------"<<std::endl;
            std::cout<<"<<Pilih (1=Jumlah, 2=Kurang, 3=Perkalian)>> : ";std::cin>>p;
            std::cout<<"--------------------------------------------"<<std::endl;
            }
            if(p==1){
                for (i=0;i<M;i++) for(j=0;j<N;j++)
                C[i][j]=A[i][j]+B[i][j];
                std::cout<<"Matriks Hasil Penjumlahan:"<<std::endl;
                for (i=0;i<M;i++){
                    for(j=0;j<N;j++)
                    std::cout<<C[i][j]<<" ";
                    std::cout<<std::endl;
                }
            }
            if(p==2){
                for (i=0;i<M;i++) for(j=0;j<N;j++)
                C[i][j]=A[i][j]-B[i][j];
                std::cout<<"Matriks Hasil Pengurangan:"<<std::endl;
                for (i=0;i<M;i++){
                    for(j=0;j<N;j++)
                    std::cout<<C[i][j]<<" ";
                    std::cout<<std::endl;
                    }
            }
            if(p==3){
                std::cout<<"MATRIK : "<<std::endl;
                std::cout<<"Matriks A            Matriks B"<<std::endl;
                for (i=0;i<M;i++){
                    for (j=0;j<N;j++){
                        std::cout<<A[i][j]<<"    ";
                    }
                    if (i==0){
                        std::cout<<"x";
                        std::cout<<"    ";
                        for (j=0;j<M;j++){
                            std::cout<<B[i][j]<<"    ";
                        }
                    }
                    if (i>0){
                        std::cout<<"    ";
                        for (j=0;j<M;j++)
                        std::cout<<" "<<B[i][j]<<"   ";
                    }
                    std::cout<<std::endl;
                }
                C[i+1][j+1]=0;
                for (i=0;i<M;i++){
                    for (j=0;j<N;j++){
                        C[i+1][j+1]=0;
                        for (r=0;r<N;r++){
                            C[i+1][j+1]=C[i+1][j+1]+A[i][r]*B[r][j];
                        }
                    }
                }
                std::cout<<std::endl<<"Matriks Hasil Perkalian = "<<std::endl;
                for (i=0;i<M;i++){
                    for (j=0;j<N;j++){
                    std::cout<<C[i+1][j+1]<<"     ";
                    }
                    std::cout<<std::endl;
                }
            }
            }
            else{
                std::cout<<"Ordo Salah, Invalid!"<<std::endl;
                std::cout<<"APAKAH ANDA INGIN MENGULANG?(Y/T) ";
                std::cin>>jawab;
                }
        }
        std::cout<<"APAKAH INGIN MENGHITUNG ULANG (Y/N)?:";
        jawab=getch();
        std::cout<<std::endl<<std::endl;
        }
    jawab='N';
    for(;jawab=='N'||jawab=='n';){
        std::cout<<"Silahkan Eksekusi Program Ditutup:";
        jawab=getch();
        std::cout<<std::endl<<std::endl;
    }
}
