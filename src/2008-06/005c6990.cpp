// from server: 65% by atomic.potato
struct S
{
    char f();
};

typedef int (__cdecl *CallType)(int);
typedef int (__thiscall *CompareType)(int, const void *);

S *g_object;
CallType g_convert;
CompareType g_compare;

char S::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 516);
    int c = *(int *)((char *)b + 944);

    if (c)
    {
        int d = g_convert(c);
        return g_compare(0x95003c, (const void *)d);
    }

    return 0;
}
