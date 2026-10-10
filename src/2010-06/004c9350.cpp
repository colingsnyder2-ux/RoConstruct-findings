// from server: 51% by atomic.potato
extern "C" void __cdecl sub_4c6410(int, int, int);

struct S
{
};

void __cdecl f(int a, int b)
{
    if (a == 4)
    {
        *(int*)b = 0x00b8dbb0;
        *(unsigned char*)(b + 4) = 0;
        *(unsigned char*)(b + 5) = 0;
    }
    else
    {
        sub_4c6410(0, b, a);
    }
}
