
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
#include <errno.h>
#include "common.h"
void main_menu() {
	int choice;
	char *str = (char *)malloc(100);
	node data;
	while (1) {
		printf("\t\t==========");
		printf("\n\t\tMAIN MENU\n");
		printf("\t\t==========\n");

	printf("	1 Add Suppliers\n"
		"	2 Display Suppliers\n"
		"	3 Search Supplier\n" 
		"	4 Add new stock\n"
		"	5 Display Stock\n"
		"	6 Available Medicines(A-J)\n"
		"	7 Available Medicines(K-R)\n"
		"	8 Available Medicines(S-Z)\n"
		"	9 Buy item\n"
		"	10 Reminder\n"
		"	11 Generate bill\n" 
		"	0 exit\n");
	int choice;
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		printf("\n");
		switch(choice) {
			case 1 :
				add_supplier();
				break;
			case 2 :
				show_supplier();
				break;
			case 3 :
				scanf("%s", str);
				searchforsupplier(str);
				break;
			case 4 :
				new_stock();
				break;
			case 5 :
				printf("Enter the a-j, k-r, s-z\n");
				scanf("%s", str);	
				show_stock(str);
				break;
			case 6 :
				a2j();
				break;
			case 7 :
				k2r();
				break;
			case 8 :
				s2z();
				break;
			case 9 :
				buy();
				break;
			case 10 :
				reminder();
				break;
			case 11 :
				generate_bill();
				break;
			case 0 :
				exit(0);
				break;
		}
	}
}


