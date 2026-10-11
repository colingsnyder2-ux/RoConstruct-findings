// from server: 60% by atomic.potato
struct S {
    char pad[0x18];
    int (__stdcall *fn)(int, int);
    int offset1c;
    int offset20;
    void method(int a, int b);
};

void S::method(int a, int b)
{
    char *p = (char *)a;
    if (p)
        p -= 0x18;
    else
        p = 0;
    unsigned char idx = *(unsigned char *)b;
    int *base = (int *)(p + 0x140);
    int v = *(int *)((char *)base + offset20);
    v += offset1c;
    int (__stdcall *f)(int, int) = fn;
    f(v, idx);
}
