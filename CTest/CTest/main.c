//
//  main.c
//  CTest
//
//  Created by Vladimir on 6/4/14.
//  Copyright (c) 2014 Vladimir. All rights reserved.
//

#include <stdio.h>
//bool ProcessingRequest (char* )


void main()
{
    int n, q, mp[106],i,j;
    char* t, Requests[105];
    scanf ("%d,%d",n,q);
    for (i = 0; i<q; i++)
    {
        Requests[i] = (char*) malloc (5*sizeof(char));
        scanf ("%s",t);
        Requests[i] = t;
    }
    for (i=0; i<n; i++)
    {
        mp[i] = i;
    }
    for (i=0;i<q;i++)
    {
        if (Requests[i][1] == 'U')
        {
            if (Requests[i][3] == Requests[i][5])
            {
                printf("BORE\n");
            }
            else
            {
                printf("NEWS!\n");
                for (j=0; j<n; j++)
                {
                    if (mp[j] == Requests[i][5])
                    {
                        mp[j] = Requests[i][3];
                    }
                }
            }
        }
        else
        {
            if (Requests[i][3] == Requests[i][5])
            {
                printf("MUSIC\n");
            }
            else
            {
                printf("SHOW!\n");
            }
        }
    }
}

