// from server: 75% by atomic.potato
struct S
{
    char f();
};

char S::f()
{
    int i = 0;
    while (i < 2)
    {
        void **vtable = *(void ***)this;
        S *value = (S *)((S *(__thiscall *)(S *, int))vtable[5])(this, i);
        if (value != 0 && *(S **)((char *)value + 0x24) == this)
            return 1;
        ++i;
    }
    return 0;
}
