#include <stdio.h>

int main()
{
    int age = 17;
    int age1 = 18;
    int age2 = 24;

    char voter_id = 'N';
    char voter_id1 = 'N';
    char voter_id2 = 'Y';

    int age_limit = 18;

    int ages[3] = {age, age1, age2};
    char voterids[3] = {voter_id, voter_id1, voter_id2};


    int i;
    for (i = 0; i<3; i++)
    {
        if(ages[i]>=age_limit)
        {
            printf("Age %d limit ok, Proceeding to next check...\n", ages[i]);

            if(voterids[i]=='Y')
            {
                printf("Person is elidgible to vote\n");
            }
            else
            {
                printf("Person is not elidgible to vote, Missing voter ID\n");
            }
        }
        else
        {
            printf("Person not elidgible to vote, age requirement failed!\n");
        }
    }
}