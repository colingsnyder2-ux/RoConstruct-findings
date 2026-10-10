// from server: 86% by atomic.potato
struct S
{
    char padding[188];
    int value;
    int f();
};

extern "C" void *__cdecl G1_func_008044d0();
extern "C" int G1_func_00815b70(void *);

int S::f()
{
    if (value == 0)
    {
        void *p = G1_func_008044d0();
        if (*((int *)G1_func_00815b70(p) + 1) > 0)
            return 1;
    }
    return 0;
}
