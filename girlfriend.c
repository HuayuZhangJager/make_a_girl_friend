#include <stdio.h>

const int main_version = 1;
const int sub_version = 0;
const int patch_number = 0;

int print_ver(void);


int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        printf("U FKing lucky bastard!!!\nYou got a pretty girl friend!!!\nOHHHHHHHHHHHHHH!");
        int ass = 10;
        for (int cat = 0; cat < ass; cat++)
            printf("OHHHHHHHHHHHHHH!\n");
    }
    else
    {
        int i;
        for (i = 0; i < argc; i++)
        {
            if (argv[i] = "--version")
            {
                print_ver();
                return 0;
            }
        }
        // int i;
        // for (i = 0; i < argc; i++)
        //     printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}

int print_ver(void)
{
    printf("Version %d.%d.%d\n", main_version, sub_version, patch_number);
    printf("Under Licese of '浴浴 private License 2.0'\n");
    return 0;
}