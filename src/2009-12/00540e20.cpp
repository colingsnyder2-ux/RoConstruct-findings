// from server: 65% by atomic.potato
extern "C" void __cdecl sub_53E320(int, int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        b = c;
        sub_53E320(0, a, b, c);
        return;
    }

    *(int*)b = 0xB1E090;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
