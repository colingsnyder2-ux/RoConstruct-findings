// from server: 63% by atomic.potato
extern "C" void __cdecl sub_62b3e0(int);

struct S
{
};

void __cdecl f(int value, int* p)
{
    if (value == 4)
    {
        p[0] = 0x00bb2370;
        ((char*)p)[4] = 0;
        ((char*)p)[5] = 0;
    }
    else
    {
        sub_62b3e0(value);
    }
}
