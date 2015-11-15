
/*****************************************************************************
 * Copyright (C) Aditya Garde aditya.garde96@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"

int add_supplier() {
	struct supplier supplier;
	FILE *fp = fopen("supplier.txt", "a+");//open branch file for writing+
	while(1) {
		printf("\nSupplier code:");
		scanf("%d", &supplier.code);
		if(supplier.code == 0) {
			break;
		}
		
		printf("\nSupplier Name : ");
		scanf("%s", supplier.name);
	
		fprintf(fp, "%s\t%d", supplier.name, supplier.code);	//write to file
	}
	fclose(fp);
	return 0;
}

void show_supplier() {
	struct supplier s;
	int n = 0;
	FILE *fp;
	fp = fopen("supplier.txt", "r");
	if(fp == NULL) {
		perror("Supplier file could not open.");
	}
	printf("Code\t\tSupplier Name\n");
	while(fscanf(fp, "%s%d", s.name, &s.code) != -1){  
		printf("%d\t\t%s\n", s.code, s.name);
		n++;
	} 
	
	fclose(fp);
	printf("Total Suppliers = %d\n",n);
}

void searchforsupplier(char *suppliername){
	struct supplier supplier;
	FILE *fp;int code;
	char *str = (char *)malloc(50);
	fp = fopen("supplier.txt", "r");
	while(fscanf(fp, "%s%d", str, &code) != -1){
		if(strcmp(str, suppliername) == 0){
			printf("Entry present\n");
			printf("%s %d\n", str, code);
			
		}
	}
	fclose(fp);
	
}

int new_stock() {
	struct stock stock;
	FILE *fp;//open branch file for writing+
	printf("\nMedicine Name : ");
	while(scanf("%s", stock.name) != -1) {
		printf("\nMedicine Name : ");
		//scanf("%s", stock.name);
		if(stock.name[0] >= 'a' && stock.name[0] <= 'j') 
			fp = fopen("a-j.txt", "a");
		else if(stock.name[0] >= 'k' && stock.name[0] <= 'r') 
			fp = fopen("k-r.txt", "a");
		else if(stock.name[0] >= 's' && stock.name[0] <= 'z') 
			fp = fopen("s-z", "a");
		else
			printf("OPen failed.");
		
		fprintf(fp, "%s\n", stock.name);	//write to file
		fclose(fp);
	}
	
	return 0;
}

void show_stock(char *name) {
	struct stock s;
	int n = 0;
	FILE *fp;
	fp = fopen("new.txt", "r");
	if(fp == NULL) {
		perror("Stock file could not open.");
	}
	
	if(name[0] >= 'a' && name[0] <= 'j') 
		fp = fopen("a-j.txt", "r");
	else if(name[0] >= 'k' && name[0] <= 'r') 
		fp = fopen("k-r.txt", "r");
	else if(name[0] >= 's' && name[0] <= 'z') 
		fp = fopen("s-z", "r");
	else
		printf("OPen failed.");
	
	
	printf("Stock Name\n");
	while(fscanf(fp, "%s", s.name) != -1){  
		printf("%s\n", s.name);
		n++;
	} 
	
	fclose(fp);
	printf("Total Stock = %d\n",n);
}


generate_bill() {
  float total_amount, amount, sub_total, discount_amount, tax_amount, quantity, value, discount, tax;
  //clrscr();
  printf("\n Enter the quantity of item sold: ");
  scanf ("%f", &quantity) ;
  printf("\n Enter the value of item: ");
  scanf("%f", &value);
  printf("\n Enter the discount percentage: ");
  scanf("%f", &discount);
  printf (" \n Enter the tax: ") ;
  scanf ("%f", &tax) ;
  amount = quantity * value;
  discount_amount = (amount* discount)/100.0;
  sub_total =amount - discount_amount;
  tax_amount= (sub_total*tax) /100.0;
  total_amount =sub_total+ tax_amount;
  //clrscr();
  printf (" \n\n\n ******BILL****** ") ;
  printf("\nQuantitySold: %f", quantity);
  printf("\nPriceperitem: %f", value);
  printf (" \n -------------") ;
  printf ("\nAmount: %f", amount);
  printf (" \n Discount: - %f", discount_amount) ;
  printf ("\n Discounted Total: %f", sub_total) ;
  printf ("\n Tax:+ %f", tax_amount);
  printf("\n-------------");
  printf ("\n Total Amount %f \n", total_amount);
  getchar();
  printf("\n\nTHANK YOU!!!\n");
  exit(0);
}

void a2j() {
	FILE *fp;
	char name[32];
      fp = fopen("a-j.txt", "r");
      if (fp == NULL) {
        printf("File does not exist,please check!\n");
      exit(0); 
      }
      while(fscanf(fp, "%s", name) != EOF)
      	printf("%s\n", name);
      fclose(fp);
}

void k2r() {
	FILE *fp;
	char name[32];
      fp = fopen("k-r.txt", "r");
      if (fp == NULL) {
        printf("File does not exist,please check!\n");
      exit(0); 
      }
      while(fscanf(fp, "%s", name) != EOF)
      	printf("%s\n", name);
      fclose(fp);
}

void s2z() {
	FILE *fp;
	char name[32];
      fp = fopen("s-z", "r");
      if (fp == NULL) {
        printf("File does not exist,please check!\n");
      exit(0); 
      }
      while(fscanf(fp, "%s", name) != EOF)
      	printf("%s\n", name);
      fclose(fp);
}
	
void buy() {
	node data;
	FILE *fp;
      fp = fopen("file1.txt", "w");
      if (fp == NULL) {
        printf("File does not exist,please check!\n");
      exit(0);
      }
	printf("Name:\n");
	scanf("%s", data.name);
	printf("Quantity:\n");
	scanf("%d", &data.quantity);
	printf("Price:\n");
	scanf("%f", data.price);
	printf("Exp(yyyymm):\n");
	scanf("%s", &data.exp);
	fwrite(&data, sizeof(data), 1, fp);
	fclose(fp);
}
void reminder() {
	node data;
	char st[20];
	int a,b;
	FILE *fp;
	fp = fopen("file1.txt", "r");
	if (fp == NULL) {
        	printf("File does not exist,please check!\n");
		exit(0);
	}
	printf("Enter todays date(yyyy/mm):");
	scanf("%s", st[20]);
	a = atoi(st);
	while(fread(&data, sizeof(data), 1, fp) != 0) {
	b = atoi(data.exp);
	if( b - a <= 0)
		printf("Epired!!!!");
	else
		printf("Time is left!\n");
	}
	fclose(fp);
}
