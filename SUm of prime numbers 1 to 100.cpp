#include <stdio.h>

int main()
{
    int i=212, j, end=300;
    int isPrime, sum=0;

    /* Input lower and upper limit from user */
    //printf("Enter lower limit: ");
    //scanf("%d", &start);
   // printf("Enter upper limit: ");
   // scanf("%d", &end);

    /* Find all prime numbers in given range */
    while(i<=end)
    {
	
	
    

        /* Check if the current number i is Prime or not */
        isPrime = 1;
        for(j=2; j<=i/2;j++)
        {
            if(i%j==0)
            {
                /* 'i' is not prime */
                isPrime = 0;
                break;
            }
        }

        /*
         * If i is Prime then add to sum
         */
        if(isPrime==1)
        {
            sum += i;
        }
    i++;
}

    printf("Sum of all %d prime numbers  = %d", end, sum);

    return 0;
}

