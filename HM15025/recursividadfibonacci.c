/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 12 de noviembre de 2018, 09:21 AM
 */

#include<stdio.h>

long fibonnaci(long);
long serie,valor1=0,valor2=1,valor3=0;

int main(){

	printf("Cuantos Fibonnaci: ");
	scanf("%ld",&serie);

	fibonnaci(serie);	
	
return 0;
}

long fibonnaci(long n){

	if(n>0){
	printf("%ld,",valor3);
	valor1=valor2;
	valor2=valor3;
	valor3=valor1+valor2;
	fibonnaci(n-1);
	}

return n;
}

