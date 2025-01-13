#include <stdio.h>
#define MAXR 30
#include <ctype.h>
#include <string.h>

void binary(int n ) {
    int i, j, n;
    n = 0;
    printf("insert an integer >= 2 : ");
    scanf("%d", &n);
    if (n < 2) {
        printf("error: value < 2");
        return -1;
    }
    for (i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    for (i = 2; i < n; i++) {
        printf("*");
        for (j = 2; j < n; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    for (i = 0; i < n; i++) {
        printf("*");
    }
}
//    int n;
//
//    printf("enter number of persone: ");
//    scanf("%d",&n);
//
//    int age[n] , height[n],i;
//    int average_age ,average_height , sum_age=0 , sum_height=0;
//
//    for (i=0;i<n;i++){
//        printf("\nenter age of persone %d:" , i+1);
//        scanf("%d",&age[i]);
//        printf("enter height of persone %d:" ,i+1);
//        scanf("%d",&height[i]);
//        sum_age +=age[i];
//        sum_height += height[i];
//        printf("%d %d",age[i],height[i]);

//    }
//    average_age = sum_age / n;
//    average_height = sum_height / n;
//
//    printf("\naverage age of %d persone is %d and average height is %d",n,average_age,average_height);


//    int p ;
//    for(p=1 ; 2*p <= n; p=p*2);
//    printf("%d , %d" ,n,p);
//    return 0;
//}
void binary (int n) {
    int p;
    for (p = 1; p <= n; p = p * 2);
    while (p > 0) {
        if (p <= n) {
            printf("1");
            n = n - p;
        } else {
            printf("0");}
        p = p / 2;}

    printf("\n");
}
int main(){
//    int num = 10;
//    binary(num);
//    char c = '8';
//    int b = c-'0';
//    printf("%d",b);
//    char ch , namefile[MAXR+1];
//    FILE *fpin , *fpout;
//    printf("name of input file:  ");
//    scanf("%s",&namefile);
//    fpin = fopen(namefile,"r");
//    printf("name of output file: ");
//    scanf("%s",&namefile);
//    fpout = fopen(namefile,"w");
//    while (fscanf(fpin,"%c",ch) ==1){
//        if(ch >= '0' && ch <= '9' ) ch = '0'+('9'-ch);
//        else if ( ch >= 'a' && ch <= 'z') ch = 'A' - ('z' -ch);
//        else if(ch >= 'A' && ch <= 'Z') ch = 'a' - ('Z' -ch);
//    }
//    fclose(fpin);
//    fclose(fpout);

//
//    char str1[] = "apple";
//    char str2[] = "apple";
//    char str3[] = "banana";
//    char str4[] = "apricot";
//
//    int result;
//
//    // Comparing str1 and str2
//    result = strcmp(str1, str2);
//    printf("strcmp(str1, str2) = %d\n", result);  // Output: 0
//
//    // Comparing str1 and str3
//    result = strcmp(str1, str3);
//    printf("strcmp(str1, str3) = %d\n", result);  // Output: a negative number
//
//    // Comparing str1 and str4
//    result = strcmp(str1, str4);
//    printf("strcmp(str1, str4) = %d\n", result);
//    int Monotonous = 1; // property holds: initialized to 1
//    int i;
//    int xi, xj;
//
//    printf("x0= "); scanf("%d", &xi);
//
//    for (i=1; i<xi; i++) {
//        printf("x%d= ", i); scanf("%d", &xj);
//        if (xi > xj){
//// test on subsequent values
//            Monotonous = 0;
//            break;
//        }
//// update the logic variable
//        xi = xj;
//    }




    return  0;
}

