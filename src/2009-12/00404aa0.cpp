// from server: 48% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    void **p = *(void ***)((char *)this + 0x10);
    if (p)
    {
        void (__thiscall *fn)(void *) =
            (void (__thiscall *)(void *))(*(void ***)p)[2];
        fn(p);
    }
    return 0;
}
