// from server: 67% by atomic.potato
extern "C" void __cdecl G1_func_008044a0();
extern "C" void *G1_func_00894c70(void *);
typedef void (__thiscall *Fn)(void *, void *);

struct S {
    int f(void *);
};

int S::f(void *arg)
{
    void *p;
    Fn fn;
    p = G1_func_00894c70((void *)((char *)this + 0x100));
    fn = *(Fn *)((char *)*(void **)p + 0x164);
    fn(p, arg);
    return 0;
}
