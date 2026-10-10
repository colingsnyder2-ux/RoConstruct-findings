// from server: 82% by atomic.potato
extern "C" void __cdecl sub_45a1b0(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        sub_45a1b0(b);
        return;
    }

    *(unsigned int*)a = 0x00b83238;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
