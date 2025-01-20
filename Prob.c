// #include <stdio.h>

// int main(){
//     int a; // variable declaration
//     a=6;   // variable initialisation
//     printf("The output of this program is : %d",a);
//     return 0;
// }

// a constant is a value which can be changed
 
//char will always take space of 1 byte(8bits) as per C standard
//int and flaot size depend on the type of system but usually it is 4 bytes (32bits)

// #include <stdio.h>

// int main(){
//     int a =1;
//     float b=10.4;
//     printf("The value of a is : %d",a);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // Print the size of different data types
//     printf("Size of int: %zu bytes\n", sizeof(int));
//     printf("Size of char: %zu bytes\n", sizeof(char));
//     printf("Size of float: %zu bytes\n", sizeof(float));

//     return 0;
// }

//receiving input from the user

// #include <stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a);  //& is used for the address of variable
//     printf("The value of a entered by the user is %d",a);
//     return 0;
// }

// program to calc the area of the rect
// #include <stdio.h>

// int main(){
//     int a=4;
//     int b=9;
//     printf("The area of the rectangle is : %d",a*b);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a);
//     int b;
//     scanf("%d",&b);
//     printf("The area of the rectangle is : %d",a*b);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int rad,hei;
//     scanf("%d",&rad);
//     scanf("%d",&hei);
//     printf("The area of the circle is %.2f",3.14*(rad*rad)*hei);
//     return 0;}


// #include<stdio.h>

// int main(){
//     float cel;
//     scanf("%f",&cel);
//     float ans=(9.0/5.0)*cel +32;
//     printf("The required temperature in fahrenheit is : %f",ans);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=4, b=3,c=7;
//     int z=a*b/c;
//     printf("The result is %d",z);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int year;
//     scanf("%d",&year);
//     if ((year%4==0 && year%100!=0) || year%400==0){
//         printf("The provided year is a leap year");
//     } 
//     else{
//         printf("The provided year is not a leap year");
//     }
//     return 0;

// }

// #include <stdio.h>
// int main(){
//     int a=45;
//     int b=7;
//     a>b?printf("A is greater"):printf("B is greater");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a;
//     scanf("%d",&a);
//     switch(a){
//         case 1:
//             printf("You entered 1");
//             break;
//         case 2:
//             printf("U entered 2");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int marks;
//     scanf("%d",&marks);
//     if (90<=marks<=100){
//         printf("A");
//     }
//     else if(80<=marks<90){
//         printf("B");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int s1;
//     int s2;
//     int s3;
//     scanf("%d",&s1);
//     scanf("%d",&s2);
//     scanf("%d",&s3);
//     float avg=(s1+s2+s3)/3*100;
//     if (avg>=40 &&(s1,s2,s3)>33){
//         printf("Pass");
//     }
//     else{
//     printf("Fail");}
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int amount;
//     scanf("%d",&amount);
//     if (amount<250000){
//         printf("0");
//     }
//     else if(amount>=250000 && amount<500000){
//         int tax=0.05*amount;
//         printf("The payable tax is : %d",tax);
//     }
//     else if (amount>=500000 && amount <=1000000){
//         int t1= amount*0.20;
//         printf("The payable tax is : %d",t1);
//     } 
//     else{
//         printf("The payable tax is : %d",amount*0.30);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char s;
//     scanf("%c",&s);
//     if (s>=97 && s<=122){
//         printf("The character is lowercase");
//     }
//     else{
//         printf("NOT lowercase"); 
//            }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i=0;
//     while (i>=10 && i<=20){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     for (int i=0;i<=3;i++){
//         printf("The value of i is : %d\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the numebr upto which you want to get printed:");
//     scanf("%d",&n);
//     for (int i=n; i>=0;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     for (int i=0; i<8; i++){
//         if (i==4){
//             continue;
//         }
//         else{
//         printf("%d",i);
//     }}
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n=10;
//    printf("Enter the number of which you want to get the table:");
//     scanf("%d",&n);
//     for (int i=n; i>=0;i--){
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n=1;
//     int csum=0;
//     while (n<10){
//         csum+=n;
//         n++;
//     }
//     printf("%d",csum);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int csum=0;
//     for (int i=1; i<=10;i++){
//         csum+=i;
//     }
//     printf("%d",csum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n=1;
//     int csum=0;
//     do{
//         csum+=n;
//         n++;
//     }
//     while (n<=10);
//     printf("%d",csum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int pro=1;
//     int n=4;
//     for (int i=1; i<=n;i++){
//         pro*=i;
//     }
//     printf("%d",pro);
//     return 0;
// // }

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int prime=0;
//     for (int i=2; i<=n;i++){
//         if (n%i==0){
//             prime=1;
//             break;
//         }
//     }
//     if (prime){
//         printf("not Prime");
//     }
//     else{
//     printf(" prime");}

