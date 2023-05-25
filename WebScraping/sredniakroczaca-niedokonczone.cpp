#include <iostream>
using namespace std;

int main(){
    unsigned n,m;
    cout<<"Podaj ilosc liczb, jaka uwzgledniac bedzie najwieksza serdnia kroczaca"<<endl;
    cin>>n;
    double a[n];
    cout<<"Podaj całkowitą liczbe serdnii kroczacych, ktore chcesz, aby program obliczal"<<endl;
    cin>>m;
    unsigned l[m],p=m-2;
    cout<<"Podaj dlugosc serdnii nr: (podawaj rosnaco)";
    do{
        cout<<m-p<<'/'<<m<<"... ";
        cin<<l[p];
    }while(--p);
    p=m-1;
    cout<<"Program gotowy; wpisz pierwsze "<<n<<" liczb (double), aby wszystkie serdnie mogly zostac obliczone (kazda zostanie wypisana od razu gdy bedzie to mozliwe)"<<endl;
    do{
        cin>>u;
        a[p]=u;
        
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
