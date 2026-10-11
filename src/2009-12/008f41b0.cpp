// from server: 90% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int value)
{
    typedef int (__thiscall *Method)(S *, int);
    typedef int (__thiscall *Method2)(int *);

    Method first = *(Method *)((char *)*(void **)this + 0x14);
    if (first(this, value))
        return 1;

    Method2 second = *(Method2 *)((char *)*(void **)value + 0x168);
    return (second((int *)value) & 3) != 0;
}