// }

// #include<stdio.h>

// //Function prototype
// int sum(int,int);

// //Function defintion
// int sum(int x, int y){
//     // printf("The sum is %d",x+y);
//     return x+y;
// }
// int main(){
//     int x,y;
//     scanf("%d",&x);
//     scanf("%d",&y);
//     printf("%d",sum(x,y));            //Function call
//     return 0;
// }


// #include <stdio.h>

// void d1();
// void d2();
// void d3();

// void d1(){
//     printf("Good Morning!\n");
// }
// void d2(){
//     printf("Good Evening!\n");
// }
// void d3(){
//     printf("Good Night!");
// }

// int main(){
//     d1();
//     d2();
//     d3();
//     return 0;
// }

// #include <stdio.h>

// int area(int);

// int area(int side){
//     return 4*side;
// }

// int main(){
//     int side;
//     printf("Enter the side of the square:");
//     scanf("%d",&side);
//     int c=area(side);
//     printf("The area of the square is :  %d",c);
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>

// int main(){
//     int side;
//     scanf("%d",&side);
//     int area =(int) pow(side,2);
//     printf("The area of the square is : %d",area);
//     return 0;
// }

// #include <stdio.h>

// int factorial(int a){
//     if (a==0 || a==1){
//         return 1;
//     }
//     return factorial(a-1)*a;
// }


// int main(){
//     int a=3;
//     printf("The factorial is : %d",factorial(a));
//     return 0;
// }

// #include <stdio.h>

// float avg(int, int , int);

// float avg(int a, int b, int c){
//     int sum=a+b+c;
//     float ag=sum/3;
//     return ag;
// }

// int main(){
//     int a;
//     int b;
//     int c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     printf("The average is :%.2f",avg(a,b,c));
//     return 0;
// }

// #include <stdio.h>

// float con(float);

// float con(float temp){
//     return (9.0/5.0)*temp+32;
// }

// int main(){
//     float temp;
//     scanf("%f",&temp);
//     printf("The temperatue in Fahrenheit is : %.2f",con(temp));
//     return 0;
// }

// #include <stdio.h>

// float ans(int);

// float ans(int w){
//     return 9.8*w;
// }

// int main(){
//     int w;
//     scanf("%d",&w);
//     printf("%.2f",ans(w));
//     return 0;
// }


// #include <stdio.h>

// int fibo(int);

// int fibo(int n){
//     if (n==1 || n==2){
//         return n-1;
//     }
//     return fibo(n-1) + fibo(n-2);
// }

// int main(){
//     int n=4;
//     printf("%d",fibo(n));
//     return n;
// }

// 
// #include <stdio.h>

// int main(){
//     int a=75;
//     int* j=&a; // j is a pointer pointing to a
//     // printf("The address of a is : %p",&a);
//     // printf("The address of a is : %p\n",j);
//     // printf("THe value at j is %d",*j);
//     printf("%p",&j);
//     return 0;
// }

//pointer to pointer

// #include <stdio.h>

// int main(){
//     int i=6;
//     int* j=&i;
//     int** k=&j;

//     printf("The value of i is %d",i);
//     printf("The value of i is %d",*j);
//     printf("The value of i is %d",*(&j));
// }

// #include <stdio.h>

// int sum(int*, int*);

// int sum(int* a, int* b) {
//     *a = 6; // Modify the value pointed to by a
//     return (*a + *b);
// }

// int main() {
//     int x = 1, y = 4;

//     // Call the sum function
//     int result = sum(&x, &y);

