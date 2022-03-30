#include<iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
void generate_array_plus(int array[], int n);
void tests(int test_number,int num);
int algorithm(int a,int arr[],int num);
using namespace std;
int main(){

tests(50,4);
//algorithm(&cp,7,array);

return 0;
}

int algorithm(int a,int *arr,int num){
	int i, j,aux,top,first;
	bool flag = false;
	top=a-1;
	first=0;
	aux =a/3;
	i=aux-1;
	j=(aux + aux)-1;
	
	cout<<aux<<endl;
	cout<<i<<endl;
	cout<<j<<endl;	
	while(first<i &&i<j &&j<top){
		cout<<"contador inicio de ciclo"<<j<<endl;
		if(num==arr[i]){
			return i;
			flag=true;
		}
		
		else if(num==arr[j]){
			cout<<"Valor dentro: "<<arr[j]<<endl;
			return j;
			flag=true;
		}
		else if(num<arr[i]){
					i--;	
		}
		else if(arr[i]< num <arr[j]){
			cout<<"valor en la posicon i"<<arr[i]<<endl;
			cout<<"valor en la posicon j"<<arr[j]<<endl;
			cout<<"numero buscado"<<num<<endl;
			cout<<"entre al segundo if"<<endl;
			j--;
		}
		else if(arr[j]<num){
			j++;
		}
		else if(first==i || i==j || j==top ){
			flag=true;
		}
		cout<<"contador j"<<j<<endl;
	}
	cout<<"no encontro"<<endl;
}

void generate_array_plus(int array[], int n){
  for(int i=0; i<n; i++){
    array[i] = i;
    cout<<array[i]<<":"<<i;
  } 
  cout<<endl;
}
void tests(int test_number,int num){

  for(int i=6; i<7; i+=3){
  	
    int array[i];
    generate_array_plus(array, i);
    cout<<algorithm(i,array,num)<<endl;
  }
}
