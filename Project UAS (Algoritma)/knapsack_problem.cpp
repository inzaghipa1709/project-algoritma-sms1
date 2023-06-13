#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int i, K, N, mtot=0, knap;
int Berat[100], Profit[100], p_no[100];
float Density[100];

template <class T>
void sort(T *a,int i,int j){
    T temp;
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
    return;
}

void display(){
    cout<<"\nNo.\t\tW\t\tP\t\tP/W\n";
    for(int i=0; i<N; i++)
        cout<<p_no[i]<<"\t\t"<<Berat[i]<<"\t\t"<<Profit[i]<<"\t\t"<<std::setprecision(2)<<Density[i]<<"\n";
}

void knapsack(){
    int u,i;
    u=K;
    int x[50];

    cout<<"\nSolusi Optimal : "<<endl;

    for(i=0; i<N; i++)
        x[i]=0;
    for(i=0; i<N; i++){
        if(Berat[i]>u){
            break;
            x[i]=0;
        }
        else{
            x[i]=1;
            u=u-Berat[i];
        }
    }

    int opt_solution=0;
    for(i=0; i<N; i++){
        cout<<x[i]<<" ";
        opt_solution=opt_solution+(Profit[i]*x[i]);
    }

    cout<<"\n\n--------- Greedy By Density (0-1 Knapsack) ---------\n";
    cout<<"\nBrng\t\tW\t\tP\t\tP/W\t\tGreedy Density\n";

    for(int i=0; i<N; i++)
        cout<<p_no[i]<<"\t\t"<<Berat[i]<<"\t\t"<<Profit[i]<<"\t\t"<<std::setprecision(2)<<Density[i]<<"\t\t"<<x[i]<<"\n";

    mtot=K-u;
    cout<<"\n\nTotal Berat\t: "<<mtot;
    cout<<"\nTotal Profit\t: "<<opt_solution;
}

void fracKnapsack(){
    int u,i;
    u=K;
    float x[10];

    cout<<"\nSolusi Optimal : "<<endl;

    for(i=0; i<N; i++)
        x[i]=0;
    for(i=0; i<N; i++){
        if(Berat[i]>u)
            break;
        else{
            x[i]=1;
            u=u-Berat[i];
        }
    }
    if(i<=N)
        x[i]=(float)u/Berat[i];
    for(i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(p_no[i]>p_no[j]){
                sort(p_no,i,j);
                sort(x,i,j);
                sort(Profit,i,j);
            }
        }
    }
    float opt_solution=0;
    for(i=0; i<N; i++){
        cout<<x[i]<<" ";
        opt_solution=opt_solution+(Profit[i]*x[i]);
    }

    cout<<"\n\n----------- Greedy By Density (Fractional Knapsack) -----------\n";
    cout<<"\nBrng\t\tW\t\tP\t\tP/W\t\tFractional Density\n";

    for(int i=0;i<N;i++)
    cout<<p_no[i]<<"\t\t"<<Berat[i]<<"\t\t"<<Profit[i]<<"\t\t"<<Density[i]<<"\t\t"<<x[i]<<"\n";

    mtot=K-u;
    cout<<"\n\nTotal Berat\t: "<<mtot;
    cout<<"\nTotal Profit\t: "<<opt_solution;
}

int main(){
    cout<<"PROGRAM ALGORITMA GREEDY KNAPSACK PROBLEM"<<endl;
    cout<<endl;
    cout<<"Masukkan Nilai Kapasitas : ";
    cin>>K;
    cout<<"Masukkan Jumlah Item     : ";
    cin>>N;
    cout<<"\nK = "<<K<<endl;

    for(i=0; i<N; i++){
        p_no[i]=i+1;
        cout<<"\nBarang ke-"<<(i+1);
        cout<<"\nBerat : ";
        cin>>Berat[i];
        cout<<"Profit : ";
        cin>>Profit[i];
        Density[i] = (float)Profit[i]/Berat[i];
    }

    cout<<"\nBerat :"<<endl;
    cout <<"W = { ";
    for(i=0; i<N; i++){
        cout<<Berat[i]<<" ";
    }
    cout << "}"<<endl;
    cout<<endl;

    cout<<"Profit :"<<endl;
    cout <<"P = { ";
    for(i=0; i<N; i++){
        cout<<Profit[i]<<" ";
    }
    cout << "}"<<endl;
    cout<<endl;

    display();
    for(i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(Density[i]<Density[j]){
                sort(p_no,i,j);
                sort(Berat,i,j);
                sort(Profit,i,j);
                sort(Density,i,j);
            }
        }
    }

    cout<<"\nKeterangan : \t"<<endl;
    cout<<"1. Knapsack Problem"<<endl;
    cout<<"2. Fractional Knapsack Problem"<<endl;
    cout<<"\nPilih Opsi Knapsack : ";
    cin>>knap;

    if (knap == 1){
        knapsack();
    }
    else if (knap == 2){
        fracKnapsack();
    }
    else {
        cout<<"Invalid"<<endl;
    }

    return 0;
}
