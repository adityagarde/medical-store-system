
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
void clrscr() {
		printf("\x1b[2J"); //clear screen
		printf("\x1b[1;1f"); // set cursor at 1,1
}
char getch() {
	char ch;
	system("stty raw -echo");
	ch = getchar();
	system("stty cooked echo");
	return ch;
}
int no_supplier=0;
int i, j, m, k, n = 0;
int supplier_name, supplier_code;

struct supplier supplier[MAX_SUPPLIER];


int main() {
char dummy;


//GIVES A WELCOME SCREEN AND OPENS ADMIN MENU
	printf("\n\n\n\t\t\t\tWELCOME\n\n\n\n");
	sleep(1);
	printf("Press a key to continue...");
	dummy = getch();
	 
	clrscr();
	main_menu();
	return 0;
    }
