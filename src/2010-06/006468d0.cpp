// from server: 85% by atomic.potato
struct S
{
    int f();
    int pad0[3];
};

extern "C" int __cdecl sub_7a93c6(int);
extern "C" int __cdecl sub_9ea8d8(int, int);

int S::f()
{
    int *p = *(int **)((char *)this + 12);
    int *q = *(int **)((char *)p + 0xaa0);
    int v = *(int *)((char *)q + 0x1b4);
    if (v)
        return sub_9ea8d8(0xbaed8c, sub_7a93c6(v));
    return 0;
}
