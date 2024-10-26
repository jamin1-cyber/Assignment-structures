// a program to define a structure known as book
#include <stdio.h>

//header to define a specific string 
#include<string.h>

//assigning a stracture called book
struct book{

//initialising data type to the stracture veriables 
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
};struct book Books;
int main(){

//introducing stracture in the main body of our program 
//struct book Books;

//assigning values to the veriables 
strcpy(Books.title, "introduction to programming");
strcpy(Books.author, "John Smith");
Books.publication_year = 2022;
strcpy(Books.ISBN, "12364866474467");
Books.price = 49.44;

//we print the values of the veriables 
printf("TITLE :%s\n",Books.title);
printf("AUTOR :%s\n",Books.author);
printf("PuBLICATION YER :%d\n",Books.publication_year);
printf("ISNB :%s\n",Books.ISBN);
printf("PRICE :%f\n",Books.price);
return 0;
}