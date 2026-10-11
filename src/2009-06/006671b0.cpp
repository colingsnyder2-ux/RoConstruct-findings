// from server: 57% by atomic.potato
struct S {
    char pad[0x18];
    int m18;
    int m1c;
    int m20;
    void f(int a, int b);
};

void S::f(int a, int b)
{
    S* p = (S*)a;
    if (p)
        p = (S*)((char*)p - 0x18);
    else
        p = 0;

    int idx = m20;
    float val = *(float*)&b;
    int off = *(int*)((char*)p + 0x140);
    int v = *(int*)(off + idx);
    v += m1c;
    void (*fn)(S*, float) = (void (*)(S*, float))m18;
    fn((S*)((char*)p + v + 0x140), val);
}
