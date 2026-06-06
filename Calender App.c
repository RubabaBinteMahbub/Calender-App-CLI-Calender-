#include<stdio.h>
#include<stdlib.h>
//#include<windows.h>

// ANSI Escape Code (for color change inside printf() function)
#define RED "\033[31m"  // starting red color
#define RESET "\033[0m" // color reset

int getFirstDayOfTheYear(int year){
    return (year*365 + ((year-1)/4) - ((year-1)/100) + ((year-1)/400)) % 7;
}

int main(){
    // Changing Console Color
    // system("color 3F");

    char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    printf("\n=======================================\n");
    printf("           CALENDAR  %d  ",                                                           year);
    printf("\n=======================================\n");

    if((year%400 == 0) || (year%4 == 0 && year%100 !=0)){
        daysInMonth[1] = 29;
    }

    // Initializing weekDay with 1st day of January (1st day of a year)
    int weekDay = getFirstDayOfTheYear(year);

    // Starting of a new month
    int spaceCounter = 0 ;
    for(int i=0; i<12; i++){
        int totalDays = daysInMonth[i];
        printf("\n------------ %s ------------\n", months[i]);
        printf("\n Sun Mon Tue Wed Thu " RED"Fri Sat"RESET "\n");

        for(spaceCounter = 1; spaceCounter<=weekDay; spaceCounter++){
            printf("    ");
        }

        // Printing dates
        for(int j=1; j<=totalDays; j++){
            //printf("%4d", j);

            if(weekDay == 5 || weekDay == 6){
                printf(RED"%4d"RESET , j);
            }else{
                printf("%4d", j);
            }

            weekDay++;

            if(weekDay>6){
                weekDay = 0;
                printf("\n");
            }
        }

        // End of a month
        printf("\n");
    }

    return 0;
}
