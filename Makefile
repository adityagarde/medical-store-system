project: important.o admin.o add_supplier.o
	cc important.o admin.o add_supplier.o -o project
important.o: important.c common.h
	cc -c important.c 
admin.o: admin.c common.h
	cc -c admin.c
add_supplier.o: add_supplier.c common.h
	cc -c add_supplier.c
