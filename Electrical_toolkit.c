#include <stdio.h>

int main()
{
    int choice, subchoice, n, i;
    float current, resistance, voltage;
    float total = 0, sum = 0, req;

    printf("====================================\n");
    printf("      ELECTRICAL TOOLKIT\n");
    printf("====================================\n");

    printf("1. Ohm's Law Calculator\n");
    printf("2. Equivalent Resistance Calculator\n");
    printf("3. Both\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1 || choice == 3)
    {
        printf("\n------ OHM'S LAW ------\n");

        printf("Enter Current (A): ");
        scanf("%f", &current);

        printf("Enter Resistance (Ohm): ");
        scanf("%f", &resistance);

        if(current <= 0 || resistance <= 0)
        {
            printf("\nInvalid Input!\n");
        }
        else
        {
            voltage = current * resistance;
            printf("\nVoltage = %.2f Volt\n", voltage);
        }
    }

    if(choice == 2 || choice == 3)
    {
        printf("\n------ EQUIVALENT RESISTANCE ------\n");

        printf("1. Series\n");
        printf("2. Parallel\n");

        printf("Enter Choice: ");
        scanf("%d", &subchoice);

        printf("Enter number of resistors: ");
        scanf("%d", &n);

        if(subchoice == 1)
        {
            total = 0;

            for(i = 1; i <= n; i++)
            {
                printf("Enter Resistance %d: ", i);
                scanf("%f", &resistance);

                total = total + resistance;
            }

            printf("\nEquivalent Resistance = %.2f Ohm\n", total);
        }

        else if(subchoice == 2)
        {
            sum = 0;

            for(i = 1; i <= n; i++)
            {
                printf("Enter Resistance %d: ", i);
                scanf("%f", &resistance);

                if(resistance <= 0)
                {
                    printf("\nInvalid Resistance!\n");
                    return 0;
                }

                sum = sum + (1.0 / resistance);
            }

            req = 1.0 / sum;

            printf("\nEquivalent Resistance = %.2f Ohm\n", req);
        }

        else
        {
            printf("\nInvalid Choice!\n");
        }
    }

    if(choice == 4)
    {
        printf("\nThank You!\n");
    }

    if(choice < 1 || choice > 4)
    {
        printf("\nInvalid Choice!\n");
    }

    return 0;
}