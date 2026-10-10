// from server: 43% by atomic.potato
extern "C" void __cdecl sub_5074c0(int, int, int, int, int);

struct S
{
};

void __cdecl f(int unused, int object, int value)
{
    if (value == 4)
    {
        *((int *)object) = 0xB15EF0;
        *((char *)object + 4) = 0;
        *((char *)object + 5) = 0;
    }
    else
    {
        sub_5074c0(0, 0, 0, value, 0);
    }
}
