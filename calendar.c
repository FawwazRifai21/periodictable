#include<stdio.h>

#define TRUE 1
#define FALSE 0

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *months[] =
{
    "",
    "\n\n\nJanuary",
    "\n\n\nFebruary",
    "\n\n\nMarch",
    "\n\n\nApril",
    "\n\n\nMay",
    "\n\n\nJune",
    "\n\n\nJuly",
    "\n\n\nAugust",
    "\n\n\nSeptember",
    "\n\n\nOktober",
    "\n\n\nNovember",
    "\n\n\nDecember"
};

int inputeyear(void) {
    int year;
    printf("please enter a year:");
    scanf("%d", &year);
    return year;
}

int determineleapyear(int year) {
    if(year %4 == FALSE && year %100 != FALSE || year %400 == FALSE){
        days_in_month[2] = 29;
        return TRUE;
    } else {
        days_in_month[2] = 28;
        return FALSE;
    }
}

void determinedaycode(int year) {
    int daycode
    int d1, d2, d3;
    
    d1=(year - 1.)/4.0;
    d2=(year - 1.)/100.;
    d3=(year - 1.)/400.;
    daycode=(year + d1 - d2 + d3) %7;
    return daycode;
}

int calendar(int year, int daycode) {
    int month, day;
    for(month = 1; month <= 12; month ++) {
        printf("%s", months[month]);
        printf("\n\nSun Mon Tue Wed Thu Fri Sat\n");
        
    }
}

