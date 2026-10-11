// from server: 61% by atomic.potato
extern "C" int G1_func_00711690(void *a, void *b);

struct S
{
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    int local;
    int *p = *(int **)((char *)this + 0x28);
    int *q = (int *)((char *)p[0] + 0x0c);
    int value = G1_func_00711690(b, &local);
    typedef void (__thiscall *Fn)(void *, void *, int);
    ((Fn)(*(void **)q))(p, a, value);
    return 0;
}
