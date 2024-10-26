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
};
int main(){
struct book Books;

//WE Prompt the user to enter title of the book
printf("Enter the title :");
scanf("%s",&Books.title);

//prompting the user to enter the name of the author 
printf("Enter the name of the author :");
scanf("%s",&Books.author);

//prompt the year of publication 
printf("Enter the year of publication :");
scanf("%d",&Books.publication_year);

//prompting the user to enter ISBN
printf("Enter the ISBN :");
scanf("%s",&Books.ISBN);

//prompting the user to enter the price
printf("Enter the price of the book :");
scanf("%f",&Books.price);

//printing the output 
printf("TITLE :%s\n ",Books.title);//title of the book
printf("AUTHER :%s\n ",Books.author);//name of the author 
printf("PUBLICATION YEAR :%d\n ",Books.publication_year);//year of publication 
printf("ISNB :%s\n ",Books.ISBN);//the ISBN
printf("PRICE :%f\n ",Books.price);//THE price

return 0;
}