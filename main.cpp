#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   int antiguedad, salario, nuevosalario;
   
   cout<<"ingrese antiguedad: ";
   cin>>antiguedad;
   cout<<"ingrese salario: ";
   cin>>salario;
   
   
   
   if(antiguedad >= 0 && antiguedad <= 1){
   nuevosalario = salario;
   cout<<"nuevosalario: "<<nuevosalario<<endl; 
   } else if(antiguedad >= 2 && antiguedad <= 3){
   nuevosalario = salario + (salario * 0.10);
   cout<<"10% nuevosalario:"<<nuevosalario<<endl; 
   } else if(antiguedad >= 4 && antiguedad <= 5){
   	nuevosalario = salario + (salario * 0.15);
   	cout<<"15% nuevosalario:"<<nuevosalario<<endl;
   }  else {
      nuevosalario = salario + (salario * 0.20);
   cout<<"20% nuevosalario:"<<nuevosalario<<endl;
}


	return 0;
}
