#include<iostream>
#include<string>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
#include"almacen.h"
using namespace std;

int main()
{   //tam=10 variable utilizado para definir el tamaño, útil para modificar el tamaño de todos los arreglos que utilicen esa variable
    
	
	
	int opcion;
	cout<<"bienvenido"<<endl;
	do
	{
		cout<<"1. mostrar lista de productos"<<endl;
		cout<<"2. agregar producto"<<endl;
		cout<<"4. actualizar "<<endl;
		cout<<"0. salir"<<endl;
		cin>>opcion;
		switch(opcion)
		{   //opción 1 que contiene un menú, muestra una lista de productos según la opción a elegir
			case 1: //eber
				int producto;
				do
				{   //menú para mostrar según el tipo de producto a seleccionar
					cout<<"--------------------------------------------------------------------------------------------"<<endl;
					mensaje_menu();
					cin>>producto;
					switch(producto)
					{   //funciones utilizadas para mostrar la lista
						case 1:mostrar_camisetas(camiseta, n1);break;
						case 2:mostrar_shorts(pantalon_corto, n2);break;
						case 3:mostrar_zapatillas(calzado, n3);break;
						case 4:mostrar_canilleras(protectores, n4);break;
						case 5:mostrar_medias(media_larga, n5);break;
						case 6:mostrar_balones(pelota, n6);break;
						default:break;
					}
				}
				while(producto!=0);
				break;
				
			case 2: //franklin
				int op;
				do
				{   
					mensaje_menu();
					cin>>op;
					switch(op)
					{   
						case 1:agregar_camisetas(camiseta, n1); break;
						case 2:agregar_shorts(pantalon_corto, n2); break;
						case 3:agregar_zapatillas(calzado, n3); break;
						case 4:agregar_canilleras(protectores, n4); break;
						case 5:agregar_medias(media_larga, n5); break;
						case 6:agregar_balones(pelota, n6); break;
						default:break;
					}
				}
				while(op!=0); 
				break;
			case 3: //frank
			    break;
			case 4:
			    int alternativa, numero;
				do
				{   
					mensaje_menu();
					cin>>alternativa;
					switch(alternativa)
					{   
						case 1:
						  mostrar_camisetas(camiseta, n1);
						  cout<<"ingrese el numero del producto: "; cin>>numero;
						  actualizar_camisetas(camiseta, n1, numero);
						  break;
						case 2:
						  mostrar_shorts(pantalon_corto, n2);
						  cout<<"ingrese el numero del producto: "; cin>>numero;
						  actualizar_shorts(pantalon_corto, n2, numero);
						  break;
						case 3:
						  mostrar_zapatillas(calzado, n3);
						  cout<<"ingrese el numero del producto: "; cin>>numero;
						  actualizar_zapatillas(calzado, n3, numero);
						  break;
						case 4:
						  mostrar_canilleras(protectores, n4);
						  cout<<"ingrese el numero del producto: "; cin>>numero;
						  actualizar_canilleras(protectores, n4, numero);
						  break;
						case 5:
						  mostrar_medias(media_larga, n5);
						  cout<<"ingrese el numero del producto: "; cin>>numero;
						  actualizar_medias(media_larga, n5, numero);
						  break;
						case 6:
						  mostrar_balones(pelota, n6);
						  cout<<"ingrese el numero del producto: "; cin>>numero;
						  actualizar_balones(pelota, n6, numero);
						  break;
						
						default:break;
					}
				}
				while(alternativa!=0);
			
			
			
			
			
			
			
			
			
			    break;
			case 5: //cristian
			    break;
			case 6: //franklin
			    break;
			case 7: //cristian
			    break;
		}
	}
	while(opcion!=0);
	
	return 0;
}
