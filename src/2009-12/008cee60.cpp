// from server: 73% by atomic.potato
struct S
{
    void f(int);
};

typedef void (__thiscall *VFunc)(S *);
typedef void (__thiscall *Callback)(S *, int);

void S::f(int value)
{
    if (value != *(int *)((char *)this + 4))
    {
        VFunc a = *(VFunc *)*(int **)this;
        *(int *)((char *)this + 4) = value;
        a(this);
        Callback b = (Callback)0x008ce330;
        b(this, value);
    }
}
