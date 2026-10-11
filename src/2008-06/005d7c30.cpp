// from server: 59% by atomic.potato
struct S {
    char pad[0x18];
    int (__stdcall *fn)(int, float);
    int offset1c;
    int offset20;
    void method(int, int);
};

void S::method(int a, int b)
{
    int *p = (int *)a;
    if (p != 0)
        p = (int *)((char *)p - 0x14);
    else
        p = 0;
    int idx = *(int *)((char *)this + 0x20);
    int *q = (int *)b;
    float val = *(float *)q;
    int base = *(int *)((char *)p + 0x150);
    int v = *(int *)(base + idx);
    v += *(int *)((char *)this + 0x1c);
    int *target = (int *)((char *)p + v + 0x150);
    int (__stdcall *f)(int, float) = *(int (__stdcall **)(int, float))((char *)this + 0x18);
    f((int)target, val);
}
