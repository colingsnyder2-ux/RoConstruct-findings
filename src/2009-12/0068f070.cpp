// from server: 40% by atomic.potato
struct S
{
};

void __cdecl f(int value, int *p)
{
    if (value != 4)
    {
        *p = 0xb36bb0;
        *(char *)(p + 1) = 0;
        *(char *)(p + 1) = 0;
    }
    else
    {
        value = value;
    }
}
