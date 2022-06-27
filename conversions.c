#include <stdio.h>
int main()
{
    int totalSeconds;
    int hours, minutes, remainingSeconds;
    printf("Enter total seconds that you would like to convert : ");
    scanf("%d", &totalSeconds);
    hours=totalSeconds/60;
    minutes=(totalSeconds-hours*3600)/60;
    remainingSeconds=(totalSeconds-hours*3600)%60;
    printf("Total hours: %d\n",hours);
    printf("Total minutes: %d\n",minutes);
    printf("Total seconds: %d\n",remainingSeconds);
    return 0;
}
