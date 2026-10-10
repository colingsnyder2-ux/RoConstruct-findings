// from server: 65% by atomic.potato
extern "C" void G1_func_00632570();

struct S
{
    void f(void* a, int b, int c);
};

void S::f(void* a, int b, int c)
{
    if (c != 4)
    {
        G1_func_00632570();
        return;
    }

    *(int*)b = 0x00c4f798;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
