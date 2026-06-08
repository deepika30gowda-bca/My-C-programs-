#include <stdio.h>
#define MAX 10
void displayMatrix (int matrix [MAX][MAX], 
int vertices)
{
    int i, j;
    printf ("\n Adjacency Matrix : \n");
    for (i = 0; i < vertices; i++)
        for(j = 0; j < vertices; j++)
            printf ("%d ", matrix [i][j]);
        printf ("\n");
}
void main()
{
    int matrix [MAX][MAX] = {0};
    int vertices, edges, i, src, dest, choice;
    printf ("Enter the number of vertices");
    scanf ("%d", &vertices);
    printf ("Enter the number of edges");
    scanf ("%d", &edges);
    printf ("Enter 1 for Directed Graph or 2 for Undirected graph :");
    scanf ("%d", &choice);
    for (i = 0; i < edges; i++)
    {
        printf ("Enter source and destination : ");
        scanf ("%d %d", &src, &dest);
        matrix[src][dest] = 1;
        if (choice == 2) 
            matrix[dest][src] = 1;
    }
    displayMatrix(matrix, vertices);
}
