#include<iostream>
using namespace std;
void HSNewton(int n);
int Nhapk(int &n);
int main()
	{
		int k;
		
		Nhapk(k);
		cout<<endl;
		
		cout << "He so cua nhi thuc Newton co mu k=" << k << ": " << endl;
		HSNewton(k);
		
		return 0;
	}
int Nhapk(int &n)
	{
		cout << "Nhap k: ";
		cin >> n;
	}
int Giaithua(int n)
	{
		int p=1;
		
		for(int i=1;i<=n;i++)
			p*=i;
			
		return p;
	}
int Tohop(int n, int k)
	{
		int tam=n-k;
		
		return Giaithua(n)/(Giaithua(k)*Giaithua(tam));
		
	}
void HSNewton(int n)
	{
			for(int i=0;i<=n;i++)
				{
					if(i==0) {cout<<"1"<<endl;i++;}
					for(int j=0;j<=i;j++)
						cout<<Tohop(i,j)<<" ";
					cout << endl;
				}
	}

