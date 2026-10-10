// from server: 33% by atomic.potato
struct S
{
    typedef int (__thiscall *Fn)(S *, int *, int *, int *);
    int f();
};

int S::f()
{
    Fn fn = *(Fn *)(*(unsigned int **)this + 0x5c);
    return fn(this, *(int **)((char *)this + 4),
              *(int **)((char *)this + 8),
              *(int **)((char *)this + 12));
}
