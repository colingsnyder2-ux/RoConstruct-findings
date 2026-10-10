// from server: 65% by atomic.potato
extern "C" void __cdecl sub_004ec8b0();

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_004ec8b0();
        return;
    }

    *(unsigned long*)b = 0x00b92d30;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
