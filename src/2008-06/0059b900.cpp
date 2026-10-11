// from server: 53% by atomic.potato
struct S
{
    void f(void *, void *);
    void *field18;
};

typedef void *(__thiscall *GetFn)(void *, void *);
typedef void (__thiscall *InvokeFn)(void *, void *, void *);

extern "C" void *__cdecl G1_func_0059b730(void *, void *);

void S::f(void *a, void *b)
{
    void *v;
    GetFn *p;
    p = (GetFn *)field18;
    v = G1_func_0059b730(b, &v);
    ((InvokeFn *)*p)[0](field18, a, v);
}
