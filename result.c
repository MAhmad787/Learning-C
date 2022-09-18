#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Pesudo Code

    //........................................................................................*
    // 1. Prompt User for Name
    // 2. Prompt User for Class
    // 3. Prompt User for Number of Subjects
    // 4. Get Obt & Total Marks of Individual Subject
    // 5. Calculate Total Marks Both Obt & Total
    // 6. Calculate The Grade
    // 7. Ending Note
    //........................................................................................*

    // Actual Code

    // Prompt User for Name
    string name = get_string("Your Good Name? ");
    for (int i = 0; i < strlen(name); i++)
    {
        while (name[i] < 'a' || name[i] > 'z')
        {
            name = get_string("Your Good Name? ");
        }
    }
    // Prompt User for Class
    int class;
    do
    {
        class = get_int("Your Class? ");
    } while (class <= 0);

    // Prompt User for Number of Subject
    int number;
    do
    {
        number = get_int("How many Number of subjects You Have? ");
    } while (number <= 0);

    // Initializing The Arrays
    float tot_marks[number];
    float obt_marks[number];

    // Get the Marks
    for (int i = 0; i < number; i++)
    {
        // Get the Total

        do
        {
            tot_marks[i] = get_int("Total Marks In Subject %i : ", i + 1);
        } while (tot_marks[i] <= 0);

        // Get the Obtained

        do
        {
            obt_marks[i] = get_int("Obtained Marks of Subject %i : ", i + 1);
        } while (obt_marks[i] < 0 || obt_marks[i] > tot_marks[i]);
    }

    printf("\n");

    // Calculate the Total Marks
    float total = 0;
    for (int i = 0; i < number; i++)
    {
        total = total + tot_marks[i];
    }
    printf("Total Marks : %.f\n", total);

    // Calculate the Obtained Total Marks
    float obt_tot = 0;
    for (int i = 0; i < number; i++)
    {
        obt_tot = obt_tot + obt_marks[i];
    }
    printf("Obtained Marks : %.f\n", obt_tot);

    // Calculate The Percentage
    float percent = (obt_tot / total) * 100;
    printf("Percentage : %.2f\n", percent);

    // Calculate The Grade
    if (percent > 89)
    {
        printf("Grade A+\nPass! \n");
    }
    else if (percent > 79)
    {
        printf("Grade A\nPass! \n");
    }
    else if (percent > 69)
    {
        printf("Grade B+\nPass! \n");
    }
    else if (percent > 59)
    {
        printf("Grade B\nPass! \n");
    }
    else if (percent > 49)
    {
        printf("Grade C\nPass! \n");
    }
    else if (percent > 39)
    {
        printf("Grade D\nPass! \n");
    }
    else
    {
        printf("Grade F\nFail!\n");
    }
    printf("\n");
}