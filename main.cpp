#include <iostream>
#include <cmath>
using namespace std;
void problema1(){

    int n,vector[1000],elemente_pare=0,suma_elemente_pare=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]%2==0)
            elemente_pare++,suma_elemente_pare+=vector[i];

    cout<< suma_elemente_pare*1.0/elemente_pare;

}
void problema2(){
    int n,vector[1000],x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]==x) {
            cout << "Gasit!";
            break;
        }
    cout<<"Nu s-a gasit! :(";
}
void problema3(){
    int n,vector_a[1000],vector_b[1000],vector_c[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector_a[i];
    for(int i=0;i<n;i++)
        cin>>vector_b[i];
    for(int i=0;i<n;i++)
        vector_c[i] = vector_a[i]-vector_b[i];
    for(int i=0;i<n;i++)
        cout<<vector_c[i]<<" ";
}
void problema4(){
    int n,vector[1000],pozitie_minim=0,pozitie_maxim=0,minim=INT_MAX,maxim=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]<minim)
            minim=vector[i],pozitie_minim=i;
    for(int i=0;i<n;i++)
        if(vector[i]>maxim)
            maxim=vector[i],pozitie_maxim=i;
    swap(vector[pozitie_minim],vector[pozitie_maxim]);

}
void problema5(){
    int n,vector[1000],suma_pozitive=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]>0)
            suma_pozitive+=vector[i];
    cout<<suma_pozitive;
}
void problema6(){
    int n,vector[1000],produs=1,numar_negative=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]<0 and i%2==1)
            produs*=vector[i],numar_negative++;
    cout<<produs<<" "<<numar_negative;
}
void problema7(){
    int n,vector[1000],produs=1,numar_negative=0,numar_pozitive=0,numar_nule=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++){
        if(vector[i]>0)
            numar_pozitive++;
        else if(vector[i]<0)
            numar_negative++;
        else
            numar_nule++;
    }
    cout<<numar_pozitive<<" "<<numar_negative<<" "<<numar_nule;
}
void problema8(){
    int n,vector[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++){
        if(vector[i]%2==0 and i%3==0)
            cout<<vector[i]<<" ";
    }
}
void problema9(){
    int n,vector[1000],minim_1=INT_MAX,minim_2=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++){
        if(vector[i]<minim_1){
            minim_2=minim_1;
            minim_1=vector[i];
        }
        else if(vector[i]>minim_1 and vector[i]<minim_2)
            minim_2=vector[i];
    }
    cout<<minim_2<<" "<<minim_1;
}
void problema10(){
    //e problema 2
}
void problema11(){
    int n,vector[1000],suma=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]%2==1 and i%2==0)
            suma+=vector[i];
    cout<<suma;
}
void problema12(){
    int n,vector[1000],suma_negative=0,produs_pozitive=1;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        vector[i]>0 ? produs_pozitive*=vector[i] : suma_negative+=vector[i];
    //e un if mai fancy
    cout<<produs_pozitive/suma_negative;
}
void problema13(){
    int n,vector[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
    {
        bool prim = true;
        for(int j=2;j<=sqrt(vector[i]);j++)
            if(vector[i]%j==0){
                prim=false;
                break;
            }
        if(prim)
            cout<<vector[i]<<" ";
    }
}
void problema14(){
    int n,vector[1000],nr_poz=0,nr_neg=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        vector[i]>=0 ? nr_poz++ : nr_neg++;
    //e un if mai fancy
    cout<<nr_poz/nr_neg;
}
void problema15(){
    int n,vector[1000],nr_poz=0,nr_neg=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++)
        if(vector[i]%2==1 and i%5==0)
            cout<<vector[i]<<" ";
}
void problema16(){
    int n,vector[1000],maxim_1=INT_MIN,maxim_2=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n;i++){
        if(vector[i] > maxim_1){
            maxim_2=maxim_1;
            maxim_1=vector[i];
        }
        else if(vector[i] < maxim_1 and vector[i] > maxim_2)
            maxim_2=vector[i];
    }
    cout << maxim_2 << " " << maxim_1;
}
void problema17(){
    int n,vector[1000],diferenta=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vector[i];
    for(int i=0;i<n-1;i++)
        diferenta=max(abs(vector[i]-vector[i+1]),diferenta);
    cout<<diferenta;
}
int main() {
   problema17();
}
