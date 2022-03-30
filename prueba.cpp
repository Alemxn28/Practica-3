#include<iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
void generate_array_plus(int array[], int n);
void tests(int test_number,int num);
void algorithm(int a,int arr[],int num);
using namespace std;
int main(){

tests(50,8);
//algorithm(&cp,7,array);

return 0;
}

void algorithm(int a,int *arr,int num){
	int i, j,aux,top,first,mitad;
	bool flag = false;
	top=a;
	first=0;
	aux =a/3;
	i=aux-1;
	j=(aux + aux)-1;
	
	
	//cout<<aux<<endl;
	cout<<"Contador i: "<<i<<endl;
	cout<<"Contador j: "<<j<<endl;	
	while(first<i && i<j && j<top){
		cout<<"contador inicio de ciclo j: "<<j<<endl;
		cout<<"contador inicio de ciclo i: "<<i<<endl;
		if(num==arr[i]){
			cout<<"Posicion del numero: "<<i<<endl;
			flag = true;
			break;
		}
		if(num==arr[j]){
			cout<<"Posicion del numero: "<<j<<endl;
			flag = true;
			break;
		}
		if(arr[i]>num<arr[j]){
			first=i;
			i=(first+j)/2;
		}
		if(arr[i]>num){
			j=i;
			i=(first+j)/2;
		}
		if(arr[j]<num){
			i=j;
			j=(i+top)/2;
		}
		
	}
	if(flag==false){
		cout<<"No se encuentra el elemento en el arreglo"<<endl;
	}
}
void generate_array_plus(int array[], int n){
  for(int i=0; i<n; i++){
    array[i] = i;
    cout<<"["<<array[i]<<"]"<<": "<<i;
  	cout<<endl;
  } 
  cout<<endl;
}
void tests(int n,int num){

  for(int i=6; i<n; i+=3){
  	
    int array[i];
    generate_array_plus(array, i);
    algorithm(i,array,num);
  }
}
