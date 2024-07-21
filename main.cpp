#include<iostream>
#include<string>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
using namespace std;

int main()
{   //tam=10 variable utilizado para definir el tamaño, útil para modificar el tamaño de todos los arreglos que utilicen esa variable
    const int tam=100;
	int n1=10, n2=10, n3=10, n4=10, n5=10, n6=10;
	//productos almacenados inicialmente
	camisetas camiseta[tam]={
		{"barca", "M", "adidas", 40.00, 2},
		{"madrid", "S", "adidas", 40.00, 2},
		{"river", "S", "adidas", 40.00, 2},
		{"psg", "S", "adidas", 40.00, 2},
		{"cristal", "S", "adidas", 40.00, 2},
		{"psg", "M", "adidas", 40.00, 2},
		{"psv", "S", "adidas", 40.00, 2},
		{"roma", "S", "adidas", 40.00, 2},
		{"boca", "M", "adidas", 40.00, 2},
		{"alianza", "M", "adidas", 40.00, 2}
	};
	shorts pantalon_corto[tam]={
		{"rojo", "M", "adidas", 30.00, 2},
		{"negro", "S", "adidas", 30.00, 2},
		{"blanco", "S", "adidas", 30.00, 2},
		{"naranja", "S", "adidas", 30.00, 2},
		{"verde", "S", "adidas", 30.00, 2},
		{"plomo", "M", "adidas", 30.00, 2},
		{"azul", "S", "adidas", 30.00, 2},
		{"negro", "L", "adidas", 30.00, 2},
		{"blanco", "M", "adidas", 30.00, 2},
		{"rojo", "L", "adidas", 30.00, 2}
	};
	zapatillas calzado[tam]={
		{"rojo", 39, "nike", 300.00, 2},
		{"negro", 20, "puma", 500.00, 2},
		{"azul", 40, "puma", 400.00, 2},
		{"rojo", 37, "umbro", 200.00, 2},
		{"verde", 42, "adidas", 200.00, 2},
		{"rosado", 45, "nike", 300.00, 2},
		{"negro", 43, "adidas", 500.00, 2},
		{"plomo", 35, "puma", 400.00, 2},
		{"azul", 30, "nike", 300.00, 2},
		{"verde", 40, "umbro", 300.00, 2}
	};
	canilleras protectores[tam]={
		{"rojo", "M", "adidas", 30.00, 2},
		{"verde", "L", "adidas", 30.00, 2},
		{"azul", "S", "nike", 25.00, 2},
		{"negro", "M", "nike", 35.00, 2},
		{"blanco", "L", "nike", 25.00, 2},
		{"plomo", "S", "adidas", 30.00, 2},
		{"cafe", "L", "nike", 25.00, 2},
		{"morado", "M", "adidas", 35.00, 2},
		{"rosado", "S", "nike", 25.00, 2},
		{"naranja", "L", "adidas", 30.00, 2}
	};
	medias media_larga[tam]={
		{"rojo", "M", "adidas", 15.00, 2},
		{"negro", "S", "adidas", 15.00, 2},
		{"azul", "L", "adidas", 15.00, 2},
		{"blanco", "M", "adidas", 15.00, 2},
		{"verde", "L", "adidas", 15.00, 2},
		{"naranja", "L", "adidas", 15.00, 2},
		{"plomo", "S", "adidas", 15.00, 2},
		{"morado", "M", "adidas", 15.00, 2},
		{"rosado", "M", "adidas", 15.00, 2},
		{"cafe", "M", "adidas", 15.00, 2}
	};
	balones pelota[tam]={
		{"azul", 1, "adidas", 70.00, 2},
		{"blanco", 2, "mibalon", 30.00, 2},
		{"naranja", 3, "nike", 60.00, 2},
		{"verde", 4, "adidas", 75.00, 2},
		{"plomo", 3, "mibalon", 30.00, 2},
		{"blanco", 5, "adidas", 80.00, 2},
		{"cafe", 2, "nike", 50.00, 2},
		{"morado", 1, "adidas", 60.00, 2},
		{"verde", 5, "nike", 65.00, 2},
		{"azul", 4, "adidas", 60.00, 2}
	};
	
	
	int opcion;
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
					cout<<"1. camisetas"<<endl;
					cout<<"2. shorts"<<endl;
					cout<<"3. zapatillas"<<endl;
					cout<<"4. canilleras"<<endl;
					cout<<"5. medias"<<endl;
					cout<<"6. balones"<<endl;
					cout<<"0. atras"<<endl;
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
					cout<<"seleccione el producto a agregar"<<endl;
					cout<<"--------------------------------"<<endl;
					cout<<"1. camisetas"<<endl;
					cout<<"2. shorts"<<endl;
					cout<<"3. zapatillas"<<endl;
					cout<<"4. canilleras"<<endl;
					cout<<"5. medias"<<endl;
					cout<<"6. balones"<<endl;
					cout<<"0. atras"<<endl;
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
