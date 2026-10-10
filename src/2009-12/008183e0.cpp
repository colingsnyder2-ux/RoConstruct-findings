// from server: 75% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    if (*(int *)((char *)this + 0x36c))
    {
        int *vtable = *(int **)this;
        int (__thiscall *a)(void *) = (int (__thiscall *)(void *))vtable[0x194 / 4];
        int *object = (int *)a(this);
        int *next = *(int **)object;
        int (__thiscall *b)(int *) = (int (__thiscall *)(int *))next[0x18c / 4];
        return b(object);
    }
    return 0;
}
