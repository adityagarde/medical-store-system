
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
#define MAX_SUPPLIER 50

typedef struct supplier {
	char name[25];
	int code;
}sup;

typedef struct stock {
	char name[25];
	//int code;
}stock;

typedef struct Date {
    int dd, mm, yy;
}date;

void searchforsupplier(char *suppliername);


typedef struct node {
	char name[16];
	int quantity;
	char exp[8];
	float price;
	}node;
