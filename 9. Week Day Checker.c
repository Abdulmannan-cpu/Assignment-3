#include <stdio.h>

int main() {
    int day;

    
    printf("Enter a number (1-7) to display the day of the week: ");
    scanf("%d", &day);

    
    if (day < 1 || day > 7) {
        printf("Invalid input\n");
    } else {
        switch (day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default:
                break;
        }
    }

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}