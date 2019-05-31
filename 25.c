#include <stdio.h>

#include <stdlib.h>

int main(void)

{
    printf("µ²ªG¡G\n\n");
    int *p[4];
    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int o; 
    p[0]=array[0];
    p[1]=array[1];
    p[2]=array[2];
    p[3]=array[3];
    for (o=0; o<3; o++)
    printf("%d   ", *(p[0]+o));
    printf("\n");
    for (o=0; o<3; o++)
    printf("%d   ", *(p[1]+o));
    printf("\n");
    for (o=0; o<3; o++)
    printf("%d   ", *(p[2]+o));
    printf("\n");   
    for (o=0; o<3; o++)
    printf("%d   ", *(p[3]+o));
    printf("\n");
    system("pause"); 
    return 0; 
}
