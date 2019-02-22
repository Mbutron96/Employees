//
//  main.c
//  Empleados
//
//  Created by Miguel Ángel Butrón López on 2/19/19.
//  Copyright © 2019 Miguel Ángel Butrón López. All rights reserved.
//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


void imprimeReporte(void);

struct Empleado{
    int numEmpleado;
    char nombre[30];
    char apellido[30];
    char departamento[20];
    float sueldo;
};

char archivo[] = "/Applications/Desktop/UNAM/2019-2/EDA/datos/Empleados/Empleados/Empleados.txt";
struct Empleado emp;

int main(void){
    setlocale(LC_ALL, "");
    char buff[255];
    int result=0;
    FILE *fp;
    
    fp = fopen(archivo ,"r");
    
    if(fp == NULL){
        printf("No se abrio\n");
    }
    else{
    
    fgets(buff,255,fp);//char *fgets(char* buffer, int tamaño, FILE *archivo);
    
        printf("Listado de clientes\n");
      //  printf("%s",buff);
        
        
      /*  do{
            
            result = fscanf(fp,"%s",buff);       //int fscanf(FILE *fp, const char *format, ...);
            emp.numEmpleado = atoi(buff);
            
            result= fscanf(fp,"%s", buff);
            strcpy(emp.nombre, buff);
            
            result = fscanf(fp,"%s",buff);
            strcpy(emp.apellido, buff);
            
            result = fscanf(fp,"%s",buff );
            strcpy(emp.departamento, buff);
            
            result = fscanf(fp,"%s",buff );
            emp.sueldo= atof(buff);
            
            imprimeReporte();
            
        }
        while(result!=EOF);
        */
        while(result!=EOF){
            result = fscanf(fp,"%s",buff);       //int fscanf(FILE *fp, const char *format, ...);
            emp.numEmpleado = atoi(buff);
            
            result= fscanf(fp,"%s", buff);
            strcpy(emp.nombre, buff);
            
            result = fscanf(fp,"%s",buff);
            strcpy(emp.apellido, buff);
            
            result = fscanf(fp,"%s",buff );
            strcpy(emp.departamento, buff);
            
            result = fscanf(fp,"%s",buff );
            emp.sueldo= atof(buff);
            
            
            if (result!=EOF) {
                imprimeReporte();
            }
        }
        
     fclose(fp);
        
    }
    
    puts("");
    return 0;
    }

    

void imprimeReporte()
{
    puts("===========================================================================");
    printf("Número de empleado:   %d\n",emp.numEmpleado);
    printf("Nombre:               %s\n", emp.nombre);
    printf("Apellido:             %s\n", emp.apellido);
    printf("Departamento:         %s\n", emp.departamento);
    printf("Sueldo:               %.2f\n",emp.sueldo);
   

}














