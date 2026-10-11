// from server: 63% by atomic.potato
struct S {
    char pad[0x18];
    int (__stdcall *fn)(int, int);
    char pad2[4];
    int offset;
    int index;
    int method(int, int);
};

int S::method(int a, int b)
{
    int *p = (int *)a;
    if (p)
        p = (int *)((char *)p - 0x14);
    else
        p = 0;
    int *q = (int *)b;
    int v = *q;
    int idx = this->index;
    int *base = (int *)((char *)p + 0x150);
    int off = *(int *)((char *)p + 0x150);
    int val = *(int *)(off + idx);
    val += this->offset;
    int (__stdcall *f)(int, int) = this->fn;
    return f(val + (int)base, v);
}
