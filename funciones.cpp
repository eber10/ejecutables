#include<iostream>
#include"funciones.h"
#include"estructuras.h"
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

// funciones que sirven unicamente para mostrar lista según el tipo de producto
void mostrar_camisetas(camisetas arr[], int &n1)
{
	cout<<"N.\t"<<setw(16)<<"MODELO"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n1; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].modelo<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_shorts(shorts arr[], int &n2)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n2; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_zapatillas(zapatillas arr[], int &n3)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n3; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_canilleras(canilleras arr[], int &n4)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n4; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_medias(medias arr[], int &n5)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n5; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].talla<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
void mostrar_balones(balones arr[], int &n6)
{
	cout<<"N.\t"<<setw(16)<<"COLOR"<<setw(17)<<"TAMANO"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n6; i++)
	{
		cout<<i+1<<"\t"\
		<<setw(15)<<arr[i].color<<"\t"\
		<<setw(15)<<arr[i].tamano<<"\t"\
		<<setw(15)<<arr[i].marca<<"\t"\
		<<setw(15)<<arr[i].precio<<"\t"\
		<<setw(15)<<arr[i].cantidad<<endl;
	}
}
// funciones que sirven unicamente para agregar un producto
void agregar_camisetas(camisetas arr[], int &n1)
{
	cout<<"ingrese el modelo: "; cin>>arr[n1].modelo;
	cout<<"ingrese la talla: "; cin>>arr[n1].talla;
	cout<<"ingrese la marca:"; cin>>arr[n1].marca;
	cout<<"ingrese precio: "; cin>>arr[n1].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n1].cantidad;
	n1++;
}
void agregar_shorts(shorts arr[], int &n2)
{
	cout<<"ingrese color: "; cin>>arr[n2].color;
	cout<<"ingrese la talla: "; cin>>arr[n2].talla;
	cout<<"ingrese la marca:"; cin>>arr[n2].marca;
	cout<<"ingrese precio: "; cin>>arr[n2].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n2].cantidad;
	n2++;
}
void agregar_zapatillas(zapatillas arr[], int &n3)
{
	cout<<"ingrese color: "; cin>>arr[n3].color;
	cout<<"ingrese la talla: "; cin>>arr[n3].talla;
	cout<<"ingrese la marca:"; cin>>arr[n3].marca;
	cout<<"ingrese precio: "; cin>>arr[n3].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n3].cantidad;
	n3++;
}
void agregar_canilleras(canilleras arr[], int &n4)
{
	cout<<"ingrese color: "; cin>>arr[n4].color;
	cout<<"ingrese la talla: "; cin>>arr[n4].talla;
	cout<<"ingrese la marca:"; cin>>arr[n4].marca;
	cout<<"ingrese precio: "; cin>>arr[n4].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n4].cantidad;
	n4++;
}
void agregar_medias(medias arr[], int &n5)
{
	cout<<"ingrese color: "; cin>>arr[n5].color;
	cout<<"ingrese la talla: "; cin>>arr[n5].talla;
	cout<<"ingrese la marca:"; cin>>arr[n5].marca;
	cout<<"ingrese precio: "; cin>>arr[n5].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n5].cantidad;
	n5++;
}
void agregar_balones(balones arr[], int &n6)
{
	cout<<"ingrese color: "; cin>>arr[n6].color;
	cout<<"ingrese la tamano: "; cin>>arr[n6].tamano;
	cout<<"ingrese la marca:"; cin>>arr[n6].marca;
	cout<<"ingrese precio: "; cin>>arr[n6].precio;
	cout<<"ingrese la cantidad:"; cin>>arr[n6].cantidad;
	n6++;
}
///ff
void actualizar_camisetas(camisetas arr[], int &n1, int &numero)
{
	for(int i=0; i<n1; i++)
	{
			if(numero-1==i)
			{
			    cout<<"ingrese el modelo: "; cin>>arr[i].modelo;
	            cout<<"ingrese la talla: "; cin>>arr[i].talla;
	            cout<<"ingrese la marca:"; cin>>arr[i].marca;
	            cout<<"ingrese precio: "; cin>>arr[i].precio;
	            cout<<"ingrese la cantidad:"; cin>>arr[i].cantidad;
			}
			if(numero<0 or numero>n1)
			{
				cout<<"el numero es incorrecto"<<endl;
				break;
			}		
	}
}

