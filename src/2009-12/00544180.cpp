// from server: 63% by atomic.potato
struct S
{
};

extern "C" void __cdecl sub_543CB0(int value);

void __cdecl f(int value, int *p)
{
    if (value == 4)
    {
        p[0] = 0xB1EDA0;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
    else
    {
        sub_543CB0(value);
    }
}
