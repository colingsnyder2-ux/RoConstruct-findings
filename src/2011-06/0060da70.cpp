// from server: 80% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    int *p = *(int **)((char *)this + 8);
    if (p)
        ((void (__thiscall *)(int *, int))(*(int **)p))((int *)p, 1);
}
