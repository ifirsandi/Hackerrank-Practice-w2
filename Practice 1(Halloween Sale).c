#include <stdio.h>
#include <stdlib.h>

int main()
{
    long m, p, d, s;
    scanf("%ld %ld %ld %ld", &p, &d, &m, &s);
    long count=0;
    int count1=0;
    long j;
    for (long i=p; i>=m; i=i-d){
        count = count + i;
        count1++;
        //j =i;
        //printf("%ld ", i);
        if (count >= s){
            break;
        }
    }
    if (count+m<s){
        while (count+m <= s){
            count= count +m;
            count1++;
        }
    }
    if (s<p){
        printf ("0");    
    } else {
    printf ("%d", count1);
    }
    return 0;
}


