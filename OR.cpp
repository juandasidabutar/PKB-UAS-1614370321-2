# include <iostream>
using namespace std;

int main()
{
		int w1,w2,x1,x2,O;
		w1=2;w2=2;
		cout<<"Masukkan nilai X1 =";
		cin>>x1;
		cout<<"Masukkan nilai X2 =";
		cin>>x2;
		O=x1*w1+x2*w2;
		if(O>=2)
			cout<<"Output OR Logic bernilai TRUE";
		else
			cout<<"Output OR Logic bernilai FALSE";		
}
