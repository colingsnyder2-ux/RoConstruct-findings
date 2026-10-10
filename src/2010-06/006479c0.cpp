// from server: 86% by atomic.potato
struct S
{
    void *f();
};

typedef void *(__thiscall *FunctionType)(void *, void *);
extern FunctionType g_function;

void *Helper(int);

void *S::f()
{
    int *a = *(int **)((char *)this + 12);
    int *b = *(int **)((char *)a + 0xaa0);
    int *value = *(int **)((char *)b + 0x1b4);
    if (!value)
        return 0;
    return g_function((void *)0xbb7110, Helper((int)value));
}
