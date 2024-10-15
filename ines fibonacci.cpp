#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a=0,b=1,c=0;
	int n,i;
	
	cout <<"veillez entrer l'indice du therme dont vous souhaitez avoir la valeur\n";
	cin >>n;
	if(n<0) {
	cout<< "\nSaisie incorrecte, veillez entrez un nombre positif\n";
	cin>> n;
	}

	if(n==0){
	
	cout<<"F(0)=0\n";
	}
	
    if (n==1){
	
	cout<<"F(1)=1\n";
	}
   
	if(n>=2){
	
	 for(i=2;i<=n;i++){
		
	 	a=b;
	 	b=c+b;
	    c=a;
	
		
     }
     cout<<"F("<<n<<")="<<b;  
    }
	
		
		
	return 0;
}
