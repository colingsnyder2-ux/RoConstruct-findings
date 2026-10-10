// from server: 82% by atomic.potato
typedef unsigned char byte;

extern "C" void __cdecl Function908200(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int value)
{
    if (value != 4)
    {
        Function908200(value);
        return;
    }

    *(int*)a = 0x00BFE830;
    *((byte*)a + 4) = 0;
    *((byte*)a + 5) = 0;
}