//     // Print the modified value of x and the result
//     printf("Modified value of x: %d\n", x);
//     printf("Sum result: %d\n", result);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a = 5;
//     printf("The address of %d is %p",a,&a);
//     printf("The value of a is %d",a);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int marks[4];
//     marks[0]=1;
//     marks[1]=2;
//     printf("First value is :%d",marks[0]);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int marks[5];
//     printf("Enter your marks below:");
//     for (int i=0; i<5;i++){
//         scanf("%d",&marks[i]);
//     }
//     printf("The marks are %d\n,%d\n,%d\n,%d\n,%d\n,%d\n",marks[0],marks[1],marks[2],marks[3],marks[4]);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char a='4';
//     char *ptr=&a;
//     printf("THe address of a is %u\n",&a);
//     ptr++;
//     printf("Now: %u",ptr);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int marks[3];
//     printf("ENter marks: ");
//     for (int i=0; i<3; i++){
//         scanf("%d",&marks[i]);
//     }
//     for (int i=0; i<3;i++){
//         printf("The address of marks %d is %u\n",i, &marks[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int marks[]={1,4,8,6,2};
//     int* ptr=&marks[0];
//     for (int i=0; i<5;i++){
//         printf("The marks at index %d is %u\n",i,*ptr);
//         ptr++;
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int arr[3][2];
//     for (int i=0; i<3;i++){
//         for (int j=0;j<2;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (int i=0; i<3; i++){
//         for (int j=0; j<3;j++){
//             printf("%d",arr[i][j]);
//         }
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){
// //     int arr[10]={4,5,8,5,788,22,33,99,226,44};
// //     int* ptr=arr;
// //     printf("The value at address %u is %d\n",ptr+3, *(ptr+3));
// //     return 0;
// // }

// //wap to reverse an array passsed to it
// #include <stdio.h>

// void printarray(int a[], int n) {
//     for (int i = 0; i < n; i++) {  // Use the actual array size
//         printf("%d ", a[i]);
//     }
//     printf("\n");
// }

// void reverse(int a[], int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int temp;
//         temp = a[i];
//         a[i] = a[n - i - 1];
//         a[n - i - 1] = temp;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

//     printf("Original array: ");
//     printarray(arr, n);

//     reverse(arr, n);

//     printf("Reversed array: ");
//     printarray(arr, n);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char s[]="Jaijit";
//     int n=sizeof(s);
//     for (int i=0; i<n; i++){
//         printf("%c",s[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char st[30];
//     gets(st);
//     printf("%s",st);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char st[]="Jaijit ";
//     char s1[]="Singh";
//     strcat(st,s1);
//     printf("%s",st);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[100];
//     scanf("%s",s);

//     char st[100];
//     int n;
//     scanf("%d",&n);
//     for (int i=0; i<n;i++){
//         scanf("c",&st[i]);
//         fflush(stdin);
//     }
//     s[5]='\0';
//     int a= strcmp(s,st);
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char s[] = "abc";
//     int len = 0;
    
//     for (int i = 0; s[i] != '\0'; i++) {
//         len++;
//     }
    
//     printf("%d", len);
//     return 0;
// }


// wap to slice a string
// #include <stdio.h>
// #include <string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     struct employee e1,e2,e3;
//     strcpy(e1.name, "Jaijit");
//     e1.code=45;
//     e1.salary=454.4;
//     printf("%d %.2f %s", e1.code, e1.salary, e1.name);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };

// int main(){
//     struct employee e1;
//     e1.code=98;
//     struct employee *ptr;
//     ptr=&e1;
//     printf("%d",ptr->code);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// void show(struct employee e){
//     printf("%d %.2f %s",e.code, e.salary, e.name);
// }
// int main(){
//     struct employee e;
//     strcpy(e.name, "Jaijit");
//     e.code=45;
//     e.salary=45.15;
//     show(e);
//     return 0;
// }

// #include <stdio.h>

// typedef struct employee{
//     int code;
//     float salary;
//     char name[10];
// } Emp;
// int main(){
//     Emp e1;
//     e1.code=45;
//     printf("%d",e1.code);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     FILE *ptr;
//     ptr= fopen("file1.txt","r");
//     if(ptr==NULL){
//         printf("The file does not exist");
//     }
//     else{
//     int num=45;
//     fprintf(ptr,"%d",&num);
//     }
//     fclose(ptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr=fopen("file.txt","w");
//     // char c=fgetc(ptr);
//     fputc('c',ptr);
//     // printf("%c",c);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     int* ptr;

//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     // Correct malloc usage
//     ptr = (int*) malloc(n * sizeof(int));
    
//     if (ptr == NULL) { // Check if malloc failed
//         printf("Memory allocation failed!\n");
//         return 1; // Exit with error code
//     }

//     printf("Memory allocated successfully for %d integers.\n", n);

//     free(ptr); // Deallocate the memory
//     return 0;
// }

// extern int a=90;