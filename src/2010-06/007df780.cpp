// from server: 75% by atomic.potato
struct S
{
    typedef void (__thiscall *Fn)(S *, void *, void *);

    void *vtable;
    void *f(void *p);
};

void *S::f(void *p)
{
    Fn fn = (Fn)(*(void **)((char *)vtable + 0x14c));
    fn(this, 0, p);
    return p;
}
