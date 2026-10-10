// from server: 65% by atomic.potato
extern "C" void G1_func_006f7600();

struct S
{
    void f(void* a, int b, int c);
};

void S::f(void* a, int b, int c)
{
    if (c != 4)
    {
        G1_func_006f7600();
        return;
    }

    *(unsigned long*)b = 0x00b46ac0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
