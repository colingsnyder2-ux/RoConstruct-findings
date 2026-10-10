// from server: 72% by atomic.potato
struct S
{
    typedef void (__thiscall *Fn)(S *, int, unsigned char);

    Fn *vtable;
    void f(unsigned char *value);
};

void S::f(unsigned char *value)
{
    ((Fn)vtable[0x39])(this, 0, *value);
}
