#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;   // fd   file descriptor
    char Data[20];

    printf("Plz enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);   // O_RDONLY  O_WRONLY   O_RDWR
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened with fd %d\n",fd);
    }

    read(fd,Data,10);
    printf("Data from file is : %s\n",Data);


    close(fd);

    return 0;

}