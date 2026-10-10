// from server: 70% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    void **p = *(void ***)((char *)this + 0x0c);
    if (p)
        ((void (__thiscall *)(void *, int))(*(void **)((char *)*p + 0x40)))(*p, 1);
}