void actualizar_shorts(shorts arr[], int &n2, int &numero)
{
	for(int i=0; i<n2; i++)
	{
			if(numero-1==i)
			{
			    cout<<"ingrese color: "; cin>>arr[i].color;
	            cout<<"ingrese la talla: "; cin>>arr[i].talla;
	            cout<<"ingrese la marca:"; cin>>arr[i].marca;
	            cout<<"ingrese precio: "; cin>>arr[i].precio;
	            cout<<"ingrese la cantidad:"; cin>>arr[i].cantidad;
			}
			if(numero<0 or numero>n2)
			{
				cout<<"el numero es incorrecto"<<endl;
				break;
			}		
	}
}
void actualizar_zapatillas(zapatillas arr[], int &n3, int &numero)
{
	for(int i=0; i<n3; i++)
	{
			if(numero-1==i)
			{
			    cout<<"ingrese color: "; cin>>arr[i].color;
	            cout<<"ingrese la talla: "; cin>>arr[i].talla;
	            cout<<"ingrese la marca:"; cin>>arr[i].marca;
	            cout<<"ingrese precio: "; cin>>arr[i].precio;
	            cout<<"ingrese la cantidad:"; cin>>arr[i].cantidad;
			}
			if(numero<0 or numero>n3)
			{
				cout<<"el numero es incorrecto"<<endl;
				break;
			}		
	}
}
void actualizar_canilleras(canilleras arr[], int &n4, int &numero)
{
	for(int i=0; i<n4; i++)
	{
			if(numero-1==i)
			{
			    cout<<"ingrese color: "; cin>>arr[i].color;
	            cout<<"ingrese la talla: "; cin>>arr[i].talla;
	            cout<<"ingrese la marca:"; cin>>arr[i].marca;
	            cout<<"ingrese precio: "; cin>>arr[i].precio;
	            cout<<"ingrese la cantidad:"; cin>>arr[i].cantidad;
			}
			if(numero<0 or numero>n4)
			{
				cout<<"el numero es incorrecto"<<endl;
				break;
			}		
	}
}
void actualizar_medias(medias arr[], int &n5, int &numero)
{
	for(int i=0; i<n5; i++)
	{
			if(numero-1==i)
			{
			    cout<<"ingrese color: "; cin>>arr[i].color;
	            cout<<"ingrese la talla: "; cin>>arr[i].talla;
	            cout<<"ingrese la marca:"; cin>>arr[i].marca;
	            cout<<"ingrese precio: "; cin>>arr[i].precio;
	            cout<<"ingrese la cantidad:"; cin>>arr[i].cantidad;
			}
			if(numero<0 or numero>n5)
			{
				cout<<"el numero es incorrecto"<<endl;
				break;
			}		
	}
}
void actualizar_balones(balones arr[], int &n6, int &numero)
{
	for(int i=0; i<n6; i++)
	{
			if(numero-1==i)
			{
			    cout<<"ingrese color: "; cin>>arr[i].color;
	            cout<<"ingrese la talla: "; cin>>arr[i].tamano;
	            cout<<"ingrese la marca:"; cin>>arr[i].marca;
	            cout<<"ingrese precio: "; cin>>arr[i].precio;
	            cout<<"ingrese la cantidad:"; cin>>arr[i].cantidad;
			}
			if(numero<0 or numero>n6)
			{
				cout<<"el numero es incorrecto"<<endl;
				break;
			}		
	}
}

void mensaje_menu()
{
	cout<<"seleccione el producto a actualizar"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"1. camisetas"<<endl;
	cout<<"2. shorts"<<endl;
	cout<<"3. zapatillas"<<endl;
	cout<<"4. canilleras"<<endl;
	cout<<"5. medias"<<endl;
	cout<<"6. balones"<<endl;
	cout<<"0. atras"<<endl;
	
}




