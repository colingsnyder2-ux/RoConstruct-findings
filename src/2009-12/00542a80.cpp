// from server: 56% by atomic.potato
extern "C" void __cdecl sub_53F7D0(int, int, int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_53F7D0(a, b, c, 0, c);
        return;
    }

    *(int*)b = 0x00B1E248;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
