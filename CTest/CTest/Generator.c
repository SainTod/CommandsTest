//
//  Generator.c
//  CTest
//
//  Created by Vlad on 24/06/2014.
//  Copyright (c) 2014 Vladimir. All rights reserved.
//

#include <stdio.h>
#include <libc.h>
int main()
{
    int n, q, i,temp;
    scanf ("%d %d", &n, &q);
    for (i=0; i<q; i++)
    {
        temp = arc4random_uniform (2);
        if (temp == 0)
        {
            printf ("U ");
        }
        else
        {
            printf ("Q ");
        }
        printf ("%d %d\n", arc4random_uniform (n+1), arc4random_uniform (n+1));
    }
}
    