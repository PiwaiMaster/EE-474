#ifdef __cplusplus
 extern "C" {
#endif
#ifndef C_PROG2_H_INCLUDED
#define C_PROG2_H_INCLUDED

/*
 *      ECE 474 HW 3
 *      
 *
 *      Student Name:
 *      Student ID:
 *
 *      WRITE ANY NEW FUNCTION PROTOTYPES IN THIS FILE
 *      
 *      Note: You will need to modify the definition of Person as well.
 *
 */
#include <stdio.h>
#include <stdint.h>
char a_array[] = {'A','B','C','D','E','F','G','H','I','J','K',
'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

/*************************************************************************
   Part 2.1:  Bitwise operations
*************************************************************************/
long mangle(long SID);



int  bit_check(int data, int bits_on, int bits_off);


/*************************************************************************
   Part 2.2:  Basic Pointer declaration and usage
*************************************************************************/
char * pmatch(char c);


/*************************************************************************
   Part 2.3:  Pointer Arithmetic
*************************************************************************/
char nlet(char* ptr);


int ldif(char c1, char c2);



/*************************************************************************
   Part 2.4   struct and sizeof
*************************************************************************/
// Modify this struct definition according to the instructions
// HINT: How long do each of these fields need to be?
typedef struct Person {
    char FirstName[20];
    char LastName[30];
    char StreetAddr[80];
    char ZipCode[6];
    double Height;
    float Weight;
    long int DBirth;
} Person ;

int personSize(Person p);



void float_to_ints(float, int*);



// Modify this definition 
// NOTE: This is used to store the output string of per_print.
// How long does this need to be?
char* personbuf;

char* per_print(Person* p, char* personbuffs);



#endif // C_PROG2_H_INCLUDED
#ifdef __cplusplus
}
#endif
