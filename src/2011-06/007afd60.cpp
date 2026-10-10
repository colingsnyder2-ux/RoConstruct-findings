// from server: 75% by atomic.potato
struct S
{
    struct VTable
    {
        int (__thiscall *get)(S *, int);
    };

    VTable *vptr;
    bool f();
};

bool S::f()
{
    int i = 0;
    while (i < 2)
    {
        S *p = (S *)vptr->get(this, 0);
        if (p != 0 && *(S **)((char *)p + 0x28) == this)
            return true;
        ++i;
    }
    return false;
}
