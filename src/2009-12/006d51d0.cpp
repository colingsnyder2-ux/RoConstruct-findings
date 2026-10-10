// from server: 85% by atomic.potato
extern "C" int __cdecl sub_7f5286(int);
extern "C" int __cdecl sub_98b768(int, int);

struct S
{
    int f();
    int pad0[3];
};

int S::f()
{
    int *p = *(int **)((char *)this + 12);
    int *q = *(int **)((char *)p + 0xA90);
    int v = *(int *)((char *)q + 0x1B4);
    if (v)
    {
        int r = sub_7f5286(v);
        return sub_98b768(0xB3F1E4, r);
    }
    return 0;
}
