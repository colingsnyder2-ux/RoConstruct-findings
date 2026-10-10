// from server: 35% by atomic.potato
struct S
{
    virtual void f(int, int);
};

void S::f(int, int)
{
    ((void (__thiscall *)(S *, int, int))(*(int **)this + 0x1ac))(this, 0, 1);
}
