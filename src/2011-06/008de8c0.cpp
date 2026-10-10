// from server: 89% by atomic.potato
extern "C" int G1_func_00a426a8(void*);

struct S
{
    int f(int);
};

int S::f(int index)
{
    if (index >= 0)
    {
        if (index < G1_func_00a426a8((char*)this + 0x84))
            return 1;
    }
    return 0;
}
