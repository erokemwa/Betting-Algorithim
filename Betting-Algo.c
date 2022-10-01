#Include <stdio.h>

/**
 * main - algorithim that calculates best odds to bet
 * 
 * Return: 0
 */
int main(void)
{
        float odd;
        
        printf("please input your odds: ");
        scanf("%f", &odd);
        printf("Odds = %f\n", odd);
        
        if (odd <= 2.0)
                printf("Best odds possible\n");
        else if (odd > 2.0 && odd < 3.2)
                printf("Good odds possible\n");
        else if (odd > 3.2 && odd < 5.9)
                printf("Hope you're right lad\n");
                
        return (0);
 }
