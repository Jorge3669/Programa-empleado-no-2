#include <iostream>

/* Construir un programa que capture los datos de un empleado, desplegar su cheque semanal si gana más de $500.00 y si esta en el 
departamento de producción, en caso contrario desplegarle un bono de despensa del 25% de su sueldo semanal.*/


using namespace std;
int main(int argc, char** argv) {
	string name, puesto, direccion;
	int sueldo;
	int bono;
	char op;
	
	
	
	cout<<"Ingrese el nombre del empleado"<<endl;
	cin>>name;
	cout<<"Ingrese el puesto del empleado"<<endl;
	cin>>puesto;
	cout<<"Seleccione el departamento del empleado"<<endl;
	cout<<"1) Direccion"<<endl;
	cout<<"2) Contabilidad"<<endl;
	cout<<"3) Recursos Humanos"<<endl;
	cout<<"4) Ventas"<<endl;
	cout<<"5) Produccion"<<endl;
	cin>>op;
	cout<<"Ingrese la direccion del empleado"<<endl;
	cin>>direccion;
	cout<<"Ingrese el sueldo del empleado:  $"<<endl;
	cin>>sueldo;

	
	
	if (sueldo>500 && op=='5'){
		
		cout<<"Su cheque semanal es del monto de: $" <<sueldo<<endl;
	}
	else{
		bono=sueldo*0.25;
		cout<<"Su bono de despensa del $25% de su sueldo es"<<bono<<endl;
	
		
	}
	system("pause");
}
