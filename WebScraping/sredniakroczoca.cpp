#include <iostream>
using namespace std;

int main(){
    unsigned n,m;
    cout<<"Podaj ilosc liczb, jaka uwzgledniac bedzie najwieksza serdnia kroczaca"<<endl;
    cin>>n;
    double a[n];
    cout<<"Podaj liczbe serdnii kroczacych, ktore chcesz, aby program obliczal"<<endl;
    cin>>m;
    unsigned l[m],p=m-1;
    cout<<"Podaj dlugosc sredniej, ktora bedzie wypisywana jako:"
    do{
        cout<<m-p<<"... ";
        cin<<l[p]
    }while(p--);
    p=0;
    cout<<"Program gotowy; wpisz pierwsze "<<n<<" liczb (double), aby wszystkie serdnie mogly zostac obliczone (kazda zostanie wypisana od razu gdy bedzie to mozliwe)"<<endl;
    do{
        cin>>u;
        a[p]=u;
        s+=u;
    }while(++p<n);
    p=0;
    cout<<"Swietnie; teraz program bedzie podawal nowa serdnie po kazdej wpisanej liczbie!";
    do{
        cout<<endl<<"Podaj nowa wartosc..."<<endl;
        cin>>u;
        s=s+u-a[p];
        a[p]=u;
        cout<<"Serdnia z "<<n<<" poprzednich liczb = "<<s/n;
        p=(p+1)%n;
    }while(true);
    return 0;
}
