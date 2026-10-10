// from server: 60% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    typedef int (__thiscall *Fn)(void *);
    Fn fn = *(Fn *)((char *)*(void ***)this + 0xE8);
    return fn(this) != 0;
}
