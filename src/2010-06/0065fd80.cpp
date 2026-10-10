// from server: 59% by atomic.potato
extern "C" void __cdecl sub_65f170(int, int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_65f170(a, b, c, 0);
    }
    else
    {
        *(int*)b = 0x00bbb6f8;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
    }
}
