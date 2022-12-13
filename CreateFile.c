#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Plz enter file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File is succesfully created with fd %d\n",fd);
    }


    return 0;

}