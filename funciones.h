#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<iostream>
#include"estructuras.h"
//declarar funciones para mostrar lista de productos
void mostrar_camisetas(camisetas arr[], int &n1);
void mostrar_shorts(shorts arr[], int &n2);
void mostrar_zapatillas(zapatillas arr[], int &n3);
void mostrar_canilleras(canilleras arr[], int &n4);
void mostrar_medias(medias arr[], int &n5);
void mostrar_balones(balones arr[], int &n6);
//declarar funciones para agregar producto
void agregar_camisetas(camisetas arr[], int &n1);
void agregar_shorts(shorts arr[], int &n2);
void agregar_zapatillas(zapatillas arr[], int &n3);
void agregar_canilleras(canilleras arr[], int &n4);
void agregar_medias(medias arr[], int &n5);
void agregar_balones(balones arr[], int &n6);
//declarar funciones para actualizar productos
void actualizar_camisetas(camisetas arr[], int &n1, int &numero);
void actualizar_shorts(shorts arr[], int &n2, int &numero);
void actualizar_zapatillas(zapatillas arr[], int &n3, int &num);
void actualizar_canilleras(canilleras arr[], int &n4, int &numero);
void actualizar_medias(medias arr[], int &n5, int &numero);
void actualizar_balones(balones arr[], int &n6, int &numero);
void mensaje_menu();


#endif
