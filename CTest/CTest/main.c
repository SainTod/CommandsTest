//
//  main.c
//  CTest
//
//  Created by Vladimir on 6/4/14.
//  Copyright (c) 2014 Vladimir. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, q, mp[106],i,j,firstmp,secondmp,tempconst;
    char requesttype;
    //char *Requests[105];
    scanf ("%d %d",&n, &q);
    /*for (i = 0; i<q; i++)
    {
        Requests[i] = (char*) malloc (5 * sizeof(char));
        scanf ("%[5]", Requests[i]);
    }*/
    for (i=0; i<n; i++)
    {
        mp[i] = i;
    }
    for (i=0; i<q; i++)
    {
        getchar();
        scanf ("%c %d %d",&requesttype, &firstmp, &secondmp);
        if (requesttype == 'U')
        {
            if (mp[firstmp] == mp[secondmp])
            {
                printf("BORE\n");
            }
            else
            {
                printf ("NEWS!\n");
                tempconst = mp[secondmp];
                for (j=0; j<n; j++)
                {
                    if (mp[j] == tempconst)
                    {
                        mp[j] = mp[firstmp];
                    }
                }
            }
        }
        else
        {
            if (mp[firstmp] == mp[secondmp])
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

