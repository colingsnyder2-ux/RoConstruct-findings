// from server: 81% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        ((void (*)(int, int, int))0x702df0)(a, b, c);
        return;
    }

    *(int*)b = 0xb49060;
    *(char*)(b + 4) = 0;
    *(char*)(b + 5) = 0;
}
