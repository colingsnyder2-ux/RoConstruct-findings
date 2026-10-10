// from server: 90% by atomic.potato
struct S
{
    int *p;
    int f(int index);
};

int S::f(int index)
{
    int *q = *(int **)((char *)this + 0xc) + index;
    while (*q == (int)q)
        ++q;
    return index;
}
