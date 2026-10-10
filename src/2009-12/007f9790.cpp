// from server: 61% by atomic.potato
struct S {
    int f();
};

int S::f()
{
    struct VTable {
        int (__thiscall *fn)(void *);
    };

    void *p = *(void **)((char *)this + 0x180);
    if (p != 0)
        return ((VTable *)*(void **)p)->fn(p);
    return 0;
}
